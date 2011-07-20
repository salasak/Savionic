#include "Form8.h"
#include "Form2.h"
#include "Form6.h"
#include "functions.h"
#include <time.h>
#include <stdio.h>
#pragma warning(disable:4996)
using namespace Savionic;

extern bool msSendPacket(string str);
#pragma region Summons.
////////
//SUMMONS
////////
//Horntail 10 sec
void Form8::button9_Click(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 22 6E 86 00 48 01 21 00 00");
}
//Horntail right head
void Form8::button10_Click(System::Object^  sender, System::EventArgs^  e)
{			 
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 11 6E 86 00 48 01 21 00 00");
}
//Christmas Sock
void Form8::button5_Click(System::Object^  sender, System::EventArgs^  e)
{			 
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 41 7C 92 00 48 01 21 00 00");
}
//Christmas Sack
void Form8::button6_Click(System::Object^  sender, System::EventArgs^  e)
{			 
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 42 7C 92 00 48 01 21 00 00");
}
//Zeno
void Form8::button7_Click(System::Object^  sender, System::EventArgs^  e)
{			 
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 E1 E8 5E 00 48 01 21 00 00");
}
//Tae Roon Boss
void Form8::button8_Click(System::Object^  sender, System::EventArgs^  e)
{			
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 20 2B 6E 00 48 01 21 00 00");
}
//Raika
void Form8::button1_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 66 6D 7D 00 48 01 21 00 00");
}
// Zakum 3rd Body
void Form8::button2_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 02 47 86 00 48 01 21 00 00");
}
//Snow man
void Form8::button3_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 61 6D 7D 00 48 01 21 00 00");
}
//Mini Pink Bean
void Form8::button4_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 27 95 86 00 48 01 21 00 00");
}
//Pink Bean with bonus
void Form8::button16_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 21 95 86 00 48 01 21 00 00");
}
//Ice Boss Thing
void Form8::button39_Click(System::Object^  sender, System::EventArgs^  e)
{	
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 65 6D 7D 00 48 01 21 00 00");
}
//Chrimson Balrog
void Form8::button40_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 F0 5B 7C 00 48 01 21 00 00");
}
//Griffey
void Form8::button41_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 21 D1 7C 00 48 01 21 00 00");
}
//Manon
void Form8::button38_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 20 D1 7C 00 48 01 21 00 00");
}
//Pap 2nd form
void Form8::button37_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 22 B3 81 00 48 01 21 00 00");
}
//Poison Squid
void Form8::button36_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 14 3D 7C 00 48 01 20 00 00");
}
//Gate Keeper
void Form8::button35_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 00 83 7C 00 48 01 21 00 00");
}
// Big Balrog
void Form8::button34_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 30 BC 86 00 48 01 21 00 00");
}
//Cheif Grey
void Form8::button33_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 80 B2 40 00 48 01 21 00 00");
}
//Were Wolf
void Form8::button32_Click(System::Object^  sender, System::EventArgs^  e)
{	
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 E0 34 7C 00 48 01 21 00 00");
}
//Goby
void Form8::button31_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 A4 CB 6C 00 48 01 21 00 00");
}
//Gold Yeti n Pepe
void Form8::button30_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 A6 5A 32 00 48 01 21 00 00");
}
//Pianus
void Form8::button29_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 30 DA 81 00 48 01 21 00 00");
}
//Prime Minister
void Form8::button28_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 A8 5A 32 00 48 01 21 00 00");
}
//Solomon the wise
void Form8::button27_Click(System::Object^  sender, System::EventArgs^  e)
{			
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 2F 95 86 00 48 01 21 00 00");
}
//Rex the wise
void Form8::button26_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 30 95 86 00 48 01 21 00 00");
}
//Leviathan
void Form8::button25_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 63 6D 7D 00 48 01 21 00 00");
}
//Dodo
void Form8::button24_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 64 6D 7D 00 48 01 21 00 00");
}
//Jaira
void Form8::button12_Click(System::Object^  sender, System::EventArgs^  e)
{			
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 C5 F7 8D 00 48 01 21 00 00");
}
//Neocity Boss
void Form8::button14_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 25 2B 6E 00 48 01 21 00 00");
}
//Skelegon
void Form8::button11_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 34 F8 7C 00 48 01 21 00 00");
}
//Snack Bar
void Form8::button13_Click(System::Object^  sender, System::EventArgs^  e)
{		
	msSendPacket("6A 00 25 02 7D 01 A6 C7 C9 01 01 69 6D 7D 00 48 01 21 00 00");
}
#pragma endregion
#pragma region IRM 

