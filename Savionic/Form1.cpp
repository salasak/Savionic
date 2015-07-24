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
#pragma warning( disable : 4945 4996 4793 4244 4018 4102)
#include "Form1.h"
#include "Form6.h"
#include "functions.h"
#include <string>
#include <Windows.h>
#include <time.h>
#include <shlobj.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <msclr\marshal_cppstd.h>

using namespace Savionic;
using namespace std;
//using namespace msclr::interop;
//using System::Runtime::InteropServices::Marshal;

#pragma region Declarations

extern bool GenerateWrapper();
extern bool msSendPacket(string str);

int iAutoAttackInterval		= 200, // 200 ms
    iMobInput				= 5, 
    iAutoAttackMobInterval	= 200, // 200 ms
    ilootItems				= 25,
    iUserSetHP				= 200,
    iUserSetMP				= 50,
    iPotInterval			= 200, // 200 ms
    iAutoSkill1Interval		= 100000, // 100 s
    iAutoSkill2Interval		= 100000, // 100 s
    ilootInterval			= 300, // 300 ms
	iTimedCC				= 60000, // 60 s
    iPeopleCC				= 0,
    iAttackCC				= 90,
    iItemCC					= 100;

bool bAutoAttackMobEnabled	= false,
     bEnableLooting			= false, 
     bEnableItemLooting		= false,
     bAutoItemCC			= false,
     bHPExit				= false,
     bMPExit				= false,
     bAutoAttackCC			= false,
     bAutoPeopleCC			= false,
     bEnableusingSkill2		= false,
     bAutoTimedCC			= false,
     bEnableusingSkill1		= false,
     busingSkill1			= false,  
     busingSkill2			= false,  
     bAutoAttackEnabled		= false; 

unsigned long ulStat = 0x0089431F, //8D 0C 80 85 C9 74 27 8B 75 08 8B C6 6B C0 64 99
              ulStatReturn = ulStat + 5;

long int CurHP = 0, 
		 CurMP = 0,  
		 MaxHP = 0, 
		 MaxMP = 0, 
		 CurEXP = 0, 
		 MaxEXP = 0;
 

//Windows Keys
System::Windows::Forms::Keys HPKey = System::Windows::Forms::Keys::PageUp; //Page Up is the  default key for HP.
System::Windows::Forms::Keys MPKey = System::Windows::Forms::Keys::PageDown; //Page Down is the default key for MP.
System::Windows::Forms::Keys Skill1Key = System::Windows::Forms::Keys::Delete; //Delete is the default key for Skill 1
System::Windows::Forms::Keys Skill2Key = System::Windows::Forms::Keys::Home; // Home is the default key for Skill 2
System::Windows::Forms::Keys AttackKey = System::Windows::Forms::Keys::LControlKey; //L.Control is the default key for Attacking.
System::Windows::Forms::Keys LootKey = System::Windows::Forms::Keys::NumPad0; // Num. Pad 0 is the default key for Looting.

#pragma endregion
void Main(void)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Form1);
	Application::Exit();
} 
void Form1::Form1_Load(System::Object^  sender, System::EventArgs^  e)
{
	::MessageBox(NULL,	"This trainer was created by Savion. \n"
						"For more content, visit www.TylerCode.com",  "Welcome!", MB_OK | MB_ICONINFORMATION);
	GenerateWrapper();
	srand(time(NULL));
	this->Text = "Savionic gMS v98.1"; 
	linkLabel1->Text = "www.TylerCode.com";
}
#pragma region Check for Updates
void Form1::CheckforUpdates()
{
	string ProgramVer = "40";
	string WebVer;
	ifstream UpdateFile, FileURL;
	UpdateFile.open("http://www.TylerCode.com/MSVer.txt");
	getline(UpdateFile, WebVer, ';');
	UpdateFile.close();

	if(WebVer != ProgramVer)
	{	
		label12->Text = "An update was found!";
		int  nUpdate = ::MessageBox(NULL, "There is an update available, would you like to download it?",  "Update found for Savionic!", MB_ICONEXCLAMATION|MB_YESNO); 
		{
			if (nUpdate == IDYES)
			{
				ShellExecuteA(NULL, "open", (LPCSTR)("http://www.TylerCode.com/Downloads/Savionic.dll"), NULL, NULL, SW_SHOWNORMAL);
			}
		}
	}
	else
	{
		label12->Text = "No update was found.";
	}
}
#pragma endregion
#pragma region Form Buttons
//Button1 is the "Hacks" Button.
void Form1::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(!myForm2->Visible)
	{
		myForm2->Visible = true;
	}
	else
	{
		myForm2->Hide();
	}
}
//Button2 is the "Injector" Button.
void Form1::button2_Click(System::Object^  sender, System::EventArgs^  e)
{

	if(!myForm3->Visible)
	{
		myForm3->Visible = true;
	}
	else
	{
		myForm3->Visible = false;
	}
}
//Button3 is the "Pointers and Offset" Button.
void Form1::button3_Click(System::Object^  sender, System::EventArgs^  e)
{

	if(!myForm4->Visible)
	{
		myForm4->Visible = true;
	}
	else
	{
		myForm4->Visible = false;
	}
}
//Button4 is the "Trainer Information" Button.
void Form1::button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(!myForm5->Visible)
	{
		myForm5->Visible = true;
	}
	else
	{
		myForm5->Visible = false;
	}
}
//Button5 is the "Packets!" Button.
void Form1::button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(!myForm6->Visible)
	{
		myForm6->Visible = true;
	}
	else
	{
		myForm6->Visible = false;
	}
}
//Button8 is the Wild Hunter's Packets button.
void Form1::button8_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(!myForm8->Visible)
	{
		myForm8->Visible = true;
	}
	else
	{
		myForm8->Visible = false;
	}
}
//Button9 is the Mini Map Testing button.
void Form1::button9_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(!myForm9->Visible)
	{
		myForm9->Visible = true;
	}
	else
	{
		myForm9->Visible = false;
	}
}
//Button10 is the Misc. button.
void Form1::button10_Click(System::Object^  sender, System::EventArgs^  e)
{

	if(!myForm10->Visible)
	{
		myForm10->Visible = true;
	}
	else
	{
		myForm10->Visible = false;
	}
}
//Button12 is the Item Filter button.
void Form1::button12_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(!myForm12->Visible)
	{
		myForm12->Visible = true;
	}
	else
	{
		myForm12->Visible = false;
	}
}
#pragma endregion
#pragma region Stat Hook
void __declspec(naked) StatHook() {
    __asm {
        push eax
            mov eax,[ebp+0x08]
        mov [CurHP],eax
            mov eax,[ebp+0x0c]
        mov [MaxHP],eax
            mov eax,[ebp+0x10]
        mov [CurMP],eax
            mov eax,[ebp+0x14]
        mov [MaxMP],eax
            mov eax,[ebp+0x18]
        mov [CurEXP],eax
            mov eax,[ebp+0x1c]
        mov [MaxEXP],eax
            pop eax
            lea ecx,[eax+eax*4]
        test ecx,ecx
            jmp dword ptr [ulStatReturn] //Notice that we use ulStatReturn instead of a fixed value
    }
}
 
