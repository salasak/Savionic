/* 
     This file is part of the Savionic gMS Trainer.
    Copyright (C) 2011 Tyler Coderre <Tyler1q1q@gmail.com> 

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
#include <Windows.h>
#include "Form2.h" // Hacks
#include "Form3.h" // Injector
#include "Form5.h" // Key Information
#include "Form6.h" // Packet Sender
#include "Form8.h"
#include "Form9.h"
#include "Form10.h"
#include "Form11.h"
#include "Form12.h"
#include <string>
#include <WinUser.h>
#pragma once

namespace Savionic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

			private:
		Form2 ^myForm2; // Hacks
		Form3 ^myForm3; // Injector
		Form4 ^myForm4; // Stat Information
		Form5 ^myForm5; // Bot Information
		Form6 ^myForm6; // Packet Sender
		Form8 ^myForm8; // IRM / WH Summon
		Form9 ^myForm9; //  Mini Map test
		Form10 ^myForm10; // Misc.
		Form11 ^myForm11;
		Form12 ^myForm12;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::Button^  button8;




	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;

	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::ProgressBar^  progressBar1;
private: System::Windows::Forms::ProgressBar^  progressBar2;
private: System::Windows::Forms::ProgressBar^  progressBar3;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::CheckBox^  checkBox11;



	private: System::Windows::Forms::Button^  button9;


	public:
		Form1(void)
		{
			InitializeComponent();
			myForm2 = gcnew Form2; // Hacks
			myForm3 = gcnew Form3; // Injector
			myForm4 = gcnew Form4; // Stat information
			myForm5 = gcnew Form5; // Bot Information
			myForm6 = gcnew Form6; // Packet Sender
			myForm8 = gcnew Form8; // WH / IRM
			myForm9 = gcnew Form9; // Mini Map test
			myForm10 = gcnew Form10; // Misc. Features
			myForm11 = gcnew Form11; // 
			myForm12 = gcnew Form12; // Item Filter

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button5;


	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;






	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::LinkLabel^  linkLabel1;


	private: System::Windows::Forms::CheckBox^  checkBox8;


private: System::ComponentModel::IContainer^  components;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(8, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 22);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Hacks";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(127, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 22);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Injector";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(283, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 22);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Pointer && Offsets";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(283, 241);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 22);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Trainer Information";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->checkBox9);
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->checkBox8);
			this->groupBox1->Controls->Add(this->comboBox6);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(7, 248);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(239, 94);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Autopot (Value Based)";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label2->Location = System::Drawing::Point(3, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"AutoPot Delay:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(135, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"ms";
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(165, 67);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 20);
			this->button9->TabIndex = 33;
			this->button9->Text = L"MM";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(110, 66);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(49, 20);
			this->textBox10->TabIndex = 36;
			this->textBox10->Text = L"200";
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox9->ForeColor = System::Drawing::Color::DodgerBlue;
			this->checkBox9->Location = System::Drawing::Point(4, 42);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(85, 17);
			this->checkBox9->TabIndex = 35;
			this->checkBox9->Text = L"Mana Points";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox9_CheckedChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::Color::White;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->comboBox5->ForeColor = System::Drawing::Color::Red;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(42) {L"PGUP", L"DEL", L"HOME", L"END", L"INS", L"PGDWN", 
				L"0", L"9", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", L"K", 
				L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox5->Location = System::Drawing::Point(164, 16);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(71, 21);
			this->comboBox5->TabIndex = 34;
			this->comboBox5->Text = L"PGUP";
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox5_SelectedIndexChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox8->ForeColor = System::Drawing::Color::Red;
			this->checkBox8->Location = System::Drawing::Point(4, 19);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(88, 17);
			this->checkBox8->TabIndex = 10;
			this->checkBox8->Text = L"Health Points";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox8_CheckedChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->BackColor = System::Drawing::Color::White;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->comboBox6->ForeColor = System::Drawing::Color::DodgerBlue;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(42) {L"PGUP", L"DEL", L"HOME", L"END", L"INS", L"PGDWN", 
				L"0", L"9", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", L"K", 
				L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox6->Location = System::Drawing::Point(163, 40);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(71, 21);
			this->comboBox6->TabIndex = 33;
			this->comboBox6->Text = L"PGDWN";
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox6_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->textBox2->Location = System::Drawing::Point(112, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"250";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Red;
			this->textBox1->Location = System::Drawing::Point(113, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"500";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textBox14);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->checkBox13);
			this->groupBox2->Controls->Add(this->checkBox14);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->comboBox4);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->checkBox7);
			this->groupBox2->Controls->Add(this->checkBox6);
			this->groupBox2->Controls->Add(this->checkBox5);
			this->groupBox2->Controls->Add(this->checkBox4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(7, 348);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(239, 156);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Botting";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label15->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label15->Location = System::Drawing::Point(174, 134);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 13);
			this->label15->TabIndex = 47;
			this->label15->Text = L"Items: \?";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label14->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label14->Location = System::Drawing::Point(174, 111);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(45, 13);
			this->label14->TabIndex = 46;
			this->label14->Text = L"Mobs: \?";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::White;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::Color::Black;
			this->textBox14->Location = System::Drawing::Point(136, 131);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(32, 20);
			this->textBox14->TabIndex = 45;
			this->textBox14->Text = L"25";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::White;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox15->ForeColor = System::Drawing::Color::Black;
			this->textBox15->Location = System::Drawing::Point(136, 108);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(32, 20);
			this->textBox15->TabIndex = 44;
			this->textBox15->Text = L"5";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox13->Location = System::Drawing::Point(5, 133);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(123, 17);
			this->checkBox13->TabIndex = 43;
			this->checkBox13->Text = L"Auto Loot if Items >=";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox13_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox14->Location = System::Drawing::Point(5, 110);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(132, 17);
			this->checkBox14->TabIndex = 42;
			this->checkBox14->Text = L"Auto Attack if Mobs >=";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox14_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(139, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 41;
			this->label6->Text = L"ms";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(139, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 39;
			this->label5->Text = L"ms";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(144, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 13);
			this->label4->TabIndex = 40;
			this->label4->Text = L"s";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(144, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(12, 13);
			this->label3->TabIndex = 39;
			this->label3->Text = L"s";
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::White;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(43) {L"NUM 0", L"DEL", L"HOME", L"END", L"PGDWN", L"PGUP", 
				L"INS", L"0", L"9", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox4->Location = System::Drawing::Point(164, 82);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(71, 21);
			this->comboBox4->TabIndex = 32;
			this->comboBox4->Text = L"NUM 0";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox4_SelectedIndexChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::Black;
			this->textBox6->Location = System::Drawing::Point(114, 82);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(49, 20);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"50";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::White;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(43) {L"LEFT CTRL", L"DEL", L"HOME", L"END", L"PGDWN", 
				L"PGUP", L"INS", L"0", L"9", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", 
				L"I", L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox3->Location = System::Drawing::Point(164, 59);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(71, 21);
			this->comboBox3->TabIndex = 31;
			this->comboBox3->Text = L"CTRL";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::White;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(42) {L"HOME", L"DEL", L"END", L"PGDWN", L"PGUP", L"INS", 
				L"0", L"9", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", L"K", 
				L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox2->Location = System::Drawing::Point(164, 36);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(71, 21);
			this->comboBox2->TabIndex = 30;
			this->comboBox2->Text = L"HOME";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Black;
			this->textBox5->Location = System::Drawing::Point(114, 59);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(49, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"100";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::White;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(42) {L"DEL", L"HOME", L"END", L"PGDWN", L"PGUP", L"INS", 
				L"0", L"9", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", L"K", 
				L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox1->Location = System::Drawing::Point(164, 13);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(71, 21);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->Text = L"DEL";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(114, 36);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"100";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(114, 13);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(49, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"100";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox7->Location = System::Drawing::Point(5, 84);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(72, 17);
			this->checkBox7->TabIndex = 3;
			this->checkBox7->Text = L"Auto Loot";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox7_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox6->Location = System::Drawing::Point(5, 61);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(80, 17);
			this->checkBox6->TabIndex = 2;
			this->checkBox6->Text = L"Auto Attack";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox6_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox5->Location = System::Drawing::Point(5, 38);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(78, 17);
			this->checkBox5->TabIndex = 1;
			this->checkBox5->Text = L"Auto Skill 2";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox4->Location = System::Drawing::Point(4, 15);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(78, 17);
			this->checkBox4->TabIndex = 0;
			this->checkBox4->Text = L"Auto Skill 1";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->checkBox10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(8, 510);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(239, 106);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"AutoCC";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label13->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label13->Location = System::Drawing::Point(152, 83);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(35, 13);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Items:";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::White;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::Black;
			this->textBox11->Location = System::Drawing::Point(195, 80);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(40, 20);
			this->textBox11->TabIndex = 15;
			this->textBox11->Text = L"100";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Form1::textBox11_TextChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox10->Location = System::Drawing::Point(5, 82);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(94, 17);
			this->checkBox10->TabIndex = 14;
			this->checkBox10->Text = L"Item Count CC";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox10_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label9->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label9->Location = System::Drawing::Point(139, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Seconds:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label8->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label8->Location = System::Drawing::Point(143, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Attacks:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label7->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label7->Location = System::Drawing::Point(144, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"People:";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::Black;
			this->textBox9->Location = System::Drawing::Point(195, 57);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(40, 20);
			this->textBox9->TabIndex = 10;
			this->textBox9->Text = L"60";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::White;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::Black;
			this->textBox8->Location = System::Drawing::Point(195, 34);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(40, 20);
			this->textBox8->TabIndex = 9;
			this->textBox8->Text = L"90";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::Black;
			this->textBox7->Location = System::Drawing::Point(195, 11);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(40, 20);
			this->textBox7->TabIndex = 8;
			this->textBox7->Text = L"0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox3->Location = System::Drawing::Point(5, 37);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(72, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Attack CC";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox2->Location = System::Drawing::Point(5, 60);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(70, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Timed CC";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->checkBox1->Location = System::Drawing::Point(5, 14);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(76, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"People CC";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(127, 143);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 22);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Packets!";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Verdana", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Blue;
			this->linkLabel1->Location = System::Drawing::Point(8, 619);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(105, 12);
			this->linkLabel1->TabIndex = 27;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"www.TylerCode.com";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(8, 164);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 22);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Kill MapleStory";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Verdana", 6.75F));
			this->label12->Location = System::Drawing::Point(119, 619);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(91, 12);
			this->label12->TabIndex = 30;
			this->label12->Text = L"No update found!";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click_1);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(127, 122);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 22);
			this->button8->TabIndex = 32;
			this->button8->Text = L"WH Exploits && IRM";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(8, 143);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(120, 22);
			this->button10->TabIndex = 34;
			this->button10->Text = L"Misc. Features";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(127, 164);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(120, 22);
			this->button11->TabIndex = 35;
			this->button11->Text = L"Hide MapleStory";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(73, 83);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(58, 13);
			this->label23->TabIndex = 63;
			this->label23->Text = L"Channel: 0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(73, 68);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 13);
			this->label10->TabIndex = 62;
			this->label10->Text = L"Char XY: 00,00";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(179, 16);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 13);
			this->label11->TabIndex = 61;
			this->label11->Text = L"Monsters: 0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(73, 29);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(78, 13);
			this->label16->TabIndex = 60;
			this->label16->Text = L"Mob XY: 00,00";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(179, 42);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 13);
			this->label17->TabIndex = 59;
			this->label17->Text = L"People: 0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(179, 29);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(44, 13);
			this->label18->TabIndex = 58;
			this->label18->Text = L"Items: 0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(73, 55);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(89, 13);
			this->label19->TabIndex = 57;
			this->label19->Text = L"Mouse XY: 00,00";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(73, 42);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(69, 13);
			this->label20->TabIndex = 56;
			this->label20->Text = L"Mouse Ani: 0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(179, 55);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(51, 13);
			this->label21->TabIndex = 55;
			this->label21->Text = L"Portals: 0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(3, 83);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(45, 13);
			this->label22->TabIndex = 54;
			this->label22->Text = L"World: \?";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(144, 83);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(102, 13);
			this->label24->TabIndex = 53;
			this->label24->Text = L"Map ID: 000000000";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(292, 67);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(70, 13);
			this->label25->TabIndex = 52;
			this->label25->Text = L"Combo: 0000";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(179, 68);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(59, 13);
			this->label26->TabIndex = 51;
			this->label26->Text = L"Attacks: 00";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(292, 173);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(79, 13);
			this->label28->TabIndex = 49;
			this->label28->Text = L"PID: 00000000";
			this->label28->Click += gcnew System::EventHandler(this, &Form1::label28_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(3, 68);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(68, 13);
			this->label29->TabIndex = 48;
			this->label29->Text = L"Breath: 0000";
			this->label29->Click += gcnew System::EventHandler(this, &Form1::label29_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label30->ForeColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(3, 29);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(56, 13);
			this->label30->TabIndex = 47;
			this->label30->Text = L"MP:  0000";
			this->label30->Click += gcnew System::EventHandler(this, &Form1::label30_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(3, 16);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(54, 13);
			this->label31->TabIndex = 46;
			this->label31->Text = L"HP:  0000";
			this->label31->Click += gcnew System::EventHandler(this, &Form1::label31_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkBox11);
			this->groupBox4->Controls->Add(this->label36);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->label35);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label27);
			this->groupBox4->Controls->Add(this->label29);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->label30);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->label31);
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->label26);
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(2, -1);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(252, 99);
			this->groupBox4->TabIndex = 64;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Values";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &Form1::groupBox4_Enter);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(91, 2);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(105, 17);
			this->checkBox11->TabIndex = 67;
			this->checkBox11->Text = L"Enable Stathook";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox11_CheckedChanged);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(3, 55);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(55, 13);
			this->label36->TabIndex = 64;
			this->label36->Text = L"Exp: 0000";
			this->label36->Click += gcnew System::EventHandler(this, &Form1::label36_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(3, 42);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(60, 13);
			this->label35->TabIndex = 65;
			this->label35->Text = L"Level:  000";
			this->label35->Click += gcnew System::EventHandler(this, &Form1::label35_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(73, 16);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(65, 13);
			this->label27->TabIndex = 50;
			this->label27->Text = L"Animation: 0";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(372, 131);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(31, 13);
			this->label37->TabIndex = 66;
			this->label37->Text = L"IGN: ";
			this->label37->Click += gcnew System::EventHandler(this, &Form1::label37_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(8, 122);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(120, 22);
			this->button12->TabIndex = 65;
			this->button12->Text = L"Item Filter";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(86, 212);
			this->progressBar1->Maximum = 30000;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(158, 15);
			this->progressBar1->TabIndex = 66;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(86, 192);
			this->progressBar2->Maximum = 30000;
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(158, 15);
			this->progressBar2->TabIndex = 67;
			this->progressBar2->Click += gcnew System::EventHandler(this, &Form1::progressBar2_Click);
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(117, 232);
			this->progressBar3->Maximum = 999999;
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(127, 15);
			this->progressBar3->TabIndex = 68;
			this->progressBar3->Click += gcnew System::EventHandler(this, &Form1::progressBar3_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->ForeColor = System::Drawing::Color::Yellow;
			this->label32->Location = System::Drawing::Point(8, 232);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(109, 13);
			this->label32->TabIndex = 69;
			this->label32->Text = L"EXP: [ 00.00% ]";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->ForeColor = System::Drawing::Color::Red;
			this->label33->Location = System::Drawing::Point(8, 192);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(39, 13);
			this->label33->TabIndex = 70;
			this->label33->Text = L"HP: \?";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label34->Location = System::Drawing::Point(8, 212);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(40, 13);
			this->label34->TabIndex = 71;
			this->label34->Text = L"MP: \?";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(258, 636);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->progressBar3);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Savionic gMS v98.1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);   
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e);	 
	private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e); 
	private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e); 
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e); 
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {    }
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {    }
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {    }
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {    }
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {    }
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {    }
	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {    }
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e);
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);  // Autoskill 1 drop down box
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e); // Autoskill 2 drop down box
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e); // Autoattack drop down box
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e); // Autoloot drop down box
	private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e); // HP Drop down box
	private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e); // MP Drop down box
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e); // MP AutoPot Checkbox
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e); // Item CC checkBox
	private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e){ } // Item CC Value textBox
	private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e){ } // AutoLoot Items if =>
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e); // mini map
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e); // WH summon / irm
	private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label12_Click_1(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		int  nQuit = ::MessageBox(NULL, "Are you sure you want to exit MapleStory?",  "Warning!", MB_ICONEXCLAMATION|MB_YESNO); 
		if (nQuit == IDYES)
		{
			TerminateProcess(GetCurrentProcess(), 0);
		}
	}
	private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void progressBar3_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void progressBar2_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void label37_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void label31_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void label36_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void label35_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label29_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void label28_Click(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void CheckforUpdates();
};
}