char Level;
int IRMDelay;
bool IRMOn;
char buffer[255];
//Freezer - Suburban Area 1
void Freezer()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 95 FA E2 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AD FB E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 00 FD E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 89 FE E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 8D FF E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 02 02 E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1F FB 02 FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 53 FC 02 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B4 FD 02 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A6 FE 02 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F3 FF 02 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F3 00 02 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 16 FC 9A FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 01 FD 9A FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CF FD 9A FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BA FE 9A FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X FE FF 9A FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		
	}
}
void Form8::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox1->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Freezer, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}



//Officer Skeleton - Closed Area
void Skele()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X DF F3 72 FB 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0B F5 36 FB 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E5 00 36 FB 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0D 02 FA FA 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3D F5 36 FB 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2D 00 AA FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AE 01 AA FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D7 02 AA FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 03 04 AA FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 30 05 AA FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 32 05 AA FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 79 02 EA FB 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A9 07 E6 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 37 08 D8 FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 62 09 D8 FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3E 03 8E FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AE 02 B7 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 76 01 B1 FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1E 01 B1 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E2 FF BD FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 7A FF C9 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F1 FE 68 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 01 FE 68 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AF FE 68 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6B FD 94 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 28 FD 94 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4A FE 94 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EC FE 94 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CC FF 94 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 92 01 94 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 71 02 94 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 70 03 94 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1D 02 E8 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A2 03 D2 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox2->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Skele, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

// Kerning Square Floors
void CD()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C5 04 9F 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F2 02 9F 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 91 01 9F 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A6 00 9F 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E5 FE 9F 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F6 FD 9F 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CC FC 9F 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A1 FB 9F 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 93 FB 9F 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EF FB 9F 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CF FC 9F 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D8 FD 9F 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 08 FF 9F 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 19 00 9F 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6D 04 9F 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);


	}
}
void Form8::checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox3->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&CD, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Truckers - Suburban Area 2
void Truckers()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 95 FA E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AD FB E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 00 FD E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 89 FE E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 8D FF E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 02 02 E2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1F FB 02 FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 53 FC 02 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B4 FD 02 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A6 FE 02 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F3 FF 02 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F3 00 02 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 16 FC 9A FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 01 FD 9A FD 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CF FD 9A FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BA FE 9A FD 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X FE FF 9A FD 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox4->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Truckers, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Dark Drake - Cave Exit (
void Drake()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4E 06 37 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9B 05 4C 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B5 04 D5 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 58 04 CA 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 38 03 97 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1D 02 99 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X DC FF 56 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 24 04 05 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B8 04 01 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 56 04 BF FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 46 07 C7 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6D 06 D1 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2B 07 46 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 43 06 4E FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);		
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 40 06 4E FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);		
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F4 00 92 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox5->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Drake, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