void HookStat(bool bEnable) 
{
    if(bEnable) 
		Jump(ulStat, StatHook, 0); //Create a jump from ulStat to the StatHook method
    else 
		WriteMemory(ulStat,5,0x8D,0x0C,0x80,0x85,0xC9); //Write the bytes which were there before.               
}
#pragma endregion
#pragma region GUI Update
void Form1::checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(checkBox11->Checked == true)
		timer1->Enabled = true;
	else
		timer1->Enabled = false;
}
void Form1::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	if(checkBox11->Checked == true)
	{
		HookStat(true);

		//HP
		this->progressBar2->Minimum = 0;
		this->progressBar2->Maximum = MaxHP;
		this->progressBar2->Value = CurHP;

		//MP
		this->progressBar1->Minimum = 0;
		this->progressBar1->Maximum = MaxMP;
		this->progressBar1->Value = CurMP;

		//EXP
		this->progressBar3->Minimum = 0;
		this->progressBar3->Maximum = MaxEXP;
		this->progressBar3->Value = CurEXP;

		//Labels (MP & HP)
		this->label33->Text = "HP: " + CurHP.ToString();
		this->label34->Text = "MP: " + CurMP.ToString();
	
		//EXP (%)
		double xEXP = MaxEXP / 100;
		double yEXP = CurEXP / xEXP;
	
		this->label32->Text = "EXP: [ " + yEXP.ToString("f2") + "%" + " ]";

        //Setting AlertHP/MP Pointers to 20 gives us the last 5% missing from the HP and MP pointers.
        //WritePointer((ULONG_PTR*)SettingBase, AlertHP, 20);
		//WritePointer((ULONG_PTR*)SettingBase, AlertMP, 20);

		DWORD ulEBX = ReadPointer((ULONG_PTR*)MonsterBase, MobShort1);
		ulEBX = GetValue(ulEBX, MobShort2);   
        //ulEBX = GetValue(ulEBX, 0x4E8);//  8b 8e ? ? 00 00 e8 ? ? ? ? 8b 44 24 ? 2d   Mob death offset?
        ulEBX = GetValue(ulEBX, MobShort3);   
        ulEBX = GetValue(ulEBX, MobShort4);   
		DWORD MobX = GetValue(ulEBX, MobXShort);
		DWORD MobY = GetValue(ulEBX, MobYShort);
              //28,04,14,10c,24

				
				 
		unsigned long MouseLocxy, MouseX, MouseY;
		MouseLocxy  = ReadPointer((ULONG_PTR*)MouseBase, MouseLoc);
		MouseX = GetValue(MouseLocxy, Mousex);
		MouseY = GetValue(MouseLocxy, Mousey);

		//Values:
		label14->Text = "Mobs: " + ReadPointer((ULONG_PTR*)MonsterBase, MobCount).ToString();
        label15->Text = "Items: " + ReadPointer((ULONG_PTR*)ItemBase, ItemCount).ToString();
		label31->Text = "HP: " + CurHP.ToString();
        label30->Text = "MP: " + CurMP.ToString();
		label36->Text = "Exp: " + CurEXP.ToString();
        label29->Text = "Breath: " + ReadPointer((ULONG_PTR*)CharBase, Breath).ToString();
        label28->Text = "PID: " +  ReadPointer((ULONG_PTR*)CharBase, PID).ToString();
        label27->Text = "Animation: " +  ReadPointer((ULONG_PTR*)CharBase, Animation).ToString();
        label25->Text = "Combo: " + ReadPointer((ULONG_PTR*)CharBase, ComboCount).ToString();
        label26->Text = "Attacks: " + ReadPointer((ULONG_PTR*)CharBase, AttackCount).ToString();
        label24->Text = "Map ID: " + ReadPointer((ULONG_PTR*)InfoBase, MapID).ToString();
        label10->Text = "Char XY: " + ((short signed int)ReadPointer((ULONG_PTR*)CharBase, Charx)-1).ToString() + "," + ((short signed int)ReadPointer((ULONG_PTR*)CharBase, Chary)-1).ToString();
        label11->Text = "Monsters: " + ReadPointer((ULONG_PTR*)MonsterBase, MobCount).ToString();
        label16->Text = "Mob XY: " + ((short signed int)(MobX)).ToString() + "," + ((short signed int)(MobY)).ToString();
        label17->Text = "People: " + ReadPointer((ULONG_PTR*)PeopleBase, PeopleCount).ToString();
        label18->Text = "Items: " + ReadPointer((ULONG_PTR*)ItemBase, ItemCount).ToString();
        label19->Text = "Mouse XY: " + ((short signed int)(MouseX)).ToString() + "," + ((short signed int)(MouseY)).ToString();
        label20->Text = "Mouse Anim: " + ReadPointer((ULONG_PTR*)MouseBase, MouseAnim).ToString();
        label21->Text = "Portals: " + ReadPointer((ULONG_PTR*)PortalBase, PortalCount).ToString();
		label23->Text = "Channel: " + (ReadPointer((ULONG_PTR*)ServerBase, Channel)+1).ToString(); 
        label22->Text = "World: ";
        switch(ReadPointer((ULONG_PTR*)ServerBase, World))
		{
            case 0:
                    label22->Text += "Scania";
                    break;
            case 1:
                    label22->Text += "Bera";
                    break;
            case 2:
                    label22->Text += "Broa";
                    break;
            case 3:
                    label22->Text += "Windia";
                    break;
            case 4:
                    label22->Text += "Kahini";
                    break;
            case 5:
                    label22->Text += "Bellocan";
                    break;
            case 6:
                    label22->Text += "Mardia";
                    break;
            case 7:
                    label22->Text += "Khadia";
                    break;
            case 8:
                    label22->Text += "Yellonde";
                    break;
            case 9:
                    label22->Text += "Demethus";
                    break;
            case 10:
                    label22->Text += "Galicia";
                    break;
            case 11:
                    label22->Text += "El Nido";
                    break;
            case 12:
                    label22->Text += "Zenith";
                    break;
            case 13:
                    label22->Text += "Arcania";
                    break;
			case 14: 
					label22->Text += "Chaos";
					break;
            default:
                    label22->Text += "?";
                    break;
        } 
	}
		else
		{
			HookStat(false);
		}
}
#pragma endregion
#pragma region Maplestory outlinks / buttons
//Kill MS Button
void Form1::button6_Click(System::Object^  sender, System::EventArgs^  e)
{
	TerminateProcess(GetCurrentProcess(), 0);
 }
