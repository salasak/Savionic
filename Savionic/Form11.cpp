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
#include "Form11.h"
#include <Windows.h>
#include <string>
#include <time.h>
#include <tchar.h>
#include <stdio.h>
#include <algorithm>

using namespace Savionic;
using namespace std;

extern bool msSendPacket(string str);
extern void StringToChar(String^ str, char* buffer);
/**************************
PACKET SENDER #1
***************************/
int spamDelay1 = 300;

//Packet Spam
void Form11::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
{
		
		char packet[2048]; 
		StringToChar(this->textBox1->Text, packet);
		msSendPacket(packet);
}
//Packet Spam
void Form11::button45_Click(System::Object^  sender, System::EventArgs^  e)
{
	spamDelay1 = Convert::ToInt32(this->textBox2->Text);
	if(this->button45->Text == "Start Spam")
	{
		this->button45->Text = "Stop Spam";
		this->timer1->Interval = spamDelay1;
		this->timer1->Enabled = true;
	}
	else //If Text = "Stop Spam"
	{
		this->button45->Text = "Start Spam";
		this->timer1->Enabled = false;
	}
}
//Send Packet
void Form11::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	char packet[2048]; 
	StringToChar(this->textBox1->Text, packet);
	msSendPacket(packet);
}




/**************************
PACKET SENDER #2
***************************/
int spamDelay2 = 300;

//Packet Spam
void Form11::timer2_Tick(System::Object^  sender, System::EventArgs^  e)
{
		char packet[2048]; 
		StringToChar(this->textBox4->Text, packet);
		msSendPacket(packet);
}
//Packet Spam
void Form11::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	spamDelay2 = Convert::ToInt32(this->textBox3->Text);
	if(this->button2->Text == "Start Spam")
	{
		this->button2->Text = "Stop Spam";
		this->timer2->Interval = spamDelay2;
		this->timer2->Enabled = true;
	}
	else //If Text = "Stop Spam"
	{
		this->button2->Text = "Start Spam";
		this->timer2->Enabled = false;
	}
}
//Send Packet
void Form11::button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	char packet[2048]; 
	StringToChar(this->textBox4->Text, packet);
	msSendPacket(packet);
}




/**************************
PACKET SENDER #3
***************************/
int spamDelay3 = 300;

//Packet Spam
void Form11::timer3_Tick(System::Object^  sender, System::EventArgs^  e)
{

		char packet[2048]; 
		StringToChar(this->textBox6->Text, packet);
		msSendPacket(packet);
}
//Packet Spam
void Form11::button4_Click(System::Object^  sender, System::EventArgs^  e)
{
		spamDelay3 = Convert::ToInt32(this->textBox5->Text);
	if(this->button4->Text == "Start Spam")
	{
		this->button4->Text = "Stop Spam";
		this->timer3->Interval = spamDelay3;
		this->timer3->Enabled = true;
	}
	else //If Text = "Stop Spam"
	{
		this->button4->Text = "Start Spam";
		this->timer3->Enabled = false;
	}
}
//Send Packet
void Form11::button5_Click(System::Object^  sender, System::EventArgs^  e)
{

	char packet[2048]; 
	StringToChar(this->textBox6->Text, packet);
	msSendPacket(packet);
}





/**************************
PACKET SENDER #4
***************************/
int spamDelay4 = 300;
//Packet Spam
void Form11::timer4_Tick(System::Object^  sender, System::EventArgs^  e)
{

		char packet[2048]; 
		StringToChar(this->textBox8->Text, packet);
		msSendPacket(packet);
}
//Packet Spam
void Form11::button6_Click(System::Object^  sender, System::EventArgs^  e)
{
		spamDelay4 = Convert::ToInt32(this->textBox7->Text);	
	if(this->button6->Text == "Start Spam")
	{
		this->button6->Text = "Stop Spam";
		this->timer4->Interval = spamDelay4;
		this->timer4->Enabled = true;
	}
	else //If Text = "Stop Spam"
	{
		this->button6->Text = "Start Spam";
		this->timer4->Enabled = false;
	}
}
//Send Packet
void Form11::button7_Click(System::Object^  sender, System::EventArgs^  e)
{	

	char packet[2048]; 
	StringToChar(this->textBox8->Text, packet);
	msSendPacket(packet);
}



/**************************
PACKET SENDER #5
***************************/
int spamDelay5 = 300;

//Packet Spam
void Form11::timer5_Tick(System::Object^  sender, System::EventArgs^  e)
{
		char packet[2048]; 
		StringToChar(this->textBox10->Text, packet);
		msSendPacket(packet);
}
//Packet Spam
void Form11::button8_Click(System::Object^  sender, System::EventArgs^  e)
{
		spamDelay5 = Convert::ToInt32(this->textBox9->Text);
	if(this->button8->Text == "Start Spam")
	{
		this->button8->Text = "Stop Spam";
		this->timer5->Interval = spamDelay5;
		this->timer5->Enabled = true;
	}
	else //If Text = "Stop Spam"
	{
		this->button8->Text = "Start Spam";
		this->timer5->Enabled = false;
	}
}
//Send Packet
void Form11::button9_Click(System::Object^  sender, System::EventArgs^  e)
{
	char packet[2048]; 
	StringToChar(this->textBox10->Text, packet);
	msSendPacket(packet);
}