// ROBOS 
void Robos()
{
	while(IRMOn)
	{
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 58 02 A1 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 8C 01 A1 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CF 00 A1 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C1 FF A1 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 7A FE A1 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B5 FD A1 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 65 FF B1 FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1A 00 B1 FF 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EF 00 B1 FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A1 01 B1 FF 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4C 02 B1 FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 33 00 FD FE 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0A 01 FD FE 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 73 01 FD FE 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 23 02 FD FE 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox6->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Robos, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//TWISTED JESTERS
void Jesters()
{
	while(IRMOn)
	{
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2D FD 6C 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CB FD 6C 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F8 FE 6C 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 24 00 6C 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 51 01 6C 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 7B 02 6C 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AA 03 6C 00 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D0 04 6C 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4A 05 6C 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AA 04 6C 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 37 02 6C 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C7 00 B8 FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F0 01 B8 FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D0 02 B8 FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D6 02 04 FF 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0D 02 04 FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6A 00 04 FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0C 01 04 FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 08 01 04 FF 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);		
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9F FE 40 FF 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 71 FD 40 FF 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 05 FE 40 FF 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3F FD 6C 00 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 8B FD 6C 00 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);			
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A3 FD 6C 00 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox7->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Jesters, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}	
//Cart Bear - Verne Mine Shaft 3
void CartBear()
{
	while(IRMOn)
	{
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C8 F7 6D FE 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 04 F7 6D FE 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C2 F9 6D FE 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C4 FA 6D FE 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9C F8 5D FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2E F9 5D FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1F F8 5D FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 79 F8 11 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4C F7 11 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 22 F6 11 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C4 FA 11 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F1 FB 11 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 35 FC 21 FF 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 94 F8 11 00 00 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D9 F8 11 00 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 7C F9 6D FE 01 00",Level); 
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 33 F8 6D FE 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox8->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&CartBear, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

// Puppets
void Puppets()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0B F5 36 FB 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0B F5 36 FB 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E5 00 36 FB 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0D 02 FA FA 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3D F5 36 FB 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2D 00 AA FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AE 01 AA FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D7 02 AA FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 03 04 AA FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 30 05 AA FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 32 05 AA FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 79 02 EA FB 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A9 07 E6 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 37 08 D8 FE 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 62 09 D8 FE 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3E 03 8E FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AE 02 B7 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 76 01 B1 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1E 01 B1 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E2 FF BD FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 7A FF C9 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F1 FE 68 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 01 FE 68 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AF FE 68 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6B FD 94 01 04 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 28 FD 94 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4A FE 94 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EC FE 94 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CC FF 94 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 92 01 94 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 71 02 94 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 70 03 94 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1D 02 E8 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A2 03 D2 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 01 FF EE FE 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 21 FE F7 FE 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A1 FF EB FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 16 00 F0 FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X FE FF 5D 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 00 01 94 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox9->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Puppets, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Sand Rats
void SandRats()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D7 00 C6 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0A FD C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 7B FD C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6A FE C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0F FF C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B1 FF C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E8 01 C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C2 02 C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EE 00 C6 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3B 00 C6 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 93 FD C6 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 08 01 C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 61 FE C6 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E4 FD C6 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AA FC C6 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X DD FC C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6A FE C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 05 00 C6 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F8 FF C6 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CD FF C6 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox10->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&SandRats, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Roids Lab Area C-1
void Roids()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 7E FD A6 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BC FF A6 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B7 00 A6 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F0 01 A6 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1D 03 A6 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 05 03 A6 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X DC 00 A6 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox11->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Roids, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Roids Mini Dungeon
void RoidsMD()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AA 00 0E 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 66 01 DB FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 57 02 A8 FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E5 FF DC FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AC FF 41 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0C FF 74 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0D FE A6 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 85 FD A6 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BB FE A6 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 49 00 A6 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CB 00 A6 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X DD 01 A6 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B4 02 A6 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox12->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&RoidsMD, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//gGallos
void Gallos()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 8F FE 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 90 FF 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X E5 00 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 1A 00 25 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X C2 01 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X C2 01 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 7F 02 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 4C 03 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 81 04 25 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 88 04 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 76 05 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 25 06 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 25 06 25 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 80 06 25 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 8F 00 35 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 0F 00 35 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 2C 01 35 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 0B 01 35 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 30 01 35 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 06 02 35 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 18 02 35 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X CF 02 35 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 03 03 35 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X FD 02 35 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X EA 03 35 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X C0 03 35 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X A5 04 35 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 31 04 35 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 00 D0 14 F9 01 %.2X 3C 03 35 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox13->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Gallos, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Captain Kru
void CaptainKru()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 66 00 14 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AA FF 14 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 97 FE A1 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9D FE A1 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 92 FF A1 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BB 00 A1 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C1 01 A1 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 91 01 A1 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AB 01 A1 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EC 02 A1 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BF 02 A1 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D5 03 45 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 08 03 45 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 15 03 45 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F2 02 45 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 24 02 45 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 80 01 45 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 99 00 45 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C1 FF 45 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B0 FE 45 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F0 FD 45 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4B FD 45 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EE FC 45 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox14->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&CaptainKru, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

// Harps
void Harps()
{
	while(IRMOn)
	{
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X A6 FF 4D FF 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 10 00 4D FF 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X F4 FE 4D FF 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X E1 FE 4D FF 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 46 00 4D FF 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 94 01 C6 FF 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 9F 02 C5 FF 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 70 02 C5 FF 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 02 01 01 00 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 5C 00 01 00 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 6D 00 01 00 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 3E FE 70 00 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X A2 FE 70 00 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 4E FF 70 00 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 5F FF 70 00 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X C9 01 5D FE 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 65 00 5D FE 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 56 FF 5D FE 01 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
			sprintf(buffer,"6A 00 ** ** ** 0B D0 14 F9 01 %.2X 87 FF 5D FE 00 00",Level);
			msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox15->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Harps, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Hobi
void Hobi()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6F 0B 6B FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BD 0A 6B FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 37 0A A4 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6C 09 A7 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3A 09 A7 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 94 0A 3F FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9F 09 03 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F4 08 03 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0A 08 3F FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2A 05 3F FE 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D9 04 32 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 08 04 03 FE 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 40 03 03 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 65 02 3F FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AD 01 6B FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C5 02 9F FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B6 03 A7 FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 19 05 11 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 08 06 11 FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X DA 06 11 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X FB 07 11 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox16->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Hobi, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Ore Munchers
void OreMunchers()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X FC E9 1F FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 75 E9 1F FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 69 E8 A7 FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 09 E9 1F FF 00 00",Level);   
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D9 E7 A7 FE 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 25 E7 A7 FE 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6E E6 1F FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 72 E5 1F FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AC E4 0F 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3F E5 0F 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 04 E6 0F 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1D E7 0F 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1E E8 0F 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 20 E9 0F 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 41 EA 0F 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 35 EB 0F 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X DE EB 0F 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox17_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox17->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&OreMunchers, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Birks
void Birks()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CA FD 7B FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A5 FE 7B FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 76 FF 3F FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 41 00 3F FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F0 00 3F FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BC 01 3F FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 82 02 7B FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6C 03 7B FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3B 03 E3 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6C 02 DC FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9A 01 A7 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AB 00 A7 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BA FF A7 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A1 FE DD FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F2 FD E3 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B6 03 87 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A2 02 87 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B5 01 4B 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B8 00 4B 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B3 FF 4B 01 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 46 FE 87 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 51 FD 87 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox18_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox18->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Birks, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Kents Blue
void KentsBlue()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X 24 01 03 FE 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X DB FF 03 FE 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X D1 FD 32 FE 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X 03 FD A7 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X 38 FC E3 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X FF FD E3 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X 58 FF A7 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X A5 01 A7 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X E5 02 E3 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X 87 04 C3 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X 79 02 C3 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X 1F 01 87 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X 85 FE 94 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X 8B FC B9 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5B D0 14 F9 01 %.2X C5 FF 87 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 01 D0 14 F9 01 %.2X 5A FF 87 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 01 D0 14 F9 01 %.2X 5A FF 87 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5E D0 14 F9 01 %.2X C9 FF A7 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 5E D0 14 F9 01 %.2X 0C FF 03 FE 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox19_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox19->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&KentsBlue, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Kents Mini Dungeon
void KentsMD()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A1 01 E5 FD 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4C 01 E5 FD 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X DB 00 21 FE 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 94 FF 5D FE 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6A 00 5D FE 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 31 FE CA 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D4 FE 2D 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D8 FF 2D 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 01 00 2D 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F0 00 73 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 16 01 8C 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 43 02 A5 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 24 FD 4D FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 46 FE 4D FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 46 FE 4D FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 5F FF 4D FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BF 00 C5 FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C5 01 C5 FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E7 FF 5A FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EA FD B5 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E4 FC B5 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A7 FC B5 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox20_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox20->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&KentsMD, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Green C. Hidden Dragon Tomb
void GreenC1()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 75 01 D9 FA 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 25 02 D9 FA 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 75 01 41 FC 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2C 02 41 FC 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C1 03 B9 FC 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9D 03 21 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 96 01 A9 FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 26 02 A9 FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 24 00 21 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 8A FF 21 FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 06 FE 6D FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6D FF B9 FC 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 36 00 B9 FC 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 17 FE 05 FC 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 5C FF 51 FB 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 5E 00 51 FB 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X FC FD 05 FC 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1B 00 51 FB 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox21_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox21->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&GreenC1, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Green C. Forest that Disappeared
void GreenC2()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 98 FD 05 FC 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 03 FF 05 FC 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 28 FC C9 FB 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A8 FC 04 FC 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E2 FC 05 FC 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 30 00 C9 FB 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BB FF 05 FC 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CD 00 C9 FB 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CD FB 31 FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 24 FC 50 FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 49 FD A9 FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6B FE 7E FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9F FE 7E FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 7E FF A6 FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 5F 00 4C FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 73 00 3F FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3F FB D5 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C4 FB F0 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 42 FD 3B FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2B FE 2B FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2B FE 2B FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 57 FF 28 FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 26 00 11 FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 57 01 D5 FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 1A 01 D5 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E6 00 D5 FE 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox22_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox22->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&GreenC2, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Green C burning Forest
void GreenC3()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3C FC 4D FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0B 00 4D FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D0 00 4D FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BF 01 4D FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9D 02 4D FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 31 FD 4D FF 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X FF FE 4D FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2C 01 8D FB 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9D FE 8D FB 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 92 FF 8D FB 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A6 00 8D FB 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X A5 01 B9 FC 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6A 00 B9 FC 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C9 FF B9 FC 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox23_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox23->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&GreenC3, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}
//Miner Zombie
void Zombie()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EB 00 05 FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 44 00 05 FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3D FF C9 FC 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X ED FE C9 FC 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6F FE B9 FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 02 FD 41 FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 38 FC 41 FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2B FE AC FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C5 FD 68 FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9B FC E5 FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X DA FB E5 FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6D FC E5 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3E FE E5 FE 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 10 FF 21 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E1 FF 21 FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 84 00 21 FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4B FE E5 FE 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 43 FD 4D 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 8A FC 4D 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 73 FB 4D 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B6 00 C5 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E9 FF C5 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 09 FE 65 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 94 FE C2 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 5F FF C5 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox24_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox24->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Zombie, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}	
//New MD
void Newt1()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 55 FE F3 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X EF FF F4 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 6C 00 EC 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 35 01 DF 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 15 01 55 03 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X F5 00 47 04 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 4D 00 9B 05 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X D3 00 92 05 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 60 FF 9C 05 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X B2 FE 9D 05 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 79 FF 4A 04 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X FB FF F3 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 44 FE 9D 05 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 24 00 F1 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 98 00 50 04 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 8C 00 96 05 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox25_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox25->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Newt1, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}	

//Newt Destroyed Dragon Nest
void Newt2()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 55 FE F3 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X EF FF F4 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 6C 00 EC 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 35 01 DF 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 15 01 55 03 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X F5 00 47 04 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 4D 00 9B 05 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X D3 00 92 05 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 60 FF 9C 05 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X B2 FE 9D 05 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 79 FF 4A 04 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X FB FF F3 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 44 FE 9D 05 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 24 00 F1 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 98 00 50 04 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0A D0 14 F9 01 %.2X 8C 00 96 05 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox26_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox26->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Newt2, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Skelegon

void Skelegon()
{
		while(IRMOn)
		{
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 39 01 02 03 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X EB 01 4F 03 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 5C FF 03 03 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 3B FF DF 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 5E FF 03 03 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X D1 FF E0 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X BB 00 D5 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X F4 03 A3 05 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X C8 FE 04 03 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 17 02 FA 02 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 35 00 04 03 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 9A FE B9 05 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 40 FF B7 05 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X A4 00 B1 05 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 3D 00 B8 05 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 1F 02 AE 05 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 37 03 AE 05 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X A4 01 66 04 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 77 00 6C 04 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 29 FF 79 04 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** 0E D0 14 F9 01 %.2X 4A 04 A3 05 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox27_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox27->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Skelegon, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}



//PyPQ
void PyPQ()
{
	while(IRMOn)
	{
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X ** 01 7C 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X ** 00 7C 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X ** 00 7C 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X ** 00 7C 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X ** FF 7C 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X ** FF 7C 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X ** FE 7C 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X ** FE 7C 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}
void Form8::checkBox28_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox28->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&PyPQ, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

//Mulung
void Mulung()
{
	while(IRMOn)
	{	
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D1 00 06 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 16 FF 06 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F2 FF 06 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 42 01 06 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AA FE 06 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X BB FF 06 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 32 00 06 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CF 00 06 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 64 FF 06 00 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);

	}
}

void Form8::checkBox29_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox29->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&Mulung, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}


//MP3
void MP3()
{
	while(IRMOn)
	{	
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X D2 FF D5 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X 6A 00 D5 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X 0B 01 D5 00 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X BC 01 D5 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X 0D 02 D5 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X A8 02 D5 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X 4F 03 D5 00 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X DB 03 D5 00 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X 37 04 D5 00 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X 8E 04 D5 00 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X 4D FF 3E FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X F9 FF 3E FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X FC FF 3E FF 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EA 00 3E FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X AA 01 3E FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X 8D 01 3E FF 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X AE 00 3E FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X 2F 01 D6 FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X E8 00 D6 FD 00 00",Level); 
		msSendPacket(buffer);	
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X D1 01 D6 FD 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X F7 01 D6 FD 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X A3 02 D6 FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X D1 02 D6 FD 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X 7F 03 D6 FD 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X E4 03 D6 FD 01 00",Level);   
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** 13 D0 14 F9 01 %.2X CE 02 D6 FD 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}

void Form8::checkBox30_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox30->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&MP3, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}


void MT1()
{
while(IRMOn)
	{	
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 5D FC DD 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3A FC DD 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 93 FD 19 01 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CE FC DD 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 2A FF 55 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6A 00 19 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C4 FE 55 01 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9A FF 21 01 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4E FF 54 01 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 5E FE 55 01 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 53 FE 55 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6A FF 09 02 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3E 00 09 02 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4C FF 09 02 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X FA FD 09 02 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AB FC 09 02 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 94 FE 09 02 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C0 FD 09 02 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 36 FC 09 02 01 00",Level); 
		msSendPacket(buffer);	
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 81 FD 13 01 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 81 FD 13 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 31 FD DE 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C3 FC DE 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}

void MT3()
{
	while(IRMOn)
	{	
				sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 94 00 A1 00 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C3 00 A1 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X DD 01 A1 00 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 5B 02 A1 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 90 01 A1 00 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0C 00 55 01 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 77 00 55 01 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 45 01 55 01 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 08 03 09 02 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F8 01 09 02 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 02 00 09 02 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D0 00 09 02 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		
	}
}

void MT4()
{
	while(IRMOn)
	{	
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X AC FF 19 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 45 00 19 01 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9A 02 DD 00 01 00 ",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D1 FF 09 02 00 00 ",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6A 00 09 02 00 00 ",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 4E 01 09 02 00 00 ",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 80 02 09 02 00 00 ",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6D 02 09 02 01 00 ",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 3B 01 09 02 01 00 ",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 41 FF 19 01 01 00 ",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 03 FF 19 01 00 00 ",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 84 00 19 01 00 00 ",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 16 02 DD 00 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9E 01 DD 00 01 00 ",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9F 01 DD 00 00 00 ",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
	}
}

void GC3()
{
	while(IRMOn)
	{	
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 39 03 6C FF 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 25 04 6C FF 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 6E 04 D4 00 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F6 04 D4 00 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0B 04 00 02 01 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9A 03 00 02 00 00",Level); 
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D5 04 00 02 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B1 04 6C FF 01 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E4 03 D4 00 00 00",Level);  
		msSendPacket(buffer);
		Sleep(IRMDelay);
		
	}
}

void GC1()
{
	while(IRMOn)
	{	
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 28 04 00 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0B 04 00 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 95 03 00 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X B8 02 00 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D4 01 00 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CF 00 00 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X E6 FF 00 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X CE FE 00 02 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X C1 FE 00 02 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 0C FF 10 01 01 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X F1 FE 10 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X D7 FF 10 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X 9A 00 4C 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);
		sprintf(buffer,"6A 00 ** ** ** ** D0 14 F9 01 %.2X EC 01 C4 01 00 00",Level);
		msSendPacket(buffer);
		Sleep(IRMDelay);

		
	}
}

void Form8::checkBox31_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox31->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&MT3, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

void Form8::checkBox32_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox32->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&GC3, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

void Form8::checkBox33_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox33->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&MT1, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}

}