//Hide MS Button.
void Form1::button11_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(this->button11->Text == "Hide MapleStory")
	{
		this->button11->Text = "Show MapleStory";
		HWND hWnd = FindWindowA("MapleStoryClass", NULL);
		ShowWindow(FindWindowA("MapleStoryClass", NULL), SW_HIDE);
	}
	else 
	{
		this->button11->Text = "Hide MapleStory";
		HWND hWnd = FindWindowA("MapleStoryClass", NULL);
		ShowWindow(FindWindowA("MapleStoryClass", NULL), SW_SHOW);
	}
}
void Form1::linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
{
	ShellExecuteA(NULL, "open", (LPCSTR)("http://www.TylerCode.com"), NULL, NULL, SW_SHOWNORMAL);
}
#pragma endregion
#pragma region Drop down keys
//HP ComboBox selection list
//case x. "x" being the order they are listed in the combo box. 
void Form1::comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	switch(comboBox5->SelectedIndex)
		{
		case 0: 
			HPKey = System::Windows::Forms::Keys::PageUp; //HP Changes to the PageUp Key
			break; 
		case 1:
			HPKey = System::Windows::Forms::Keys::Delete;//Delete
			break;
		case 2:
			HPKey = System::Windows::Forms::Keys::Home;//Home
			break;
		case 3:
			HPKey = System::Windows::Forms::Keys::End;//End
			break;
		case 4:
			HPKey = System::Windows::Forms::Keys::Insert;//Insert
			break;
		case 5:
			HPKey = System::Windows::Forms::Keys::PageDown; //Page Down
			break;
		case 6:
			HPKey = System::Windows::Forms::Keys::D0;//"0" in the top number row
			break;
		case 7:
			HPKey = System::Windows::Forms::Keys::D9; //"9" in the top number row
			break;
		case 8: 
			HPKey = System::Windows::Forms::Keys::D1; //1
			break;
		case 9:
			HPKey = System::Windows::Forms::Keys::D2;//2
			break;
		case 10:
			HPKey = System::Windows::Forms::Keys::D3;//3
			break;
		case 11:
			HPKey = System::Windows::Forms::Keys::D4;//4
			break;
		case 12:
			HPKey = System::Windows::Forms::Keys::D5;//5
			break;
		case 13:
			HPKey = System::Windows::Forms::Keys::D6; //6
			break;
		case 14:
			HPKey = System::Windows::Forms::Keys::D7; //7
			break;
		case 15:
			HPKey = System::Windows::Forms::Keys::D8;//8
			break;
		case 16: 
			HPKey = System::Windows::Forms::Keys::A; //A
			break; 
		case 17:
			HPKey = System::Windows::Forms::Keys::B;//B
			break;
		case 18:
			HPKey = System::Windows::Forms::Keys::C;//C
			break;
		case 19:
			HPKey = System::Windows::Forms::Keys::D;//D
			break;
		case 20:
			HPKey = System::Windows::Forms::Keys::E;//E
			break;
		case 21:
			HPKey = System::Windows::Forms::Keys::F; //F
			break;
		case 22:
			HPKey = System::Windows::Forms::Keys::G; //G
			break;
		case 23:
			HPKey = System::Windows::Forms::Keys::H;//H
			break;
		case 24: 
			HPKey = System::Windows::Forms::Keys::I; //I
			break;
		case 25:
			HPKey = System::Windows::Forms::Keys::J;//J
			break;
		case 26:
			HPKey = System::Windows::Forms::Keys::K;//K
			break;
		case 27:
			HPKey = System::Windows::Forms::Keys::L;//L
			break;
		case 28:
			HPKey = System::Windows::Forms::Keys::M;//M
			break;
		case 29:
			HPKey = System::Windows::Forms::Keys::N; //N
			break;
		case 30:
			HPKey = System::Windows::Forms::Keys::O; //O
		case 31:
			HPKey = System::Windows::Forms::Keys::P;//P
			break;
		case 32:
			HPKey = System::Windows::Forms::Keys::Q; //Q
			break;
		case 33:
			HPKey = System::Windows::Forms::Keys::R; //R
			break;
		case 34:
			HPKey = System::Windows::Forms::Keys::S;//S
			break;
		case 35: 
			HPKey = System::Windows::Forms::Keys::T; //T
			break;
		case 36:
			HPKey = System::Windows::Forms::Keys::U;//U
			break;
		case 37:
			HPKey = System::Windows::Forms::Keys::V;//V
			break;
		case 38:
			HPKey = System::Windows::Forms::Keys::W;//W
			break;
		case 39:
			HPKey = System::Windows::Forms::Keys::X;//X
			break;
		case 40:
			HPKey = System::Windows::Forms::Keys::Y; //Y
			break;
		case 41:
			HPKey = System::Windows::Forms::Keys::Z; //Z
			break;
	}
}
//MP ComboBox selection list
Void Form1::comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	switch(comboBox6->SelectedIndex)
			 {
		case 0:
			MPKey = System::Windows::Forms::Keys::PageDown;//Page Down
			break;
		case 1:
			MPKey = System::Windows::Forms::Keys::Delete;//Delete
			break;
		case 2:
			MPKey = System::Windows::Forms::Keys::Home;//Home
			break;
		case 3:
			MPKey = System::Windows::Forms::Keys::End;//End
			break;
		case 4:
			MPKey = System::Windows::Forms::Keys::Insert; //Insert
			break;
		case 5:
			MPKey = System::Windows::Forms::Keys::PageUp; //PageUp
			break;
		case 6:
			MPKey = (System::Windows::Forms::Keys)48;//"0" in the top number row
			break;
		case 7:
			MPKey = (System::Windows::Forms::Keys)57; //"9" in the top number row
			break;
		case 8: 
			MPKey = System::Windows::Forms::Keys::D1; //1
			break; 
		case 9:
			MPKey = System::Windows::Forms::Keys::D2;//2
			break;
		case 10:
			MPKey = System::Windows::Forms::Keys::D3;//3
			break;
		case 11:
			MPKey = System::Windows::Forms::Keys::D4;//4
			break;
		case 12:
			MPKey = System::Windows::Forms::Keys::D5;//5
			break;
		case 13:
			MPKey = System::Windows::Forms::Keys::D6; //6
			break;
		case 14:
			MPKey = System::Windows::Forms::Keys::D7; //7
			break;
		case 15:
			MPKey = System::Windows::Forms::Keys::D8;//8
			break;
		case 16: 
			MPKey = System::Windows::Forms::Keys::A; //A
			break; 
		case 17:
			MPKey = System::Windows::Forms::Keys::B;//B
			break;
		case 18:
			MPKey = System::Windows::Forms::Keys::C;//C
			break;
		case 19:
			MPKey = System::Windows::Forms::Keys::D;//D
			break;
		case 20:
			MPKey = System::Windows::Forms::Keys::E;//E
			break;
		case 21:
			MPKey = System::Windows::Forms::Keys::F; //F
			break;
		case 22:
			MPKey = System::Windows::Forms::Keys::G; //G
			break;
		case 23:
			MPKey = System::Windows::Forms::Keys::H;//H
			break;
		case 24: 
			MPKey = System::Windows::Forms::Keys::I; //I
			break;
		case 25:
			MPKey = System::Windows::Forms::Keys::J;//J
			break;
		case 26:
			MPKey = System::Windows::Forms::Keys::K;//K
			break;
		case 27:
			MPKey = System::Windows::Forms::Keys::L;//L
			break;
		case 28:
			MPKey = System::Windows::Forms::Keys::M;//M
			break;
		case 29:
			MPKey = System::Windows::Forms::Keys::N; //N
			break;
		case 30:
			MPKey = System::Windows::Forms::Keys::O; //O
		case 31:
			MPKey = System::Windows::Forms::Keys::P;//P
			break;
		case 32:
			MPKey = System::Windows::Forms::Keys::Q; //Q
			break;
		case 33:
			MPKey = System::Windows::Forms::Keys::R; //R
			break;
		case 34:
			MPKey = System::Windows::Forms::Keys::S;//S
			break;
		case 35:
			MPKey = System::Windows::Forms::Keys::T; //T
			break;
		case 36:
			MPKey = System::Windows::Forms::Keys::U;//U
			break;
		case 37:
			MPKey = System::Windows::Forms::Keys::V;//V
			break;
		case 38:
			MPKey = System::Windows::Forms::Keys::W;//W
			break;
		case 39:
			MPKey = System::Windows::Forms::Keys::X;//X
			break;
		case 40:
			MPKey = System::Windows::Forms::Keys::Y; //Y
			break;
		case 41:
			MPKey = System::Windows::Forms::Keys::Z; //Z
			break;
	}
}
//Auto Skill 1 ComboBox selection list
Void Form1::comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	switch(comboBox1->SelectedIndex)
			 {
		case 0:
			Skill1Key = System::Windows::Forms::Keys::Delete; // Delete
			break;
		case 1:
			Skill1Key = System::Windows::Forms::Keys::Home;//Home
			break;
		case 2:
			Skill1Key = System::Windows::Forms::Keys::End;//End
			break;
		case 3:
			Skill1Key = System::Windows::Forms::Keys::PageDown;//Page Down
			break;
		case 4:
			Skill1Key = System::Windows::Forms::Keys::PageUp; //Page Up
			break;
		case 5:
			Skill1Key = System::Windows::Forms::Keys::Insert; //Insert
			break;
		case 6:
			Skill1Key = System::Windows::Forms::Keys::D0;//"0" in the top number row
			break;
		case 7:
			Skill1Key = System::Windows::Forms::Keys::D9; //"9" in the top number row
			break;
		case 8: 
			Skill1Key = System::Windows::Forms::Keys::D1; //1
			break; 
		case 9:
			Skill1Key = System::Windows::Forms::Keys::D2;//2
			break;
		case 10:
			Skill1Key = System::Windows::Forms::Keys::D3;//3
			break;
		case 11:
			Skill1Key = System::Windows::Forms::Keys::D4;//4
			break;
		case 12:
			Skill1Key = System::Windows::Forms::Keys::D5;//5
			break;
		case 13:
			Skill1Key = System::Windows::Forms::Keys::D6; //6
			break;
		case 14:
			Skill1Key = System::Windows::Forms::Keys::D7; //7
			break;
		case 15:
			Skill1Key = System::Windows::Forms::Keys::D8;//8
			break;
		case 16: 
			Skill1Key = System::Windows::Forms::Keys::A; //A
			break; 
		case 17:
			Skill1Key = System::Windows::Forms::Keys::B;//B
			break;
		case 18:
			Skill1Key = System::Windows::Forms::Keys::C;//C
			break;
		case 19:
			Skill1Key = System::Windows::Forms::Keys::D;//D
			break;
		case 20:
			Skill1Key = System::Windows::Forms::Keys::E;//E
			break;
		case 21:
			Skill1Key = System::Windows::Forms::Keys::F; //F
			break;
		case 22:
			Skill1Key = System::Windows::Forms::Keys::G; //G
			break;
		case 23:
			Skill1Key = System::Windows::Forms::Keys::H;//H
			break;
		case 24: 
			Skill1Key = System::Windows::Forms::Keys::I; //I
			break; 
		case 25:
			Skill1Key = System::Windows::Forms::Keys::J;//J
			break;
		case 26:
			Skill1Key = System::Windows::Forms::Keys::K;//K
			break;
		case 27:
			Skill1Key = System::Windows::Forms::Keys::L;//L
			break;
		case 28:
			Skill1Key = System::Windows::Forms::Keys::M;//M
			break;
		case 29:
			Skill1Key = System::Windows::Forms::Keys::N; //N
			break;
		case 30:
			Skill1Key = System::Windows::Forms::Keys::O; //O
		case 31:
			Skill1Key = System::Windows::Forms::Keys::P;//P
			break;
		case 32:
			Skill1Key = System::Windows::Forms::Keys::Q; //Q
			break;
		case 33:
			Skill1Key = System::Windows::Forms::Keys::R; //R
			break;
		case 34:
			Skill1Key = System::Windows::Forms::Keys::S;//S
			break;
		case 35: 
			Skill1Key = System::Windows::Forms::Keys::T; //T
			break; 
		case 36:
			Skill1Key = System::Windows::Forms::Keys::U;//U
			break;
		case 37:
			Skill1Key = System::Windows::Forms::Keys::V;//V
			break;
		case 38:
			Skill1Key = System::Windows::Forms::Keys::W;//W
			break;
		case 39:
			Skill1Key = System::Windows::Forms::Keys::X;//X
			break;
		case 40:
			Skill1Key = System::Windows::Forms::Keys::Y; //Y
			break;
		case 41:
			Skill1Key = System::Windows::Forms::Keys::Z; //Z
			break;
	}
}
//Autoskill 2 ComboBox selection list
Void Form1::comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	switch(comboBox2->SelectedIndex)
	{
		case 0:
			Skill2Key = System::Windows::Forms::Keys::Home;//Home
			break;
		case 1:
			Skill2Key = System::Windows::Forms::Keys::Delete;//Delete
			break;
		case 2:
			Skill2Key = System::Windows::Forms::Keys::End;//End
			break;
		case 3:
			Skill2Key = System::Windows::Forms::Keys::PageDown;//Page Down
			break;
		case 4:
			Skill2Key = System::Windows::Forms::Keys::PageUp; //Page Up
			break;
		case 5:
			Skill2Key = System::Windows::Forms::Keys::Insert; //Insert
			break;
		case 6:
			Skill2Key = (System::Windows::Forms::Keys)48;//"0" in the top number row
			break;
		case 7:
			Skill2Key = (System::Windows::Forms::Keys)57; //"9" in the top number row
			break;
		case 8: 
			Skill2Key = System::Windows::Forms::Keys::D1; //1
			break; 
		case 9:
			Skill2Key = System::Windows::Forms::Keys::D2;//2
			break;
		case 10:
			Skill2Key = System::Windows::Forms::Keys::D3;//3
			break;
		case 11:
			Skill2Key = System::Windows::Forms::Keys::D4;//4
			break;
		case 12:
			Skill2Key = System::Windows::Forms::Keys::D5;//5
			break;
		case 13:
			Skill2Key = System::Windows::Forms::Keys::D6; //6
			break;
		case 14:
			Skill2Key = System::Windows::Forms::Keys::D7; //7
			break;
		case 15:
			Skill2Key = System::Windows::Forms::Keys::D8;//8
			break;
		case 16: 
			Skill2Key = System::Windows::Forms::Keys::A; //A
			break; 
		case 17:
			Skill2Key = System::Windows::Forms::Keys::B;//B
			break;
		case 18:
			Skill2Key = System::Windows::Forms::Keys::C;//C
			break;
		case 19:
			Skill2Key = System::Windows::Forms::Keys::D;//D
			break;
		case 20:
			Skill2Key = System::Windows::Forms::Keys::E;//E
			break;
		case 21:
			Skill2Key = System::Windows::Forms::Keys::F; //F
			break;
		case 22:
			Skill2Key = System::Windows::Forms::Keys::G; //G
			break;
		case 23:
			Skill2Key = System::Windows::Forms::Keys::H;//H
			break;
		case 24: 
			Skill2Key = System::Windows::Forms::Keys::I; //I
			break; 
		case 25:
			Skill2Key = System::Windows::Forms::Keys::J;//J
			break;
		case 26:
			Skill2Key = System::Windows::Forms::Keys::K;//K
			break;
		case 27:
			Skill2Key = System::Windows::Forms::Keys::L;//L
			break;
		case 28:
			Skill2Key = System::Windows::Forms::Keys::M;//M
			break;
		case 29:
			Skill2Key = System::Windows::Forms::Keys::N; //N
			break;
		case 30:
			Skill2Key = System::Windows::Forms::Keys::O; //O
		case 31:
			Skill2Key = System::Windows::Forms::Keys::P;//P
			break;
		case 32:
			Skill2Key = System::Windows::Forms::Keys::Q; //Q
			break;
		case 33:
			Skill2Key = System::Windows::Forms::Keys::R; //R
			break;
		case 34:
			Skill2Key = System::Windows::Forms::Keys::S;//S
			break;
		case 35: 
			Skill2Key = System::Windows::Forms::Keys::T; //T
			break; 
		case 36:
			Skill2Key = System::Windows::Forms::Keys::U;//U
			break;
		case 37:
			Skill2Key = System::Windows::Forms::Keys::V;//V
			break;
		case 38:
			Skill2Key = System::Windows::Forms::Keys::W;//W
			break;
		case 39:
			Skill2Key = System::Windows::Forms::Keys::X;//X
			break;
		case 40:
			Skill2Key = System::Windows::Forms::Keys::Y; //Y
			break;
		case 41:
			Skill2Key = System::Windows::Forms::Keys::Z; //Z
			break;
	}
}
//Auto Attack ComboBox selection list
void Form1::comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	switch(comboBox3->SelectedIndex)
	{
		case 0:
			AttackKey = System::Windows::Forms::Keys::LControlKey;// Left Control Key
			break;
		case 1:
			AttackKey = System::Windows::Forms::Keys::Delete;//Delete
			break;
		case 2:
			AttackKey = System::Windows::Forms::Keys::Home;//Home
			break;
		case 3:
			AttackKey = System::Windows::Forms::Keys::End;//End
			break;
		case 4:
			AttackKey = System::Windows::Forms::Keys::PageDown; //Page Down
			break;		
		case 5:
			AttackKey = System::Windows::Forms::Keys::PageUp; //Page Up
			break;
		case 6:
			AttackKey = System::Windows::Forms::Keys::Insert; //Insert
			break;
		case 7:
			AttackKey = (System::Windows::Forms::Keys)48;//"0" in the top number row
			break;
		case 8:
			AttackKey = (System::Windows::Forms::Keys)57; //"9" in the top number row
			break;
		case 9: 
			AttackKey = System::Windows::Forms::Keys::D1; //1
			break; 
		case 10:
			AttackKey = System::Windows::Forms::Keys::D2;//2
			break;
		case 11:
			AttackKey = System::Windows::Forms::Keys::D3;//3
			break;
		case 12:
			AttackKey = System::Windows::Forms::Keys::D4;//4
			break;
		case 13:
			AttackKey = System::Windows::Forms::Keys::D5;//5
			break;
		case 14:
			AttackKey = System::Windows::Forms::Keys::D6; //6
			break;
		case 15:
			AttackKey = System::Windows::Forms::Keys::D7; //7
			break;
		case 16:
			AttackKey = System::Windows::Forms::Keys::D8;//8
			break;
		case 17: 
			AttackKey = System::Windows::Forms::Keys::A; //A
			break; 
		case 18:
			AttackKey = System::Windows::Forms::Keys::B;//B
			break;
		case 19:
			AttackKey = System::Windows::Forms::Keys::C;//C
			break;
		case 20:
			AttackKey = System::Windows::Forms::Keys::D;//D
			break;
		case 21:
			AttackKey = System::Windows::Forms::Keys::E;//E
			break;
		case 22:
			AttackKey = System::Windows::Forms::Keys::F; //F
			break;
		case 23:
			AttackKey = System::Windows::Forms::Keys::G; //G
			break;
		case 24:
			AttackKey = System::Windows::Forms::Keys::H;//H
			break;
		case 25: 
			AttackKey = System::Windows::Forms::Keys::I; //I
			break; 
		case 26:
			AttackKey = System::Windows::Forms::Keys::J;//J
			break;
		case 27:
			AttackKey = System::Windows::Forms::Keys::K;//K
			break;
		case 28:
			AttackKey = System::Windows::Forms::Keys::L;//L
			break;
		case 29:
			AttackKey = System::Windows::Forms::Keys::M;//M
			break;
		case 30:
			AttackKey = System::Windows::Forms::Keys::N; //N
			break;
		case 31:
			AttackKey = System::Windows::Forms::Keys::O; //O
		case 32:
			AttackKey = System::Windows::Forms::Keys::P;//P
			break;
		case 33:
			AttackKey = System::Windows::Forms::Keys::Q; //Q
			break;
		case 34:
			AttackKey = System::Windows::Forms::Keys::R; //R
			break;
		case 35:
			AttackKey = System::Windows::Forms::Keys::S;//S
			break;
		case 36: 
			AttackKey = System::Windows::Forms::Keys::T; //T
			break; 
		case 37:
			AttackKey = System::Windows::Forms::Keys::U;//U
			break;
		case 38:
			AttackKey = System::Windows::Forms::Keys::V;//V
			break;
		case 39:
			AttackKey = System::Windows::Forms::Keys::W;//W
			break;
		case 40:
			AttackKey = System::Windows::Forms::Keys::X;//X
			break;
		case 41:
			AttackKey = System::Windows::Forms::Keys::Y; //Y
			break;
		case 42:
			AttackKey = System::Windows::Forms::Keys::Z; //Z
			break;
	}
}
//AutoLoot ComboBox selection list
void Form1::comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	switch(comboBox4->SelectedIndex)
	{
		case 0:
			LootKey = System::Windows::Forms::Keys::NumPad0;// Number Pad "0"
			break;
		case 1:
			LootKey = System::Windows::Forms::Keys::Delete;//Delete
			break;
		case 2:
			LootKey = System::Windows::Forms::Keys::Home;//Home
			break;
		case 3:
			LootKey = System::Windows::Forms::Keys::End;//End
			break;
		case 4:
			LootKey = System::Windows::Forms::Keys::PageDown; //Page Down
			break;
		case 5:
			LootKey = System::Windows::Forms::Keys::PageUp; // Page Up
			break;
		case 6:
			LootKey = System::Windows::Forms::Keys::Insert; //Insert
			break;
		case 7:
			LootKey = (System::Windows::Forms::Keys)48;//"0" in the top number row
			break;
		case 8:
			LootKey = (System::Windows::Forms::Keys)57; //"9" in the top number row
			break;
		case 9: 
			LootKey = System::Windows::Forms::Keys::D1; //1
			break; 
		case 10:
			LootKey = System::Windows::Forms::Keys::D2;//2
			break;
		case 11:
			LootKey = System::Windows::Forms::Keys::D3;//3
			break;
		case 12:
			LootKey = System::Windows::Forms::Keys::D4;//4
			break;
		case 13:
			LootKey = System::Windows::Forms::Keys::D5;//5
			break;
		case 14:
			LootKey = System::Windows::Forms::Keys::D6; //6
			break;
		case 15:
			LootKey = System::Windows::Forms::Keys::D7; //7
			break;
		case 16:
			LootKey = System::Windows::Forms::Keys::D8;//8
			break;
		case 17: 
			LootKey = System::Windows::Forms::Keys::A; //A
			break; 
		case 18:
			LootKey = System::Windows::Forms::Keys::B;//B
			break;
		case 19:
			LootKey = System::Windows::Forms::Keys::C;//C
			break;
		case 20:
			LootKey = System::Windows::Forms::Keys::D;//D
			break;
		case 21:
			LootKey = System::Windows::Forms::Keys::E;//E
			break;
		case 22:
			LootKey = System::Windows::Forms::Keys::F; //F
			break;
		case 23:
			LootKey = System::Windows::Forms::Keys::G; //G
			break;
		case 24:
			LootKey = System::Windows::Forms::Keys::H;//H
			break;
		case 25: 
			LootKey = System::Windows::Forms::Keys::I; //I
			break; 
		case 26:
			LootKey = System::Windows::Forms::Keys::J;//J
			break;
		case 27:
			LootKey = System::Windows::Forms::Keys::K;//K
			break;
		case 28:
			LootKey = System::Windows::Forms::Keys::L;//L
			break;
		case 29:
			LootKey = System::Windows::Forms::Keys::M;//M
			break;
		case 30:
			LootKey = System::Windows::Forms::Keys::N; //N
			break;
		case 31:
			LootKey = System::Windows::Forms::Keys::O; //O
		case 32:
			LootKey = System::Windows::Forms::Keys::P;//P
			break;
		case 33:
			LootKey = System::Windows::Forms::Keys::Q; //Q
			break;
		case 34:
			LootKey = System::Windows::Forms::Keys::R; //R
			break;
		case 35:
			LootKey = System::Windows::Forms::Keys::S;//S
			break;
		case 36: 
			LootKey = System::Windows::Forms::Keys::T; //T
			break; 
		case 37:
			LootKey = System::Windows::Forms::Keys::U;//U
			break;
		case 38:
			LootKey = System::Windows::Forms::Keys::V;//V
			break;
		case 39:
			LootKey = System::Windows::Forms::Keys::W;//W
			break;
		case 40:
			LootKey = System::Windows::Forms::Keys::X;//X
			break;
		case 41:
			LootKey = System::Windows::Forms::Keys::Y; //Y
			break;
		case 42:
			LootKey = System::Windows::Forms::Keys::Z; //Z
			break;
	}
}
#pragma endregion
#pragma region Auto Bot
#pragma region Auto Attack
void StartAutoAttack() 
{
	while(bAutoAttackEnabled) 
	{
		if(busingSkill1 == false && busingSkill2 == false) 
		{
			 PostMessage(FindWindowA("MapleStoryClass", NULL), WM_KEYDOWN, (WPARAM)AttackKey, (MapVirtualKeyA((UINT)AttackKey, 0) << 16) + 1); 
			 Sleep(iAutoAttackInterval); 
		}
	}
}
//AutoAttack
void Form1::checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox6->Checked) 
	{
		bAutoAttackEnabled = true; 
		CreateThread(NULL, NULL, (::LPTHREAD_START_ROUTINE)&StartAutoAttack, NULL, NULL, NULL); 
	}
	else
	{
		bAutoAttackEnabled = false;  
	}
}
#pragma endregion
#pragma region Auto Attack Mobs
void StartAutoAttackMob() 
{
	while(bAutoAttackMobEnabled)
	{
		if((ReadPointer((ULONG_PTR*)MonsterBase, MobCount) > iMobInput)) 
		{
			if(busingSkill1 == false && busingSkill2 == false)
			{
					PostMessage(FindWindowA("MapleStoryClass", NULL), WM_KEYDOWN, (WPARAM)AttackKey, (MapVirtualKeyA((UINT)AttackKey, 0) << 16) + 1); 
					Sleep(iAutoAttackInterval); 
			}
		}
	}
}
//AutoAttack if mobs >= x
void Form1::checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	iAutoAttackInterval = Convert::ToInt32(this->textBox5->Text); 
	iMobInput = Convert::ToInt32(this->textBox15->Text);
	if(this->checkBox14->Checked)
	{
		bAutoAttackMobEnabled = true;
		CreateThread(NULL, NULL, (::LPTHREAD_START_ROUTINE)&StartAutoAttackMob, NULL, NULL, NULL);
	}
	else
	{
		bAutoAttackMobEnabled = false;
	}
}
#pragma endregion
#pragma region Auto Loot
void StartLoot()
{
	while(bEnableLooting)
	{
		if(busingSkill1 == false && busingSkill2 == false) 
		{
			PostMessage(FindWindowA("MapleStoryClass", NULL), WM_KEYDOWN, (WPARAM)LootKey, (MapVirtualKeyA((UINT)AttackKey, 0) << 16) + 1);
			Sleep(ilootInterval); 
		}
	}
} 
void Form1::checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox7->Checked)
	{
			bEnableLooting = true;
			CreateThread(NULL, NULL, (::LPTHREAD_START_ROUTINE)&StartLoot, NULL, NULL, NULL);
	}
	else
	{
		bEnableLooting = false;
	}
}

