/* 
     This file is part of the Savionic gMS Trainer.
    Copyright (C) 2011 Tyler Coderre <admin@TylerCode.com> 

    This program is free software: you can redistribute it and/or modify 
    it under the terms of the GNU Affero General Public License as 
    published by the Free Software Foundation version 3 as published by 
    the Free Software Foundation. You may not use, modify or distribute 
    this program under any other version of the GNU Affero General Public 
    License. 
 
    This program is distributed in the hope that it will be useful, 
    but WITHOUT ANY WARRANTY; without even the implied warranty of 
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
    GNU Affero General Public License for more details. 
 
    You should have received a copy of the GNU Affero General Public License 
    along with this program.  If not, see <http://www.gnu.org/licenses/>. 
*/
#include "Form6.h"
#include "functions.h"
#include <Windows.h>
#include <string>
#include <time.h>
#include <tchar.h>
#include <stdio.h>
#include <algorithm>

;using namespace Savionic;
using namespace std;

/********************************************
Open Form on button click
********************************************/
void Form6::button46_Click(System::Object^  sender, System::EventArgs^  e)
{

	if(!myForm11->Visible)
	{
		myForm11->Visible = true;
		myForm11->TopMost = false;
	}
	else
	{
		myForm11->Visible = false;
	}
}

bool _JumpCall(bool fJump, const LPBYTE lpbAddress, LPCVOID lpcvHook, const LPBYTE lpbBuffer, size_t cNops){
   if (MakePageRWX(reinterpret_cast<LPCVOID>(lpbAddress))){
      if (lpbBuffer != NULL)
         memcpy(reinterpret_cast<void*>(lpbBuffer), reinterpret_cast<const void*>(lpbAddress), cNops + 5);

      *lpbAddress = (fJump ? 0xE9 : 0xE8);
      *reinterpret_cast<LPDWORD>(lpbAddress + 1) = jmpcall(lpbAddress, lpcvHook);

      if (cNops)
         memset(reinterpret_cast<void*>(lpbAddress + 5), 0x90, cNops);
      
      return true;
   }
   return false;
}

DWORD_PTR _GetCall(LPBYTE lpbAddress){
   if (lpbAddress != NULL){
      if (*lpbAddress == 0xE8){
         return reinterpret_cast<DWORD_PTR>(lpbAddress + 5 + *reinterpret_cast<PDWORD_PTR>(lpbAddress + 1));
      }
   }
   return 0;
}


typedef struct _PACKET_MESSAGE_STRUCT {  
WORD Opcode; 

BYTE Data[1]; 
} PACKET_MESSAGE;
typedef struct _PACKET_STRUCT {
	DWORD dwUnknown1;
	union {
		LPVOID lpvData;
		LPBYTE lpBytes;
		PACKET_MESSAGE* pMessage;
	};
	DWORD dwLength;
	DWORD dwUnknown2;
} PACKET;

/* How to update the packet sending function below:
* Use the AoB provided to update ulSendAddress.
* Find an empty (00 byte) address for ulSendPacket.
* Update the Serverbase - 4 with the AoB provided. (You will have to edit the bytes in reverse order.
* Full credits to Francesco for the packet send function. 
*/
unsigned long	ulSendAddress = 0x004B3460, //aob: 55 8B EC 6A FF 68 ? ? ? 00 64 ? 00 00 00 00 50 83 EC 34 53
				ulSendHookRet = ulSendAddress+5,
				ulSendPacket = 0x004A0046; // Some empty mem region

typedef void (WINAPI* lpfnSendPacket)(PACKET* pPacket);
lpfnSendPacket SendPacketWrapper = NULL;

bool GenerateWrapper(){
	MakePageWritable(ulSendPacket, 18);	
	WriteMemory(ulSendPacket, 18,
	   0x8B, 0x0D, 0xEC, 0x94, 0xCB, 0x00, // mov ecx,[00CB94EC] ; ServerBase -4 aob: 8B 0D ? 34 CB 00 8D 44 24 ? 50 E8
	   0xFF, 0x74, 0x24, 0x04, // push [esp+04]
	   0x00, 0x00, 0x00, 0x00, 0x00, // Space for the call to send addy send addy
	   0xC2, 0x04, 0x00 // ret 0004
	);
	Call(ulSendPacket+10, (void*)ulSendAddress, 0); // Write the call to send addy in the space we left
	SendPacketWrapper = (lpfnSendPacket)ulSendPacket;
	if(*(BYTE*)ulSendPacket == 0x8B) return true;
	return false;
}

void SendRawPacket(LPBYTE lpData, int size) {
	PACKET* p = new PACKET;
	ZeroMemory(p, sizeof(PACKET));
	p->lpBytes = lpData;
	p->dwLength = size;
	SendPacketWrapper(p);
	delete(p);
}