void Form8::checkBox34_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox34->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&MT4, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}

void Form8::checkBox35_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->Form8::checkBox35->Checked)
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&GC1, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
	}
}
#pragma endregion
#pragma region XY Mob IRM / IRM Item Vac Dump. 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////XY/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////MOB////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////IRM////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//---------------------------------------------------------------------------
unsigned char ulPlatOld[6] = {  0x8B, 0x8B, 0xA0, 0x01, 0x00, 0x00 };
unsigned long ulPlatAddr = 0x0099C713, ulPlatReturn = ulPlatAddr + 6;
unsigned int pX = 0, pY = 0;

void __declspec(naked) PlatCave()
{
	__asm
	{
		mov ecx, [ebx+0x1A0]
		push eax
		mov eax, [ecx+0x24]
		mov [pX], eax
		mov eax, [ecx+0x28]
		mov [pY], eax
		pop eax
		jmp	dword ptr[ulPlatReturn]
	}
}

void HookPlat( bool isHook )
{
	__try
	{
		unsigned long ulOld;

		if( VirtualProtect( (LPVOID)ulPlatAddr, 0x6, PAGE_EXECUTE_READWRITE, &ulOld ) )
		{
			if( isHook )
			{
				*(BYTE*)ulPlatAddr = 0xE9;
				*(INT*)(ulPlatAddr+1) = (int)( (DWORD)PlatCave - ulPlatAddr - 5 );
				*(BYTE*)(ulPlatAddr+5) = 0x90;
			}
			else
			{
				memcpy( (LPVOID)ulPlatAddr, ulPlatOld, 6 );
			}
			VirtualProtect( (LPVOID)ulPlatAddr, 0x6, ulOld, &ulOld );
		}
	}
	__except(1)
	{
	}
}