#pragma endregion
#pragma region Auto Item Loot
void StartLootItems()
{
	HWND hwnd = FindWindowA("MapleStoryClass", NULL);
	LPARAM lParam = (MapVirtualKeyA((UINT)LootKey, 0) << 16) + 1; 
	while(bEnableItemLooting) 
	{
		if(ReadPointer((ULONG_PTR*)ItemBase, ItemCount) >= ilootItems)
		{
			if(busingSkill1 == false && busingSkill2 == false)
			{
				PostMessage(FindWindowA("MapleStoryClass", NULL), WM_KEYDOWN, (WPARAM)LootKey, (MapVirtualKeyA((UINT)AttackKey, 0) << 16) + 1);
				Sleep(ilootInterval); 
			}
			Sleep(30);
		}
		Sleep(30);
	}
} 

//Autoloot if items >=
void Form1::checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	ilootItems = Convert::ToInt32(this->textBox14->Text);
	ilootInterval = Convert::ToInt32(this->textBox6->Text);
	if(this->checkBox13->Checked)
	{
		bEnableItemLooting = true;
		CreateThread(NULL, NULL, (::LPTHREAD_START_ROUTINE)&StartLootItems, NULL, NULL, NULL);
	}
	else
	{
		bEnableItemLooting = false;
	}
}
#pragma endregion
#pragma region AutoSkill 1
void StartusingAutoSkill1()
{
	while(bEnableusingSkill1)
	{
		busingSkill1 = true;
		PostMessage(FindWindowA("MapleStoryClass", NULL), WM_KEYDOWN, (WPARAM)Skill1Key, (MapVirtualKeyA((UINT)AttackKey, 0) << 16) + 1);
		busingSkill1 = false; 
		Sleep(iAutoSkill1Interval); 
	}
} 