void EraseSpaces(string &str){
	for (unsigned i = 0; i < str.length(); i++){
		if (str[i] == ' ') str.erase(i--, 1);
	}
}

void ToUpper(string &str){
	transform(str.begin(), str.end(), str.begin(), toupper);
}

BYTE randb(){
	return rand()%0xFF;
}

bool msSendPacket(string str){
	EraseSpaces(str);
	ToUpper(str);
	if(str.length()%2) return false;
	for (unsigned i = 0; i < str.length(); i++){
		if (str[i] >= 0x30 && str[i] <= 0x39) continue; //0-9
		if (str[i] >= 0x41 && str[i] <= 0x46) continue; //A-F
		if (str[i] == 0x2A) continue; //*
		return false;
	}
	BYTE* bPacket = (BYTE*)malloc(MAX_PATH);
	int* iSize = new int(0);
	for (unsigned j = 0; j != str.length()/2; j++) {
		if(!strcmp(str.substr(j*2, 2).c_str(), "**")) bPacket[j] = randb();
		else bPacket[j] = strtol(str.substr(j*2, 2).c_str(), NULL, 16);
		(*iSize)++;
	}
	SendRawPacket(bPacket, *iSize);
	delete iSize;
	free(bPacket);
	return true;
}


void StringToChar(String^ str, char* buffer){  
char *str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(str); 
strcpy(buffer, str2); 
IntPtr *ptrstr2 = new IntPtr(str2);  
Marshal::FreeHGlobal(*ptrstr2); 
}
int spamDelay = 300;
//Spam Delay
void Form6::textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	spamDelay = Convert::ToInt32(this->textBox2->Text);
}
//Packet Spam
void Form6::timer2_Tick(System::Object^  sender, System::EventArgs^  e)
{
		char packet[2048]; 
		StringToChar(this->textBox1->Text, packet);
		msSendPacket(packet);
}
//Packet Spam
void Form6::button45_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(this->button45->Text == "Start Spam")
	{
		this->button45->Text = "Stop Spam";
		this->timer2->Interval = spamDelay;
		this->timer2->Enabled = true;
	}
	else //If Text = "Stop Spam"
	{
		this->button45->Text = "Start Spam";
		this->timer2->Enabled = false;
	}
}
//Send Packet
void Form6::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	char packet[2048]; 
	StringToChar(this->textBox1->Text, packet);
	msSendPacket(packet);
}

/*********************************************
Drop Packets START
**********************************************/
//Meso 10
void Form6::button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("6D 00 F5 1A 99 08 0A 00 00 00");
	Form6::textBox4->Text = "6D 00 F5 1A 99 08 0A 00 00 00";
}

//Meso 1000
void Form6::button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("6D 00 F5 1A 99 08 E8 03 00 00");
	Form6::textBox4->Text = "6D 00 F5 1A 99 08 E8 03 00 00";
}

//Meso 10000
void Form6::button14_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("6D 00 F5 1A 99 08 10 27 00 00");
	Form6::textBox4->Text = "6D 00 F5 1A 99 08 10 27 00 00";
}

//Meso 50000
void Form6::button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("6D 00 F5 1A 99 08 50 C3 00 00");
	Form6::textBox4->Text = "6D 00 F5 1A 99 08 50 C3 00 00";
}

//Custom ammount of meso
unsigned int decmeso;
char CMesoPacket[255];
char hexmeso[255];
void Form6::button49_Click(System::Object^  sender, System::EventArgs^  e)
{
	decmeso = Convert::ToInt32(this->textBox3->Text);
	sprintf_s(hexmeso, "%.2X %.2X", (decmeso << 24) >> 24, (decmeso << 16) >> 24);
	sprintf_s(CMesoPacket, "6D 00 F5 1A 99 08 %s 00 00", hexmeso);
	//::MessageBox(NULL, CMesoPacket,  "Welcome!", MB_OK | MB_ICONINFORMATION); //Debug purposes
	msSendPacket(CMesoPacket);

}
//Weapon (Equipped)
void Form6::button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("4E 00 0A 88 0F 10 01 F5 FF 00 00 01 00");
	Form6::textBox4->Text = "4E 00 0A 88 0F 10 01 F5 FF 00 00 01 00";
}

//Shoes (Equipped)
void Form6::button8_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("4E 00 F8 98 10 10 01 F9 FF 00 00 01 00");
	Form6::textBox4->Text = "4E 00 F8 98 10 10 01 F9 FF 00 00 01 00";
}

//Pants (Equipped)
void Form6::button12_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("4E 00 16 00 F8 06 01 FA FF 00 00 01 00");
	Form6::textBox4->Text = "4E 00 16 00 F8 06 01 FA FF 00 00 01 00";
}