char IRMPacket[255];

void MobIRM()
{
	while(IRMOn)
	{	
		unsigned long ulBase = 0x00C6A7B8;
		int		MobCheck = ReadPointer( (ULONG*)0x00C6A7B8, 0x24 );

		if( MobCheck )
		{//28,04,14,10c,24
			unsigned short    	MobX = NULL, MobY = NULL;
			int		MobAddr = ReadPointer( (ULONG*)0x00C6A7B8, 0x28 );
			MobAddr = ReadPointer( (ULONG*)&MobAddr, 0x4 );
			MobAddr = ReadPointer( (ULONG*)&MobAddr, 0x14 );
			MobAddr = ReadPointer( (ULONG*)&MobAddr, 0x10c );
			MobAddr = ReadPointer( (ULONG*)&MobAddr, 0x24 );
			MobX = (unsigned short)ReadPointer( (ULONG*)&MobAddr, 0x58 );
			MobY = (unsigned short)ReadPointer( (ULONG*)&MobAddr, 0x5C );
			unsigned short	cMobX = ( MobX >> 8 ) | ( MobX << 8 ),
							cMobY = ( MobY >> 8 ) | ( MobY << 8 );

			sprintf(IRMPacket, "6A 00 ** ** ** 01 D0 14 F9 01 %02X %04X %04X 01 00", Level, cMobX, cMobY);
			msSendPacket(IRMPacket);
			Sleep( IRMDelay );
		}
	}
}
//---------------------------------------------------------------------------

