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
v#include "Form9.h"
#include "Form4.h"
#include "functions.h"
using namespace Savionic;


#define dMapID (ReadPointer((ULONG_PTR*)InfoBase, MapID))

void Form9::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
{
	if((dMapID) != 0)
	{
		pictureBox1->ImageLocation = "http://mapletip.com/images/new-maps/" + dMapID.ToString() + ".png";
		this->Width = (pictureBox1->Width + 25);
		this->Height = (pictureBox1->Height + 50);
	}
}

/*
Outdated.
minimap info base: 00C68E40 // 8b ? ? ? ? 00 53 e8 ? ? ? 00 8b ? ? ? c7 
	0024 - horizontal size
	0028 - vertical size
	0AFC - minimap state
	0B3C - character x
	0B40 - character y
	0B6C - npc count
	0C84 - map id

	private void timer1_Tick(object sender, EventArgs e)
{
    if (<Module>.MapID != 0 && <Module>.MapID != <Module>.CurrentPicMap)
    {
        <Module>.CurrentPicMap = <Module>.MapID;
        int mapID = <Module>.MapID;
        this.pictureBox1.ImageLocation = "http://mapletip.com/images/new-maps/" + mapID.ToString() + ".png";
    }
}

	*/