void Form1::checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox4->Checked) 

	{
		if(this->textBox3->Text == "")
		{
			this->checkBox4->Checked = false;
			MessageBoxW(NULL, L"Please insert a value for Auto Skill 1 in seconds.", L"Alert", MB_OK);
		}
		else
		{
			bEnableusingSkill1 = true;
			iAutoSkill1Interval = Convert::ToInt32(this->textBox3->Text);
			iAutoSkill1Interval = iAutoSkill1Interval * 1000;
			CreateThread(NULL, NULL, (::LPTHREAD_START_ROUTINE)&StartusingAutoSkill1, NULL, NULL, NULL);
		}
	}
	else
	{
		bEnableusingSkill1 = false;
	}
}
#pragma endregion
#pragma region AutoSkill 2
void StartusingAutoSkill2()
{
	while(bEnableusingSkill2)
	{
		busingSkill2 = true;
		PostMessage(FindWindowA("MapleStoryClass", NULL), WM_KEYDOWN, (WPARAM)Skill2Key, (MapVirtualKeyA((UINT)AttackKey, 0) << 16) + 1);
		busingSkill2 = false; 
		Sleep(iAutoSkill2Interval); 
	}
} 

void Form1::checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox5->Checked)
	{
		if(this->textBox4->Text == "")
		{
			this->checkBox5->Checked = false;
			MessageBoxW(NULL, L"Please insert a value for Auto Skill 2 in seconds.", L"Alert", MB_OK);
		}
		else
		{
			bEnableusingSkill2 = true;
			iAutoSkill2Interval = Convert::ToInt32(this->textBox4->Text);
			iAutoSkill2Interval = iAutoSkill2Interval * 1000;
			CreateThread(NULL, NULL, (::LPTHREAD_START_ROUTINE)&StartusingAutoSkill2, NULL, NULL, NULL);
		}
		
	}
	else
	{
		bEnableusingSkill2 = false;
	}
}
#pragma endregion
#pragma region AutoPot
void AutoPotHP()
{
	while(bHPExit)
	{
		if(ReadPointer((ULONG_PTR*)GUIInfoBase, HP) < iUserSetHP)
		{
            PostMessage(FindWindowA("MapleStoryClass", NULL), WM_KEYDOWN, (WPARAM)HPKey, (MapVirtualKeyA((UINT)HPKey, 0) << 16) + 1); // Page Up
			Sleep(iPotInterval);
		}
		Sleep(10);
	}
}
void AutoPotMP()
{
	while(bMPExit)
	{
		if(ReadPointer((ULONG_PTR*)GUIInfoBase, MP) < iUserSetMP)
		{
			PostMessage(FindWindowA("MapleStoryClass", NULL), WM_KEYDOWN, (WPARAM)MPKey, (MapVirtualKeyA((UINT)MPKey, 0) << 16) + 1); // Page Down
			Sleep(iPotInterval);
		}
		Sleep(10);
	}
}


