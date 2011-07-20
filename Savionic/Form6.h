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
#include "Form4.h" // Stat Information
#include "Form11.h"
#include <string>
#include <tchar.h>
#include <stdio.h>
#include <time.h>

#pragma once

namespace Savionic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Form6
	/// </summary>
				
	public ref class Form6 : public System::Windows::Forms::Form
	{
					private:
		Form11 ^myForm11;
	public:
		Form6(void)
		{
			InitializeComponent();
			myForm11 = gcnew Form11;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button21;

	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;

	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button23;

	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::TextBox^  textBox3;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form6::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button46);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button45);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(3, 419);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(276, 111);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Packet Sender";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(97, 85);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(172, 18);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"No packet has been sent yet, dude!";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form6::textBox4_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Last packet sent:";
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button46->ForeColor = System::Drawing::Color::Black;
			this->button46->Location = System::Drawing::Point(7, 63);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(265, 20);
			this->button46->TabIndex = 6;
			this->button46->Text = L"Multiple Line Packet Sender";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &Form6::button46_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(241, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 12);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ms";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(199, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 18);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"300";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form6::textBox2_TextChanged);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(100, 37);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(90, 25);
			this->button45->TabIndex = 3;
			this->button45->Text = L"Start Spam";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Form6::button45_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(5, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 18);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"6D 00 F5 1A 99 08 0A 00 00 00";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(6, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Send Packet";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form6::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(5, 71);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 20);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Meso 10";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form6::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(71, 71);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 20);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Meso 1000";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form6::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(203, 71);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 20);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Meso 50000";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form6::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button49);
			this->groupBox2->Controls->Add(this->button47);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(3, 58);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(276, 117);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Drop Packets";
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button49->ForeColor = System::Drawing::Color::Black;
			this->button49->Location = System::Drawing::Point(6, 91);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(146, 20);
			this->button49->TabIndex = 7;
			this->button49->Text = L"Drop Custom # of Mesos:";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &Form6::button49_Click);
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button47->ForeColor = System::Drawing::Color::Black;
			this->button47->Location = System::Drawing::Point(5, 52);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(265, 20);
			this->button47->TabIndex = 13;
			this->button47->Text = L"Drop All Equipment!";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &Form6::button47_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(180, 92);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(66, 18);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"50000";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(203, 33);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 20);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Overalls";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form6::button6_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(137, 71);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 20);
			this->button14->TabIndex = 5;
			this->button14->Text = L"Meso 10000";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form6::button14_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(5, 33);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 20);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Cape";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form6::button13_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(137, 14);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(67, 20);
			this->button12->TabIndex = 11;
			this->button12->Text = L"Pants";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form6::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(137, 33);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(67, 20);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Pendant";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form6::button11_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(71, 33);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(67, 20);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Gloves";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form6::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(203, 14);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 20);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Hat";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form6::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(71, 14);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 20);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Shoes";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form6::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(5, 14);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 20);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Weapon";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form6::button7_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->button22);
			this->groupBox3->Controls->Add(this->button21);
			this->groupBox3->Controls->Add(this->button19);
			this->groupBox3->Controls->Add(this->button18);
			this->groupBox3->Controls->Add(this->button17);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(4, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(275, 56);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Fun Packets";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(179, 16);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(84, 17);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Auto Revive";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox1_CheckedChanged);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(136, 33);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(132, 20);
			this->button22->TabIndex = 7;
			this->button22->Text = L"Revive";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form6::button22_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(6, 33);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(131, 20);
			this->button21->TabIndex = 6;
			this->button21->Text = L"Die";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form6::button21_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(5, 14);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(62, 20);
			this->button19->TabIndex = 4;
			this->button19->Text = L"Crazy Skull";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form6::button19_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(66, 14);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(54, 20);
			this->button18->TabIndex = 3;
			this->button18->Text = L"Wanted!";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form6::button18_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(119, 14);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(56, 20);
			this->button17->TabIndex = 2;
			this->button17->Text = L"Electricity";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form6::button17_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(5, 15);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(265, 20);
			this->button15->TabIndex = 0;
			this->button15->Text = L"Mushy Timer Reset";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form6::button15_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button48);
			this->groupBox4->Controls->Add(this->button16);
			this->groupBox4->Controls->Add(this->button39);
			this->groupBox4->Controls->Add(this->button40);
			this->groupBox4->Controls->Add(this->button41);
			this->groupBox4->Controls->Add(this->button38);
			this->groupBox4->Controls->Add(this->button37);
			this->groupBox4->Controls->Add(this->button36);
			this->groupBox4->Controls->Add(this->button35);
			this->groupBox4->Controls->Add(this->button34);
			this->groupBox4->Controls->Add(this->button33);
			this->groupBox4->Controls->Add(this->button32);
			this->groupBox4->Controls->Add(this->button31);
			this->groupBox4->Controls->Add(this->button30);
			this->groupBox4->Controls->Add(this->button29);
			this->groupBox4->Controls->Add(this->button28);
			this->groupBox4->Controls->Add(this->button27);
			this->groupBox4->Controls->Add(this->button26);
			this->groupBox4->Controls->Add(this->button25);
			this->groupBox4->Controls->Add(this->button24);
			this->groupBox4->Controls->Add(this->button23);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(3, 281);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(276, 132);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Teleport Packets (Dimensional Portal)";
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button48->ForeColor = System::Drawing::Color::Black;
			this->button48->Location = System::Drawing::Point(6, 109);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(264, 20);
			this->button48->TabIndex = 20;
			this->button48->Text = L"Spinel Map [No dying] (World Travel)";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &Form6::button48_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(71, 14);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(67, 20);
			this->button16->TabIndex = 19;
			this->button16->Text = L"Astaroth PQ";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form6::button16_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(71, 33);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(67, 20);
			this->button39->TabIndex = 18;
			this->button39->Text = L"Dragon PQ";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &Form6::button39_Click);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(137, 71);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(67, 20);
			this->button40->TabIndex = 17;
			this->button40->Text = L"Sea of Fog PQ";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &Form6::button40_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(71, 52);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(67, 20);
			this->button41->TabIndex = 16;
			this->button41->Text = L"Hoblin PQ";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &Form6::button41_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(5, 52);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(67, 20);
			this->button38->TabIndex = 15;
			this->button38->Text = L"Henesys PQ";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(5, 90);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(67, 20);
			this->button37->TabIndex = 14;
			this->button37->Text = L"Happyville";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &Form6::button37_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(137, 52);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(67, 20);
			this->button36->TabIndex = 13;
			this->button36->Text = L"Kerning PQ";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(203, 33);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(67, 20);
			this->button35->TabIndex = 12;
			this->button35->Text = L"Ghost Ship PQ";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &Form6::button35_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(5, 14);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(67, 20);
			this->button34->TabIndex = 11;
			this->button34->Text = L"Ariant PQ";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Form6::button34_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(5, 33);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(67, 20);
			this->button33->TabIndex = 10;
			this->button33->Text = L"Dojo";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Form6::button33_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(5, 71);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(67, 20);
			this->button32->TabIndex = 9;
			this->button32->Text = L"Orbis PQ";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Form6::button32_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(203, 90);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(67, 20);
			this->button31->TabIndex = 8;
			this->button31->Text = L"MTS";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Form6::button31_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(137, 90);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(67, 20);
			this->button30->TabIndex = 7;
			this->button30->Text = L"Cash Shop";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form6::button30_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(137, 14);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(67, 20);
			this->button29->TabIndex = 6;
			this->button29->Text = L"CPQ 1";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form6::button29_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(71, 90);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(67, 20);
			this->button28->TabIndex = 5;
			this->button28->Text = L"Perion FM";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form6::button28_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(203, 52);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(67, 20);
			this->button27->TabIndex = 4;
			this->button27->Text = L"Ludi PQ";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form6::button27_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(137, 33);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(67, 20);
			this->button26->TabIndex = 3;
			this->button26->Text = L"Ellinia PQ";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form6::button26_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(71, 71);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(67, 20);
			this->button25->TabIndex = 2;
			this->button25->Text = L"PyPQ";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(203, 14);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(67, 20);
			this->button24->TabIndex = 1;
			this->button24->Text = L"CPQ 2";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form6::button24_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(203, 71);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(67, 20);
			this->button23->TabIndex = 0;
			this->button23->Text = L"Subway PQ";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button20);
			this->groupBox6->Controls->Add(this->button2);
			this->groupBox6->Controls->Add(this->button15);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox6->ForeColor = System::Drawing::Color::White;
			this->groupBox6->Location = System::Drawing::Point(3, 177);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(276, 59);
			this->groupBox6->TabIndex = 9;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Merchanting Packets";
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(137, 34);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(133, 20);
			this->button20->TabIndex = 2;
			this->button20->Text = L"Homley Coffeehouse Split";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form6::button20_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(6, 34);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 20);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Orange Mushie Split";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form6::button2_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button42);
			this->groupBox7->Controls->Add(this->button43);
			this->groupBox7->Controls->Add(this->button44);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox7->ForeColor = System::Drawing::Color::White;
			this->groupBox7->Location = System::Drawing::Point(3, 238);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(276, 41);
			this->groupBox7->TabIndex = 10;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Battle Mage Packets (Level 20)";
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(93, 15);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(89, 20);
			this->button42->TabIndex = 13;
			this->button42->Text = L"Blue Aura";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &Form6::button42_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(5, 15);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(89, 20);
			this->button43->TabIndex = 12;
			this->button43->Text = L"Yellow Aura";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Form6::button43_Click);
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(181, 15);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(89, 20);
			this->button44->TabIndex = 11;
			this->button44->Text = L"Dark Aura";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Form6::button44_Click);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form6::timer2_Tick);
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(288, 531);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form6";
			this->RightToLeftLayout = true;
			this->Text = L"Savionic FINAL - Packets!";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form6::Form6_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form6::Form6_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e){ }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e); // Send Packet
	private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e); // Start/Stop Spam
			 // Drop Packets
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e); // Meso 10
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e); // Meso 1000
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e); // Meso 50000
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e); // Meso 10000
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e); // Weapon
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e); // Shoes
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e); // Pants
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e); // Hat
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e); // Cape
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e); // Gloves
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e); // Pendant
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e); // Overalls
		 // Fun Packets
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e); // Crazy Skull
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e); // Wanted
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e); // Electricity
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e); // Mushy Reset
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e); // Die
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e); // Revive
		 // Teleport Packets
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e); // Subway PQ
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e); // CPQ 2
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e); // PyPQ
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e); // Ellinia PQ
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e); // Ludi PQ
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e); // Perion FM
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e); // CPQ 1
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e); // Cash Shop
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e); // MTS
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e); // Orbis PQ
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e); // Dojo
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e); // Ariant PQ
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e); // Ghost Ship PQ
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e); // Kerning PQ
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e); // Happyville
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e); // Moon Bunny
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e); // Free Store Permit
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e); // Hoblin PQ
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e); // Sea of Fog PQ
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e); // Dragon PQ
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e); // Astaroth PQ
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e); // Yellow Aura
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e); // Blue Aura
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e); // Dark Aura
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e); // Revive upon Death
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e);
		 		//form 6 load
private: System::Void Form6_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Show();
}
		//form 6 closing
private: System::Void Form6_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		this->Hide();
		e->Cancel = true; // this cancels the close event.
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