void __clrcall Form8::checkBox36_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if( checkBox36->Checked )
	{
		IRMOn = !IRMOn;
		if (IRMOn)
		{
				HookPlat( true );
				IRMDelay = Convert::ToInt32(this->textBox1->Text);
				Level = Convert::ToInt32(this->textBox2->Text);	
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&MobIRM, NULL, NULL, NULL);
		}
	}
	else
	{
				IRMOn = false;
				HookPlat( false );
	}
}


/**************************
IRM ITEM VAC
**************************/

unsigned long ulItemX = 0x007641C4; // ff d0 0f b7 08 51 8d 8d ? ? ? ? e8 ? ? ? ? 8d 95 ? ? ? ? 52 8b 85 ? ? ? ? 8b 08 8b 95 ? ? ? ? 8b 02 83 c0 ? 8b 51 ? 8b c8 8b 42 ? ff d0 0f b7 48 ? 51 8d 8d ? ? ? ? e8 ? ? ? ? 8d 95 ? ? ? ? 52 8b 85 ? ? ? ? 8b 08 8b 95 ? ? ? ? 8b 02 83 c0 ? 8b 51 ? 8b c8 8b 42 ? ff d0 0f b7 08 51 8d 8d ? ? ? ? e8 ? ? ? ? 8d 95 ? ? ? ? 52 8b 85 ? ? ? ? 8b 08
unsigned long ulItemRetX = ulItemX+5; 
int DropX=0, DropY=0; 
void __declspec(naked) ItemX_Hook()
{  
	__asm 
	{  
		call eax 
		mov ecx, [DropX] 
		jmp dword ptr[ulItemRetX] 
	} 
} 
 