void Form1::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iUserSetHP = Convert::ToInt32(this->textBox1->Text);
}

void Form1::textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iUserSetMP = Convert::ToInt32(this->textBox2->Text);
}

void Form1::checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox8->Checked)
	{
		bHPExit = true;
		iPotInterval = Convert::ToInt32(this->textBox10->Text);
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&AutoPotHP, NULL, NULL, NULL);
	}
	else
	{
		bHPExit = false;
	}
}
void Form1::checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox9->Checked)
	{
		bMPExit = true;
		iPotInterval = Convert::ToInt32(this->textBox10->Text);
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&AutoPotMP, NULL, NULL, NULL);
	}
	else
	{
		bMPExit = false;
	}
}
#pragma endregion
#pragma region Auto CC
void ChangeChannel()
{
	srand(time(NULL));
	BYTE RandomChannel13, RandomChannel19, RandomChannel20;
	RandomChannel13 = (BYTE)rand() % 0x13;
	RandomChannel19 = (BYTE)rand() % 0x19;
	RandomChannel20 = (BYTE)rand() % 0x20;
	char packet[64];	
	int CurWorld = ReadPointer((ULONG_PTR*)0x00DC3098, 2064);
	if(CurWorld == 0 || CurWorld == 1 || CurWorld == 2 || CurWorld == 3 || CurWorld == 4 || CurWorld == 5)
	{
		sprintf(packet, "2E 00 %.2x ** ** ** 00", RandomChannel19);
	}
	if(CurWorld == 6 || CurWorld == 7 || CurWorld == 8 || CurWorld == 9 || CurWorld == 10)
	{
		sprintf(packet, "2E 00 %.2x ** ** ** 00", RandomChannel13);
	}
	if(CurWorld == 11 || CurWorld == 12 || CurWorld == 13 || CurWorld == 14)
	{
		sprintf(packet, "2E 00 %.2x ** ** ** 00", RandomChannel20);
	}
	msSendPacket(packet);
}

