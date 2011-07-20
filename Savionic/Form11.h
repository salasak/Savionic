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
#include <string>
#include <tchar.h>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#pragma once

namespace Savionic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form11
	/// </summary>
	public ref class Form11 : public System::Windows::Forms::Form
	{
	public:
		Form11(void)
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
		~Form11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form11::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button45);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(276, 257);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Packet Sender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(240, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 12);
			this->label5->TabIndex = 25;
			this->label5->Text = L"ms";
			this->label5->Click += gcnew System::EventHandler(this, &Form11::label5_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(198, 229);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(39, 18);
			this->textBox9->TabIndex = 24;
			this->textBox9->Text = L"300";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form11::textBox9_TextChanged);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(99, 229);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 20);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Start Spam";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form11::button8_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(5, 205);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(264, 18);
			this->textBox10->TabIndex = 22;
			this->textBox10->Text = L"Packet goes here #5";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form11::textBox10_TextChanged);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(5, 229);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 20);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Send Packet";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form11::button9_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(240, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 12);
			this->label4->TabIndex = 20;
			this->label4->Text = L"ms";
			this->label4->Click += gcnew System::EventHandler(this, &Form11::label4_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(198, 181);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(39, 18);
			this->textBox7->TabIndex = 19;
			this->textBox7->Text = L"300";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form11::textBox7_TextChanged);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(99, 181);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 20);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Start Spam";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form11::button6_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(5, 157);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(264, 18);
			this->textBox8->TabIndex = 17;
			this->textBox8->Text = L"Packet goes here #4";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form11::textBox8_TextChanged);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(5, 181);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 20);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Send Packet";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form11::button7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(240, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 12);
			this->label3->TabIndex = 15;
			this->label3->Text = L"ms";
			this->label3->Click += gcnew System::EventHandler(this, &Form11::label3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(198, 133);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(39, 18);
			this->textBox5->TabIndex = 14;
			this->textBox5->Text = L"300";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form11::textBox5_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(99, 133);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 20);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Start Spam";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form11::button4_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(5, 109);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 18);
			this->textBox6->TabIndex = 12;
			this->textBox6->Text = L"Packet goes here #3";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form11::textBox6_TextChanged);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(5, 133);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 20);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Send Packet";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form11::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(240, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 12);
			this->label2->TabIndex = 10;
			this->label2->Text = L"ms";
			this->label2->Click += gcnew System::EventHandler(this, &Form11::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(198, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(39, 18);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"300";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form11::textBox3_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(99, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 20);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Start Spam";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form11::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(5, 61);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(264, 18);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"Packet goes here #2";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form11::textBox4_TextChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(5, 85);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 20);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Send Packet";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form11::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(240, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 12);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ms";
			this->label1->Click += gcnew System::EventHandler(this, &Form11::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(198, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 18);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"300";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form11::textBox2_TextChanged);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(99, 37);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(90, 20);
			this->button45->TabIndex = 3;
			this->button45->Text = L"Start Spam";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Form11::button45_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(5, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 18);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Packet goes here #1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form11::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(5, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 20);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Send Packet";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form11::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form11::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form11::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &Form11::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Tick += gcnew System::EventHandler(this, &Form11::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Tick += gcnew System::EventHandler(this, &Form11::timer5_Tick);
			// 
			// Form11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(286, 268);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form11";
			this->Text = L"Multi-Line Packet Sender!";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form11::Form11_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form11::Form11_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e){
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e){
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e){
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e){
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e){
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e){
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e){
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e){
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e){
		 }
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e){
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

		 		 		//form 11 load
private: System::Void Form11_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Show();
}
		//form 11 closing
private: System::Void Form11_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		this->Hide();
		e->Cancel = true; // this cancels the close event.
}
};
}