void HookItemX(bool bEnable) 
{  
	if(bEnable) Jump(ulItemX, ItemX_Hook, 0); 
	else WriteMemory(ulItemX, 5, 0xff, 0xd0, 0x0f, 0xb7, 0x08); 
} 
 
unsigned long ulItemY = 0x007641F7; //ff d0 0f b7 48 ? 51 8d 8d ? ? ? ? e8 ? ? ? ? 8d 95 ? ? ? ? 52 8b 85 ? ? ? ? 8b 08 8b 95 ? ? ? ? 8b 02 83 c0 ? 8b 51 ? 8b c8 8b 42
unsigned long ulItemRetY = ulItemY+5; 
void __declspec(naked) ItemY_Hook()
{  
	__asm
	{  
		call eax 
		mov ecx, [DropY] 
		jmp dword ptr[ulItemRetY] 
	} 
} 
 
void HookItemY(bool bEnable) 
{  
	if(bEnable) Jump(ulItemY, ItemY_Hook, 0); 
	else WriteMemory(ulItemY, 6, 0xff, 0xd0, 0x0f, 0xb7, 0x48, 0x04); 
} 
 
void HookDrops(bool bEnable)
{ 
	HookItemX(bEnable); 
	HookItemY(bEnable); 
}

void Form8::checkBox37_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(checkBox37->Checked)
	{
		HookDrops(true);
		while(HookDrops)
		{
		DropX = ((short signed int)ReadPointer((ULONG_PTR*)CharBase, Charx)-1);
		DropY = ((short signed int)ReadPointer((ULONG_PTR*)CharBase, Chary)-1);
		}
	}
	else
	{
		HookDrops(false);
	}
}