void AutoTimedCC()
{
   while(bAutoTimedCC)
   {
	   Sleep(iTimedCC * 1000); //x second delay
	   CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&ChangeChannel, NULL, NULL, NULL);
   }
}

void AutoPeopleCC()
{
   while(bAutoPeopleCC)
   {
	   if(ReadPointer((ULONG_PTR*)PeopleBase, PeopleCount) > iPeopleCC)
	   {
			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&ChangeChannel, NULL, NULL, NULL);
	   }
	   Sleep(1000);
   }
}

void AutoAttackCC()
{
   while(bAutoAttackCC)
   {
	   if(ReadPointer((ULONG_PTR*)CharBase, AttackCount) >= iAttackCC)
	   {
			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&ChangeChannel, NULL, NULL, NULL);
	   }
	    Sleep(1000);
   }
}


void AutoItemCC()
{
   while(bAutoItemCC)
   {
	   if(ReadPointer((ULONG_PTR*)ItemBase, ItemCount) >= iItemCC)
	   {
			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&ChangeChannel, NULL, NULL, NULL);
	   }
	     Sleep(1000);
   }
}


// Time
void Form1::checkBox2_CheckedChanged(System::Object ^sender, System::EventArgs ^e)
{
	if(this->checkBox2->Checked)
	{
		if(this->textBox9->Text == "")
		{ 
			this->checkBox2->Checked = false;
			MessageBoxW(NULL, L"Please insert the interval at which you want to change channels in Seconds.", L"Alert", MB_OK);
		}
		else
		{
			bAutoTimedCC = true;
			iTimedCC = Convert::ToInt32(this->textBox9->Text);
			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&AutoTimedCC, NULL, NULL, NULL);
		}
	}
	else
	{
		bAutoTimedCC = false; 
	}
}


