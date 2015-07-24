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
#pragma once
#include <Windows.h>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
//#define jmp(frm,to) (((int)to - (int)frm)-5)
namespace Savionic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

		enum nBase
        {
			// theys are the pointers for MS that HT hooks to
            CharBase = 0x00CBDBDC, //(AoB: 8b ? ? ? ? 00 50 e8 ? ? ? 00 5e 83)
            ItemBase = 0x00CC0138, //(AoB: 89 0d ? ? ? 00 eb ? 89 3d ? ? ? 00 8d 4e)
            MonsterBase = 0x00CBDC40, //(AoB: 8b ? ? ? ? 00 50 e8 ? ? ? ff 85 ? 74 ? 8b ? ? 8b )
            PeopleBase = 0x00CBDC3C, //(AoB: 8b 0d ? ? ? ? 50 e8 ? ? ? 00 8b f8 85 ff 0f 84 ? ? ? ? 39 af ? ? ? ? 0f 85)
            InfoBase = 0x00CBE2C8, //(AoB: 8b ? ? ? ? 00 53 e8 ? ? ? 00 8b ? ? ? c7)
            MouseBase = 0x00CBE0A8, //(AoB: 8b 0d ? ? ? ? 74 ? 83 b9 ? ? ? ? 00 74 ? c7 44 24)
            ServerBase = 0x00CB94F0, //(AoB: 8b ? ? ? ? 00 a1 ? ? ? 00 8d ? ? ? 51)
            PortalBase = 0x00CBB584, //8B ? ? ? ? 00 85 ? 74 ? E8 ? ? ? 00 8B ? ? ? 8B
            GUIInfoBase = 0x00CBDF4C, //(AoB: 8b 0d ? ? ? ? 52 6a 12 56)
			/*Alert*/SettingBase = 0x00CBDC34, // a1 ? ? ? 00 83 b8 ? 00 00 00 00 56
			TeleBase = 0x00CB94F0, // 83 be ? ? 00 00 00 89 44 ? ? 0f 84 [Scroll up]
			LevelExpBase = 0x00CCFCD4,
			QuickSlotBase = 0x00CBDF4C,//(AoB: 8b 0d ? ? ? ? 52 6a 12 56)
			NameBase = 0x00CC8414,
			
        };
         enum iOffset
        {
			// Here are maplestorys offsets
            Breath = 0x63c, //(AoB: 83 b8 ? ? ? ? 00 7e ? 6a 00 6a 00 6a 00 6a 00)
            PID = 0x1948, //(AoB: 8b 87 ? ? ? ? 3d ? ? ? ? 7e ? 05 ? ? ? ff)
            KB = 0x214, //(AoB: 8d 8c 24 ? ? 00 00 68 ? ? ? 00 51 e8 ? ? ? ff 83 c4 08 3b c6 7d ? 50 e8 ? ? ? 00 56 56 8d 94 24 ? ? 00 00 52 8d 84 24 ? ? 00 00 50 8d 8c 24 ? 00 00 00 68 ? ? 00 00 51 c6 84 24 ? ? 00 00 07)
            KBx = 0x220, //(AoB: 8d 84 24 ? ? 00 00 50 8d 8c 24 ? 00 00 00 68 ? ? 00 00 51 c6 84 24 ? ? 00 00 07)
            KBy = 0x228, // (AoB: 8d 8c 24 ? ? ? ? 68 ? ? ? 00 51 e8 ? ? ? ff 83 c4 08 85 c0 7d ? 50 e8 ? ? ? 00 8d 94 24 ? ? ? ? 52 c6 84 24 ? ? ? ? 25 ff d6)
            ComboCount = 0x480C, //(AoB: 8b 9f ? ? 00 00 68 ? ? ? 01 e8 ? ? ? 00 83 C4 04)
            AttackCount = 0x3C1C, //(AoB: 89 be ? ? ? ? c7 86 ? ? ? ? 64 00 00 00 89)
			Charx = 0x46FC, //89 8B ? ? 00 00 8B 50 ? 89 93 ? ? 00 00 8B 35
            Chary = 0x4700, //89 93 ? ? 00 00 8B 35 ? ? ? 00 A1
			Buffcount = 0x3C2C, //(AoB: 89 be ? ? 00 00 c7 86 ? ? 00 00 14 00 00 00)
		    Animation = 0x640, //(AoB: 8b 88 ? ? ? ? 83 e1 fe 83 f9 12 0f 84)
            MapID = 0xCD4, //(AoB: 8b 8f ? ? ? ? 50 51 8b 0d ? ? ? ? 8d)
            Mapx = 0xB48,
            Mapy = 0xB4C,
            MobCount = 0x24, //(AoB: 8d 44 24 ? 50 8b ce ff d2 8b 48 ? 8b 10 6a 00 51 52)
			ItemCount = 0x14, //(AoB: 8b 4c 24 ? 83 c1 f8 83 f9 50)
            PeopleCount = 0x18, //(AoB: 8b 76 ? 85 f6 7c ? 83 fe 03 7d ? 8b)
            MouseAnim = 0x9c8, //(AoB: 83 b9 ? ? ?	 ? 00 74 ? c7 44 24)
            MouseLoc = 0x978, //(AoB: 8b b1 ? ? ? ? 85 f6 75 ? 68 ? ? ? ? e8 ? ? ? 00 8b 4c 24 ? 8b 06 8b 90 ? ? ? ? f7 d9)
            Mousex = 0x8C,// (AoB: 8b 88 ? ? ? ? 6a ff 57 83 c5 fe 55)
            Mousey = 0x88, //(AoB: 8d 88 ? ? ? ? 3b f1 75 ? 8b 0d ? ? ? ? e8)
            Tubi = 0x20b8, //(AoB: 83 be ? ? ? ? 00 75 ? 83 7c 24 0c 00)
            World = 0x205c, //(AoB: 8b 8f ? ? ? ? 8b 00 51 50 6a 00 8b ce c7 44 24 ? 01 00 00 00 e8)
            Channel = 0x2060, //(AoB: 8b 8f ? ? ? ? 8b 00 51 50 6a 00 8b ce c7 44 24 ? 02)
            PortalCount = 0x18, //89 5C 24 ? E8 ? ? ? ?
            HP = 0x1838, //(AoB: 89 86 ? ? ? ? 89 86 ? ? ? ? ff 15 ? ? ? ? 8d)
            MP = 0x183C, //(AoB: 89 86 ? ? ? ? ff 15 ? ? ? ? 8d 8e ? ? ? ? 89)
			AlertMP = 0x93,
			AlertHP = 0x8F,
			pLvl = 0x1DA4,
            pCurEXP = 0x1D9C,
			pMaxEXP = 0x1DA0,
			Tele = 0x3B94, // 83 be ? ? 00 00 00 89 44 ? ? 0f 84
			TeleX = 0x3B9C, //(AoB: 8B 8E ? ? ? ? 53 55 57 8D)
			TeleY = 0x3BA0, //(AoB: 8B 86 ? ? 00 00 8B 8E) (x+4);
			Morph = 0x5d0, // 83 bc 31 ? ? 00 00 00 8d 84 31 ? ? 00 00 0f 85 ? ? 00 00
			MobShort1 = 0x0028,
			MobShort2 = 0x0004,
			MobShort3 = 0x010c,
			MobShort4 = 0x0024,
			MobXShort = 0x0058,
			MobYShort = 0x005C,
			QSInsert = 0x18EC,
			QSHome = 0x18F8,
			QSPgUp = 0x1904,
			QSDel = 0x191C,
			QSEnd = 0x1928,
			QSPgDwn = 0x1934,
			QSShift = 0x18E0,
			QSCtrl = 0x1910,
			NameOffset = 0x4,
        }; 
 //IGN:CHAR* IGNText = ((CHAR*)00CC741C + 4);
	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label23;
	protected: 
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label11;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form4::typeid));
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(67, 154);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(58, 13);
			this->label23->TabIndex = 45;
			this->label23->Text = L"Channel: 0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(125, 95);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(79, 13);
			this->label12->TabIndex = 44;
			this->label12->Text = L"Char XY: 00,00";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(125, 43);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 13);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Monsters: 0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(125, 56);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 13);
			this->label14->TabIndex = 42;
			this->label14->Text = L"Mob XY: 00,00";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(125, 17);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 13);
			this->label15->TabIndex = 41;
			this->label15->Text = L"People: 0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(125, 30);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(44, 13);
			this->label16->TabIndex = 40;
			this->label16->Text = L"Items: 0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(125, 82);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(89, 13);
			this->label17->TabIndex = 39;
			this->label17->Text = L"Mouse XY: 00,00";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(125, 69);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(69, 13);
			this->label18->TabIndex = 38;
			this->label18->Text = L"Mouse Ani: 0";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form4::timer1_Tick);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(6, 108);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(38, 13);
			this->label19->TabIndex = 37;
			this->label19->Text = L"Tubi: 0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(125, 108);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(51, 13);
			this->label20->TabIndex = 36;
			this->label20->Text = L"Portals: 0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(67, 141);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(45, 13);
			this->label22->TabIndex = 34;
			this->label22->Text = L"World: \?";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(67, 167);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(102, 13);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Map ID: 000000000";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(6, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Combo: 0000";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(6, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 13);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Attacks: 000";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(6, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Animation: 0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(6, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"PID: 00000000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(6, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Breath: 0000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(6, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 24;
			this->label2->Text = L"MP:  0000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(6, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"HP:  0000";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(1, -1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(265, 189);
			this->groupBox1->TabIndex = 46;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pointers && Offset Information";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form4::groupBox1_Enter);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(196, 141);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 13);
			this->label8->TabIndex = 46;
			this->label8->Text = L"EXP:  0000";
			this->label8->Visible = false;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(270, 189);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"Form4";
			this->Text = L"Savionic FINAL - Pointer and Offset Information";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form4::Form4_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);  
#pragma endregion
		//form 4 load
private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Show();
}
		//form 4 closing
private: System::Void Form4_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		this->Hide();
		e->Cancel = true; // this cancels the close event.
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