//w8baby irm hacks
/*[enable]



0095C835://Ignore Tubi Ptr [Super Bomb Speed!]
db 90 90 90 90 90 90
0095C869://Increase Bomb Speed More
db 90 90 90 90 90 90

0076469C://Bombs Instantly Explode 1
db eb 14
0076452B://Bombs Instantly Explode 2
db 90 90 90 90 90 90
0095CEA4://Tubi crap
db 6A 00
[disable]

0095C835://0F 85 ? ? ? ? 8B 87 ? ? 00 00 8B 50 ? 52 83 C0 ? 50 E8 ? ? ? FF 83 C4 08 85 C0
db 0F 85 5C FF FF FF
0095C869://0F 8C ? ? ? ? 81 FB 59 C0 17 02 74 ? 81 FB 61 C0 17 02 74 ? 81 FB 62 C0 17 02 0F 85
db 0F 8C 28 FF FF FF
0076469C://74 ? 39 AE ? ? 00 00 7E ? 8B CB 2B 8E ? ? 00 00 85 C9 7E ? 6A 01 53 8B CE E8 
db 74 37
0076452B://0F 8F ? ? ? ? 8B 86 ? ? 00 00 48 83 F8 04 0F 87 ? ? ? ? FF 24 85 ? ? ? 00 8B
db 0F 8F A4 01 00 00
0095CEA4:
db 6A 01
*/

//Tornado Buff 27 (Updated v96 gMS)
void FastIRM(bool bEnable)
{

	MakePageWritable(0x0091F2F8, 2);  
	MakePageWritable(0x0091F2F8, 2); 
	MakePageWritable(0x0091F2F8, 2); 
	MakePageWritable(0x0091F2F8, 2); 
	MakePageWritable(0x0091F2F8, 2); 

	  unsigned long	 IgnoreTubiPtr = 0x0095C835,//0F 85 ? ? ? ? 8B 87 ? ? 00 00 8B 50 ? 52 83 C0 ? 50 E8 ? ? ? FF 83 C4 08 85 C0
					 //0095C835 - 0F85 5CFFFFFF              - jne 0095C797
					 IncreaseBombSpeedMore =	0x0095C869,//0F 8C ? ? ? ? 81 FB 59 C0 17 02 74 ? 81 FB 61 C0 17 02 74 ? 81 FB 62 C0 17 02 0F 85
					 //0095C869 - 0F8C 28FFFFFF              - jl 0095C797
					 BombsInstantlyExplode1 = 0x0076469C,//74 ? 39 AE ? ? 00 00 7E ? 8B CB 2B 8E ? ? 00 00 85 C9 7E ? 6A 01 53 8B CE E8 
					 //0076469C - 74 37                      - je 007646D5 : [ZtlTaskMemReallocImp+222D01]
					 BombsInstantlyExplode2 = 0x0076452B,//0F 8F ? ? ? ? 8B 86 ? ? 00 00 48 83 F8 04 0F 87 ? ? ? ? FF 24 85 ? ? ? 00 8B
					 //0076452B - 0F8F A4010000              - jg 007646D5 : [ZtlTaskMemReallocImp+222D01]
					 Tubi2 = 0x0095CEA4;
					 //0095CEA4 - 6A 01                      - push 01
	if(bEnable)
	{
		WriteMemory(IgnoreTubiPtr, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(IncreaseBombSpeedMore, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(BombsInstantlyExplode1, 1, 0x14);
		WriteMemory(BombsInstantlyExplode2, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(Tubi2, 2, 0x6A, 0x00);

	}
	else
	{
		WriteMemory(IgnoreTubiPtr, 6, 0x0F, 0x85, 0x5C, 0xFF, 0xFF, 0xFF);
		WriteMemory(IncreaseBombSpeedMore, 6, 0x0F, 0x8C, 0x28, 0xFF, 0xFF, 0xFF);
		WriteMemory(BombsInstantlyExplode1, 2, 0x74, 0x37);
		WriteMemory(BombsInstantlyExplode2, 6, 0x0F, 0x8F, 0xA4, 0x01, 0x00, 0x00);
		WriteMemory(Tubi2, 2, 0x6A, 0x01);

	}
}
#pragma endregion