// Attacks
void Form1::checkBox3_CheckedChanged(System::Object ^sender, System::EventArgs ^e)
{
	if(this->checkBox3->Checked)
	{
		if(this->textBox8->Text == "")
		{ 
			this->checkBox3->Checked = false;
			MessageBoxW(NULL, L"Please insert how many Attacks you want to change channels at.", L"Alert", MB_OK);
		}
		else
		{
			bAutoAttackCC = true;
			iAttackCC = Convert::ToInt32(this->textBox8->Text);
			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&AutoAttackCC, NULL, NULL, NULL);
		}
	}
	else
	{
		bAutoAttackCC = false;
	}
}

// People
void Form1::checkBox1_CheckedChanged(System::Object ^sender, System::EventArgs ^e)
{
	if(this->checkBox1->Checked)
	{
		if(this->textBox7->Text == "")
		{ 
			this->checkBox1->Checked = false;
			MessageBoxW(NULL, L"Please insert how many People you want to change channels at.", L"Alert", MB_OK);
		}
		else
		{
			bAutoPeopleCC = true;
			iPeopleCC = Convert::ToInt32(this->textBox7->Text);
			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&AutoPeopleCC, NULL, NULL, NULL);
		}
	}
	else
	{
		bAutoPeopleCC = false;
	}
}
// Item
void Form1::checkBox10_CheckedChanged(System::Object ^sender, System::EventArgs ^e)
{
	if(this->checkBox10->Checked)
	{
		if(this->textBox11->Text == "")
		{ 
			this->checkBox10->Checked = false;
			MessageBoxW(NULL, L"Please insert the how many items you want to Change Channel at.", L"Alert", MB_OK);
		}
		else
		{
			bAutoItemCC = true;
			iItemCC = Convert::ToInt32(this->textBox11->Text);
			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&AutoItemCC, NULL, NULL, NULL);
		}
	}
	else
	{
		bAutoItemCC = false; 
	}
}
#pragma endregion
#pragma endregion