//Hat (Equipped)
void Form6::button9_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("4E 00 B2 28 12 10 01 FF FF 00 00 01 00");
	Form6::textBox4->Text = "4E 00 B2 28 12 10 01 FF FF 00 00 01 00";
}

//Cape (Equipped)
void Form6::button13_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("4E 00 14 A6 F9 06 01 F7 FF 00 00 01 00");
	Form6::textBox4->Text = "4E 00 14 A6 F9 06 01 F7 FF 00 00 01 00";
}

//Gloves (Equipped)
void Form6::button10_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("4E 00 BC E4 C2 06 01 F8 FF 00 00 01 00");
	Form6::textBox4->Text = "4E 00 BC E4 C2 06 01 F8 FF 00 00 01 00";
}

//Pedant (Equipped)
void Form6::button11_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("4E 00 7C 22 F7 06 01 EF FF 00 00 01 00");
	Form6::textBox4->Text = "4E 00 7C 22 F7 06 01 EF FF 00 00 01 00";
}

//Overalls (Equipped)
void Form6::button6_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("4E 00 28 85 03 10 01 FB FF 00 00 01 00");
	Form6::textBox4->Text = "4E 00 28 85 03 10 01 FB FF 00 00 01 00";
}

//Drop everything
void Form6::button47_Click(System::Object^  sender, System::EventArgs^  e)
{
		msSendPacket("4E 00 0A 88 0F 10 01 F5 FF 00 00 01 00");//Weapon
		msSendPacket("4E 00 F8 98 10 10 01 F9 FF 00 00 01 00");//Shoes
		msSendPacket("4E 00 16 00 F8 06 01 FA FF 00 00 01 00");//Pants
		msSendPacket("4E 00 B2 28 12 10 01 FF FF 00 00 01 00");//Hat
		msSendPacket("4E 00 14 A6 F9 06 01 F7 FF 00 00 01 00");//Cape
		msSendPacket("4E 00 BC E4 C2 06 01 F8 FF 00 00 01 00");//Gloves
		msSendPacket("4E 00 7C 22 F7 06 01 EF FF 00 00 01 00");//Pendant
		msSendPacket("4E 00 28 85 03 10 01 FB FF 00 00 01 00");//Overalls
		Form6::textBox4->Text = "You just dropped everything...!";
}


/*********************************************
Drop Packets END
**********************************************/

/*********************************************
Fun Packets START
**********************************************/
//Crazy Skull
void Form6::button19_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("35 00 00 00 00 00 FD 00 01 00 00 00 01 84 00");
	Form6::textBox4->Text = "35 00 00 00 00 00 FD 00 01 00 00 00 01 81 00";
}
// Wanted!
void Form6::button18_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("35 00 00 00 00 00 FD 00 01 00 00 00 06 81 00");
	Form6::textBox4->Text = "35 00 00 00 00 00 FD 00 01 00 00 00 06 81 00";
}

//Electricity
void Form6::button17_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("35 00 00 00 00 00 FD 00 01 00 00 00 0A 81 00");
	Form6::textBox4->Text = "35 00 00 00 00 00 FD 00 01 00 00 00 0A 81 00";
}

//Die
void Form6::button21_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("35 00 72 76 9D 00 FD 00 00 BB 00 00 00 00 00");
	Form6::textBox4->Text = "35 00 72 76 9D 00 FD 00 00 BB 00 00 00 00 00";
}
//Revive
void Form6::button22_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("2A 00 01 00 00 00 00 00 00 00 01 00");
	msSendPacket("68 00 78 F8 3F 01 00 14 00 00 0A 00 00 00 00");
	Form6::textBox4->Text = "2A 00 01 00 00 00 00 00 00 00 01 00 then 68 00 78 F8 3F 01 00 14 00 00 0A 00 00 00 00";
}
bool ReviveuponDeath;
//Revive upon Death
void Revive()
{
	while(!ReviveuponDeath)
	{
			if(ReadPointer((ULONG_PTR*)GUIInfoBase, HP) == 0)
			{
				msSendPacket("2A 00 01 00 00 00 00 00 00 00 01 00");
				msSendPacket("68 00 78 F8 3F 01 00 14 00 00 0A 00 00 00 00");
				//Form6::textBox4->Text = "2A 00 01 00 00 00 00 00 00 00 01 00 then 68 00 78 F8 3F 01 00 14 00 00 0A 00 00 00 00";
				Sleep(2000);
			}
	Sleep(1000);
	}
}
void Form6::checkBox1_CheckedChanged(System::Object ^sender, System::EventArgs ^e)
{
	if(this->checkBox1->Checked)
	{
		ReviveuponDeath = false;
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Revive, NULL, NULL, NULL);
	}
	else
	{
		ReviveuponDeath = true;
	}
}

