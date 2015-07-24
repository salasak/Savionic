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
#include "Form12.h"
#include "functions.h"
#include <Windows.h>
#include <string>
#include <time.h>
#include <tchar.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace Savionic;
using namespace std;


//Declarations
vector<unsigned long> Items;
BYTE bbMesoOnly=0, bbExclusive=0;
int filteraddy = 0000000;
unsigned long ulItemFilter = 0x0051C7AD; // 8b cf 89 46 ? e8 ? ? ? ? 8b cf 89 46 ? e8
//89 46 34 E8 ? ? ? FF ? ? 89 46 24 (-2)
unsigned long FilterRet = ulItemFilter+5;

void __declspec(naked) ItemFilterCave() {
	__asm {
			push ebx
		mov ebx, Items

		normal_filter:
		cmp [ebx],eax
		je FilterIt
		cmp dword ptr [ebx],0x00
		je EndFilter
		add ebx, 0x4
		jmp normal_filter

		FilterIt: 
		xor eax,eax  

		EndFilter:
		pop ebx
		mov ecx,edi
		mov [esi+0x34],eax
		jmp dword ptr [FilterRet]
	}
}

void Form12::ItemFilterAddItem(String^ ItemID, String^ ItemName)  
{  
	ListViewItem^ lvi = gcnew ListViewItem( gcnew array<String^> { ItemID }, 0 ); // Adds the Item ID to the first collumn of the List View  
	lvi->SubItems->Add( ItemName ); // Adds the Item Name to the first subcollumn of the List View  
	listView1->Items->AddRange( gcnew array<ListViewItem^> { lvi } ); // Addds the range to the List View  
	Items.push_back( 0 ); // Sets 0 to the end of the list  
}  
//Usage:
//ItemFilterAddItem(textBox1->Text, textBox2->Text,ListV);
//Adds the inputted Item ID and Item Name into the List View
void Form12::ItemFilterRemoveItem()
{
	for (int i = 0; i < listView1->Items->Count; i++ )
	{
		if(listView1->Items[i]->Selected){

			listView1->Items[i]->Remove();
			Items.erase(Items.begin()+i); 
			i--; 
		}
	}
	Items.push_back(0);
}
//Usage:
//ItemFilterRemoveItem(ListV);
//Removes the selected ListView item.
void Form12::ItemFilterClearAll()
{
		for (int i = 0; i < listView1->Items->Count; i++ )
		{  
			listView1->Items[i]->Remove(); 
			Items.erase(Items.begin()+i); 
			i--;  
		} 
	Items.push_back(0); 
}
//Usage:
//ItemFilterClearAll(ListV); 
//Clears the entire ListView list.
String^  Form12::ItemFilter(String^ str, bool OnOff)
{
	if(OnOff)
	{
		Jump(ulItemFilter, ItemFilterCave, 0);
		if(Items[Items.size()-1] != 0) Items.push_back(0);
		str = "Disable Item Filter"; 
	}
	else
	{
		WriteMemory(ulItemFilter, 5, 0x8b, 0xcf, 0x89, 0x46, 0x34);
		str = "Enable Item Filter";
	}
	return str;
}

void EnableItemFilter(bool OnOff)
{
	if(OnOff)
	{
		Jump(ulItemFilter, ItemFilterCave, 0);
		if(Items[Items.size()-1] != 0) Items.push_back(0);
	}
	else
	{
		WriteMemory(ulItemFilter, 5, 0x8b, 0xcf, 0x89, 0x46, 0x34);
	}
}
//Usage:
//ItemFilter(checkBox1->Text, true);
//Sets the checkBox's text and enables/disables the Item Filter.

void WhiteListOnly()
{
	bbExclusive = 1;
}
//Usage:
//WhiteListOnly();
//Sets the Item Filter to allow only the items in the ListViewlist.

void BlackListOnly()
{
	bbExclusive = 0;
}
//Usage:
//BlackListOnly();
//Sets the Item Filter to block the items on the ListViewlist.
void MesosOnly()
{
	bbMesoOnly = 1;
}
//Usage:
//MesosOnly();
//Sets the Item Filter to block everything besides mesos.


//Enable Item Filter
void Form12::checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(checkBox2->Checked)
	{
		Jump(ulItemFilter, ItemFilterCave, 0);
		if(Items[Items.size()-1] != 0) Items.push_back(0);
	}
	else
	{
		WriteMemory(ulItemFilter, 5, 0x8b, 0xcf, 0x89, 0x46, 0x34);
	}
/*	if(radioButton1->Checked)
	{
		WhiteListOnly();
	}
	if(radioButton2->Checked)
	{
		BlackListOnly();
	}
	if(radioButton3->Checked)
	{
		MesosOnly();
	}*/
}
//Add button
void Form12::button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	ItemFilterAddItem(textBox5->Text, textBox10->Text);
}
//Remove button
void Form12::button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	ItemFilterRemoveItem();
}
//Clear all
void Form12::button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	ItemFilterClearAll();
}
#pragma endregion