/*********************************************
Fun Packets END
**********************************************/
/*********************************************
Merchanting Packets START
**********************************************/
//Mushy Reset
void Form6::button15_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("94 00 0B 01");
	Form6::textBox4->Text = "94 00 0B 01";

}
//Orange Mushie Split
void Form6::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("94 00 00 05 1E 00 42 6C 6F 63 6B 3C 33 2E 00 01 00 71 C0 4C 00");
	Form6::textBox4->Text = "94 00 00 05 1E 00 42 6C 6F 63 6B 3C 33 2E 00 01 00 71 C0 4C 00";

}
//Homely Coffeehouse Split
void Form6::button20_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("94 00 00 05 2C 00 42 6C 6F 63 6B 3C 33 2E 00 01 00 78 C0 4C 00");
	Form6::textBox4->Text = "94 00 00 05 2C 00 42 6C 6F 63 6B 3C 33 2E 00 01 00 78 C0 4C 00";

}
/*********************************************
Merchanting Packets END
**********************************************/
/*********************************************
Battle Mage Packets START
**********************************************/
//Yellow Aura
void Form6::button43_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("6A 00 36 87 A2 00 8B D2 E9 01 14 00 00");
	Form6::textBox4->Text = "6A 00 36 87 A2 00 8B D2 E9 01 14 00 00";
}
//Blue aura
void Form6::button42_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("6A 00 38 3A A2 00 8A D2 E9 01 14 00 00");
	Form6::textBox4->Text = "6A 00 38 3A A2 00 8A D2 E9 01 14 00 00";
}
//Dark Aura
void Form6::button44_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("6A 00 5A BE A1 00 EB 4B E8 01 14 00 00");
	Form6::textBox4->Text = "6A 00 5A BE A1 00 EB 4B E8 01 14 00 00";
}

/*********************************************
Battle Mage Packets END
**********************************************/
/*********************************************
Teleport Packets START
**********************************************/
// Subway PQ
void Form6::button23_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 06 00 00 00");
	Form6::textBox4->Text = "42 00 0F 01 06 00 00 00";
}
// CPQ 2
void Form6::button24_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 03 00 00 00");
	Form6::textBox4->Text = "42 00 0F 01 03 00 00 00";
}
// PyPQ
void Form6::button25_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 05 00 00 00");
	Form6::textBox4->Text = "42 00 0F 01 05 00 00 00";
}
// Ellinia PQ
void Form6::button26_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 0C 00 00 00");
	Form6::textBox4->Text = "42 00 0F 01 0C 00 00 00";
}
// Ludi PQ
void Form6::button27_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 0B 00 00 00");
	Form6::textBox4->Text = "42 00 0F 01 0B 00 00 00";
}
// Perion FM
void Form6::button28_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("94 00 00 04 00 00");
	Form6::textBox4->Text = "94 00 00 04 00 00";
}
// CPQ 1
void Form6::button29_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 02 00 00 00");
	Form6::textBox4->Text = "42 00 0F 01 02 00 00 00";
}
// Cash Shop
void Form6::button30_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("2C 00 E2 03 E5 01");
	Form6::textBox4->Text = "2C 00 E2 03 E5 01";
}
// MTS
void Form6::button31_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("B8 00");
	Form6::textBox4->Text = "B8 00";
}
// Orbis PQ
void Form6::button32_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 0D 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 0D 00 00 00";
}
// Dojo
void Form6::button33_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 01 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 01 00 00 00";
}
// Ariant PQ
void Form6::button34_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 00 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 00 00 00 00";
}
// Ghost Ship PQ
void Form6::button35_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 04 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 04 00 00 00";
}
// Kerning PQ
void Form6::button36_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 0A 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 0A 00 00 00";
}
// Happyville
void Form6::button37_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 07 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 07 00 00 00";
}
// Moon Bunny
void Form6::button38_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 09 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 09 00 00 00";
}
// Hoblin PQ
void Form6::button41_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 10 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 10 00 00 00";
}
// Sea of Fog PQ
void Form6::button40_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 04 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 04 00 00 00";
}
// Dragon PQ
void Form6::button39_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 11 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 11 00 00 00";
}
// Astaroth PQ
void Form6::button16_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 F0 01 62 00 00 00");
	Form6::textBox4->Text = "42 00 F0 01 62 00 00 00";
}
//Spinel
void Form6::button48_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("42 00 0F 01 13 00 00 00");
	Form6::textBox4->Text = "42 00 0F 01 13 00 00 00";
}
/*********************************************
Teleport Packets END
**********************************************/

