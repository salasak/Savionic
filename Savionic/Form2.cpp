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
#include "Form2.h"
#include "Form4.h"
#include "functions.h"
#include <Windows.h>
#pragma warning(disable:4793)
using namespace Savionic;
using namespace std;

extern void ChangeChannel();
#pragma region Hack Addresses (Updated v98.0)

int 
MorphValue			= 9, 
SpawnX				= 0000,
SpawnY				= 0000,
suacount			= 50,
x					= 0, 
y					= 0,
uacount				= 50;

unsigned long	
/*gMS v98.0*/NoSkillMovm		= 0x0076019F,//Address AOB: D8 D1 DF E0 ? C4 05 7A ? DC 91 ? ? 00 00 DF [First of Two results]
/*gMS v98.0*/FlashJump			= 0x0096D79A,//Address AOB: 0F 85 ? ? ? FF 8B CE E8 ? ? ? FF 85 C0 0F 85 [First of 5 Results]
/*gMS v98.0*/SoulRush1			= 0x009CEC82,//Address AOB: 0F 85 ? ? 00 00 8B 4E ? 8D 7E ? 51 8D 57 ?
/*gMS v98.0*/SoulRush2			= 0x009CEDAE,//Address AOB: 0F 84 ? ? 00 00 8B 8E ? ? 00 00 51 8D 86 ?
/*gMS v98.0*/SoulRush3			= 0x0096BB54,//Address AOB: 0F 84 ? ? FF FF 8B CB E8 ? ? ? FF 85 C0 0F 85
/*gMS v98.0*/MechanicDash1		= 0x009CEC82,//Address AOB: 0F 85 ? ? 00 00 8B 4E ? 8D 7E ? 51 8D 57 ?
/*gMS v98.0*/MechanicDash2		= 0x009CEDAE,//Address AOB: 0F 84 ? ? 00 00 8B 8E ? ? 00 00 51 8D 86 ?
/*gMS v98.0*/MechanicDash3		= 0x0096A9A5,//Address AOB: 0F 84 ? ? 00 00 8B 46 ? 8B 50 ? 55 8B 2D ?
/*gMS v98.0*/CombatStep1		= 0x009CEC82,//Address AOB: 0F 85 ? ? 00 00 8B 4E ? 8D 7E ? 51 8D 57 ?
/*gMS v98.0*/CombatStep2		= 0x009CEDAE,//Address AOB: 0F 84 ? ? 00 00 8B 8E ? ? 00 00 51 8D 86 ?
/*gMS v98.0*/CombatStep3		= 0x0096A9A5,//Address AOB: 0F 84 ? ? 00 00 8B 46 ? 8B 50 ? 55 8B 2D ?
/*gMS v98.0*/AntiDeath			= 0x009323A1,//Address AOB: 74 ? 8B 44 24 ? 83 E0 ? 83 C8 ? EB ? 8B
/*gMS v98.0*/UnlBuff			= 0x0092D088,//Address AOB: 40 89 41 ? b8 01
/*gMS v98.0*/AranMov			= 0x0092FE5F,//Address AOB: 01 00 00 00 E8 ? ? ? ? 8D 8E ? ? ? ? 5E E9
/*gMS v98.0*/NoMobKB			= 0x00660DE6,//Address AOB: 75 ? ? e8 ? ? ? 00 83 ? ? 85
/*gMS v98.0*/EDB				= 0x00472690,//Address AOB: 8B 41 ? C3 CC CC CC CC CC CC CC CC CC CC CC CC
/*gMS v98.0*/BlockDamage		= 0x00961D14,//Address AOB: 0f 84 ? ? ? ? 6a ? 8d ? ? ? e8 ? ? ? ? c6
/*gMS v98.0*/InstantDrop1		= 0x00515F75,//Address AOB: 75 ? 2B 56 ? 81 FA ?
/*gMS v98.0*/InstantDrop2		= 0x00513C65,//Address AOB: 0D ? ? ? ? 83 C4 ? E9 ? ? ? ? DD ? ?
/*gMS v98.0*/Tornado			= 0x0092A1B8,//Address AOB: 75 ? 8B CD E8 ? ? ? ? 8B 8E
/*gMS v98.0*/SlowMob			= 0x006757C1,//Address AOB: B8 ? ? ? ? 39 41 ? 7C 31 85 D2 75 32 39
/*gMS v98.0*/RemoveAnim			= 0x00441B29,//Address AOB: 81 FE ? ? 00 00 0F 8D ? ? 00 00 85 ED 0F 84
/*gMS v98.0*/HideCS				= 0x00927E55,//Address AOB: 74 ? 33 FF 8B 83
/*gMS v98.0*/GiantRobot			= 0x00968FD7,//Address AOB: 7C ? 68 ? ? ? ? 8D ? ? ? 50 8B
/*gMS v98.0*/TankSiege			= 0x009691BA,//Address AOB: 7C ? 8B ? ? ? ? ? 8D ? ? ? 52 E8 ? ? ? ? 8B (last result)
/*gMS v98.0*/NormSiege			= 0x00968F92,//Address AOB: 7C ? 50 8B ? E8 ? ? ? ? C7
/*gMS v98.0*/EndlessFlamethrower= 0x00966E49,//Address AOB: 89 ? ? ? 00 00 8B ? ? ? 64 ? ? ? ? ? ? 59 5F 5E 5B 83 ? ? C2 ? ? 3D
/*gMS v98.0*/FastTeleport		= 0x0095E27F,//Address AOB: 05 58 02 00 00 89 ?
/*gMS v98.0*/Tubi1				= 0x00441B2F,//Address AOB: 0F 8D ? ? ? ? 85 ED 0F 84 ? ? ? ? 81 FE
/*gMS v98.0*/Tubi2				= 0x00441C99,//Address AOB: B9 ? ? ? ? 2B CE 8B D1
/*gMS v98.0*/Tubi3				= 0x0049FE27,//Address AOB: 89 86 ? ? ? ? E8 ? ? ? ? 89 86 ? ? ? ? 5E C2 ? ? CC CC CC CC
/*gMS v98.0*/Tubi4				= 0x0049FE32,//Address AOB: 89 86 ? ? ? ? 5E C2 ? ? CC CC CC CC
/*gMS v98.0*/LemmingLeft		= 0x009C9B01,//Address AOB: 0F 85 ? ? 00 00 8B 47 ? 50 57 E8 ? ? ? ? DD
/*gMS v98.0*/LemmingRight		= 0x009C9A8D,//Address AOB: 0F 85 ? ? 00 00 8B 8B ? ? 00 00 D8
/*gMS v98.0*/AllMobKB			= 0x00663502,//Address AOB: 74 ? 8B CE E8 ? ? ? ? 85 C0 75 ? 8B CE E8 ? ? ? FF 8B
/*gMS v98.0*/AntiBreath			= 0x0046C902,//Address AOB: 7D ? 8B ? ? ? 00 00 8B D0 83 E2 ? 89
/*gMS v98.0*/UnlimitedAttack	= 0x0092D060,//Address AOB: 7E ? 83 F8 ? 7D ? 8B 41
/*gMS v98.0*/NoPlayerKB			= 0x0075E65B,//Address AOB: 01 00 00 00 D8 ? DF ? F6
/*gMS v98.0*/CSMobLag			= 0x006767AA,//Address AOB: B8 01 00 00 00 5F 5E 5B 8B E5 5D C2
/*gMS v98.0*/SSMobLag			= 0x009BDBB3,//Address AOB: B8 ? 00 00 00 5E C3 CC CC CC CC CC CC 56
/*gMS v98.1*/FullGodmode		= 0x00961B6C,//Address AOB: 0F 85 ? ? 00 00 8B 86 ? ? 00 00 83 E0 ? 83 F8 ? 0F 84 ? ? 00 00 8B 16 8B
/*gMS v98.0*/BlinkGodmode1		= 0x00927CF0,//Address AOB: 83 ? 1E ? 8B ? E8 ? ? ? FF 85 ? 7D
/*gMS v98.0*/BlinkGodmode2		= 0x00927CE5,//Address AOB: 7E ? 8B ? E8 ? ? ? FF 8B ? 83
/*gMS v98.0*/LBGM				= 0x00927CF0,//Address AOB: 83 ? 1E ? 8B ? E8 ? ? ? FF 85 ? 7D
/*gMS v98.0*/MissGodmode		= 0x00960107,//Address AOB: 0F 84 ? ? 00 00 8B 51 ? 8B 52 ? 83 C1 ? 8D 44 24 ? 50 89
/*gMS v98.0*/AllJump			= 0x009C16D4,//Address AOB: 74 ? E8 ? ? ? ? 83 BB ? ? 00 00 ? 74
/*gMS v98.0*/FallThroughFloor	= 0x009C1B2B,//Address AOB: 02 00 00 00 89 6C 24 ? 89 6C 24 ? 89 6C 24 ? C7
/*gMS v98.0*/MoonJump			= 0x009BE26D,//Address AOB: 75 ? 83 EC ? 8D 4E ? DD 1C 24 E8 ? ? ? ? D9
/*gMS v98.0*/SitHack			= 0x009323C7,//Address AOB: 74 ? 8B 44 24 ? 83 E0 ? 83 C8 ? EB ? 83
/*gMS v98.0*/MapSpeed			= 0x009C00DD,//Address AOB: 08 DC 8C 24 A4 00 00 00 ? ? ? ? ? 5C
/*gMS v98.0*/CSDarkSight		= 0x00965E6E,//Address AOB: 75 ? 8B ? ? 8B ? ? 8B ? ? ? 8B ? ? ? 00
/*gMS v98.0*/ShowPIC			= 0x0047572D,//Address AOB: 0F 84 ? ? 00 00 8B 5C 24 ? 3B D9 0F ? ? ? 00 00
/*gMS v98.0*/HideMobHPBar		= 0x009D479B,//Address AOB: 00 0F 85 0A 02 00 00 8B
/*gMS v98.0*/InvisibleMobs		= 0x009796B2,//Address AOB: 0F 84 ? ? 00 00 EB ? 8D 9B 00 00 00 00 8D 54 24 ? 52 [2nd]
/*gMS v98.0*/RainingMobs		= 0x00675346,//Address AOB: D9 C0 D8 C9 D9 C0
/*gMS v98.0*/LeftPVac			= 0x009BF8C3,//Address AOB: 01 00 00 00 E8 ? ? ? ? DD 5C 24 ? 8B
/*gMS v98.0*/LeftFVac			= 0x009BE37F,//Address AOB: 0F 85 ? 00 00 00 8B BF ? ? 00 00 DD
/*gMS v98.0*/RightPVac			= 0x009BF91D,//Address AOB: 00 00 00 00 E8 ? ? ? ? DD ? ? ? 8B
/*gMS v98.0*/RightFVac			= 0x009BE377,//Address AOB: 2C ? D9 DF E0 ? C4 41 ? 85 95 ? ? ? ? BF ? ? ? ? DD D8
/*gMS v98.0*/LeftFVacMobOnly	= 0x009BF8B5,//Address AOB: 7A ? 8B 75 ? 8B 46 ? 50 56 C7
/*gMS v98.0*/CSOriginVac1		= 0x009C2D9F,//Address AOB: 74 ? 8B ? ? 00 00 00 51 8D ? ? 00 00 00 52 E8 ? ? ? ? DD
/*gMS v98.0*/CSOriginVac2		= 0x009C2D38,//Address AOB: 74 ? 8B ? ? 00 00 00 8D 46 ? 51 50
/*gMS v98.0*/PICType1			= 0x004E64D5,//Address AOB: 74 16 8B 44 24 30 C7 44 24 28 ? ? ?
/*gMS v98.0*/PICType2			= 0x004E7A74,//Address AOB: 84 A8 ? ? ? ? 15 ? ? ? ? 55 6A 01
/*gMS v98.0*/PetEquip1			= 0x0050ABF2,//Address AOB: 50 8B 42 ? 56 50 E8 ? ? ? 00 B8 ? 00 00 00
/*gMS v98.0*/PetEquip2			= 0x0050ABF8,//Address AOB: E8 ? ? ? 00 B8 ? 00 00 00 E9 ? ? 00 00 8B
/*gMS v98.0*/ShowRank			= 0x008CB92E,//Address AOB: 0F 84 9F 00 00 00 8B 45 ? 8B
/*gMS v98.0*/ShowPotential		= 0x008CBA6E,//Address AOB: 0F 84 ? ? ? ? 8B 46 ? 50 83 C6 ? 56 E8 ? ? ? FF 8B
/*gMS v98.0*/FLACC				= 0x004670B0,//Address AOB: 06 89 ? ? ? 00 00 c7
/*gMS v98.0*/AntiAirCheck		= 0x009559E0,//Address AOB: 74 ? 8B 8D ? ? FF FF E8 ? ? ? FF 85 c0 75 
/*gMS v98.0*/NDHeal				= 0x00966553,//Address AOB: 74 24 E8 ? ? ? 00 50 56 8B CF E8 ? ? ? FF
/*gMS v98.0*/HealLadder			= 0x00966492;//Address AOB: 0F 85 ? 00 00 00 8B CE E8 ? ? ? FF 85 C0 0F 85 ? 00 00 00 6A ? 8D

	/* ===============================CODECAVES:=======================*/

	/* Spawn Control */
	DWORD SpawnControl = 0x00943F95; // AOB: 8B 58 ? 8B 48 ? 89 4C 24
	DWORD SpawnControlRet = SpawnControl + 5;
	BYTE SpawnControlOriginal[] = {0x8b, 0x58, 0x0c, 0x8b, 0x48, 0x10}; 

	/*m1Sniper's Safe UA*/
	DWORD SUAaddy = 0x004C182F; //AOB: 89 ? 5f 89 ? ? 5e c2 (first result)
	DWORD SUAReturn = SUAaddy + 6; // SUAaddy + 6
	BYTE SUAOriginal[] = {0x89,0x38,0x5F,0x89,0x48,0x04};

	/*Seven Miss Godmode*/
	DWORD SevenMissAddy = 0x0096322A; //AOB: 8b 9c 24 ? 00 00 00 85 db 7f ? 8d
    DWORD SevenMissReturn = SevenMissAddy + 7; // 7Missaddy + 7
	DWORD NoKB = 0x0076019B; // 01 00 00 00 D8 D1 DF E0 F6
    BYTE SevenMissOriginal[] = {0x8B, 0x9C, 0x24, 0xCC, 0x00, 0x00, 0x00};
	DWORD bMiss = 0;

	/*Monster Mind Control (MMC)*/
	    DWORD SetAggro = 0x009CAD3A; // AOB: E8 ? ? ? ? 85 C0 75 ? 5F
    DWORD cave1 = 0x009CA74E; // AOB: 50 FF D2 DB 00 DC 5C 24 [2nd]
    DWORD cave2 = 0x009C712D; // AOB: 52 FF D0 DB 00 DC 5C 24
    DWORD cave3 = 0x009C930B; // AOB: 89 44 24 ? DB 44 24 ? 51 57 [2nd]
    DWORD cave4 = 0x009C9341; // 89 44 24 ? DB 44 24 ? 52 8D [2nd]
    DWORD MMCCall = 0x009C16B0; // AOB: 55 8B EC 83 E4 ? 81
    DWORD Ret1 = SetAggro+5;
    DWORD Ret2 = cave1+5;
    DWORD Ret3 = cave2+5;
    DWORD Ret4 = cave3+8;
    DWORD Ret5 = cave4+8;
    BYTE SetAggroOriginal[] = {0xE8, 0x71, 0x69, 0xFF, 0xFF};
    BYTE cave1Original[] = {0x50, 0xFF, 0xD2, 0xDB, 0x00};
    BYTE cave2Original[] = {0x52, 0xFF, 0xD0, 0xDB, 0x00};
    BYTE cave3Original[] = {0x89, 0x44, 0x24, 0x1c, 0xdb, 0x44, 0x24, 0x1c};
    BYTE cave4Original[] = {0x89, 0x44, 0x24, 0x1c, 0xdb, 0x44, 0x24, 0x1c};

     /*CS Mouse Fly*/
		DWORD CSVacX = 0x009C2D98; // AOB: 89 03 8B 7D ? 85 FF 74
	DWORD CSReturnX = CSVacX + 5;
	DWORD CSVacY = 0x009C2E05;// AOB: 89 07 8B 5D ? 85 DB 74
	DWORD CSReturnY = CSVacY + 5;
	BYTE CSEAXXOrig[] = {0x89,0x03,0x8B,0x7D,0x10}; 
	BYTE CSEAXYOrig[] = {0x89,0x07,0x8B,0x5D,0x14};

	/*CSEAX Vac*/
	DWORD VacX = 0x009C2D98; // AOB: 89 03 8B 7D ? 85 FF 74
	DWORD ReturnX = VacX + 5;
	DWORD VacY = 0x009C2E05;// AOB: 89 07 8B 5D ? 85 DB 74
	DWORD ReturnY = VacY + 5;
	BYTE CSEAXXOriginal[] = {0x89,0x03,0x8B,0x7D,0x10}; 
	BYTE CSEAXYOriginal[] = {0x89,0x07,0x8B,0x5D,0x14};

	/*CSEAX Unlimited Attack*/
	DWORD CSXUAaddy = 0x009C17A8; //AOB: 89 03 8B 7D ? 85 FF 74 ? 8B
	DWORD CSEAXUAReturn = CSXUAaddy + 5;
	BYTE CSEAXUAOriginal[] = {0x89,0x03,0x8B,0x7D,0x10};
     
#pragma endregion Contains all hack addresses in one place to update. 

#pragma region CharXY, Mouse XY Labels
//Char XY, Mouse XY
void Form2::timer2_Tick(System::Object^  sender, System::EventArgs^  e)
{		
	unsigned long MouseX, MouseY, MouseLocO;
	MouseLocO = ReadPointer((ULONG_PTR*)MouseBase, MouseLoc);
	MouseX = (int)GetValue(MouseLocO, Mousex);
	MouseY = (int)GetValue(MouseLocO, Mousey);
	if(((long int)ReadPointer((ULONG_PTR*)CharBase, Charx)) !=0)
	{
		label9->Text = "Mouse XY: " + ((short signed int)(MouseX)).ToString() + "," + ((short signed int)(MouseY)).ToString();
		label8->Text = "Char XY: " + ((short signed int)ReadPointer((ULONG_PTR*)CharBase, Charx)-1).ToString() + "," + ((short signed int)ReadPointer((ULONG_PTR*)CharBase, Chary)-1).ToString();
		label17->Text = "Items: " + ReadPointer((ULONG_PTR*)ItemBase, ItemCount).ToString();
		label18->Text = "Mobs: " + ReadPointer((ULONG_PTR*)MonsterBase, MobCount).ToString();
	}
}
#pragma endregion Contains the Char XY and Mouse XY label updates in the Travel section.
#pragma region MS Hacks
void Form2::checkBox70_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Anti Air check mages
{
	if(this->checkBox70->Checked)
	{
		WriteMemory(AntiAirCheck, 1, 0xEB);
	}
	else
	{
		WriteMemory(AntiAirCheck, 1, 0x74);
	}
}
void Form2::checkBox69_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Heal on Ladder
{
	if(this->checkBox69->Checked)
	{
		WriteMemory(HealLadder, 2, 0x0F, 0x84);
	}
	else
	{
		WriteMemory(HealLadder, 2, 0x0F, 0x85);
	}
}
void Form2::checkBox68_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e)//No Delay Heal
{
	if(this->checkBox68->Checked)
	{
		WriteMemory(NDHeal, 1, 0xEB);
	}
	else
	{
		WriteMemory(NDHeal, 1, 0x74);
	}
}
void Form2::checkBox67_CheckedChanged(System::Object^  sender, System::EventArgs^  e)// No Skill movement (v97.1)
{
	if(this->checkBox67->Checked)
	{
		WriteMemory(FLACC, 1, 0x90);
	}
	else
	{
		WriteMemory(FLACC, 1, 0x06);
	}
}
void Form2::checkBox59_CheckedChanged(System::Object^  sender, System::EventArgs^  e)// No Skill movement (v97.1)
{
	if(this->checkBox59->Checked)
	{
		WriteMemory(NoSkillMovm, 2, 0xD8, 0xD2);
	}
	else
	{
		WriteMemory(NoSkillMovm, 2, 0xD8, 0xD1);
	}
}
void Form2::checkBox53_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Flash Jump (53) updated v97.1
{
	if(this->checkBox53->Checked)
	{
		WriteMemory(FlashJump, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
	else
	{
		WriteMemory(FlashJump, 6, 0x0F, 0x85, 0x45, 0xFF, 0xFF, 0xFF);
	}
}
void Form2::checkBox56_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Soul Rush (56) 97.1
{	
	if(this->checkBox56->Checked)
	{
		WriteMemory(SoulRush1, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(SoulRush2, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(SoulRush3, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
	else
	{
		WriteMemory(SoulRush1, 6, 0x0F, 0x85, 0x2C, 0x01, 0x00, 0x00);
		WriteMemory(SoulRush2, 6, 0x0F, 0x84, 0xBC, 0x02, 0x00, 0x00);
		WriteMemory(SoulRush3, 6, 0x0F, 0x84, 0xAB, 0xFE, 0xFF, 0xFF);
	}
}
void Form2::checkBox57_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Mechanic Dash (57) 97.1
{	
	if(this->checkBox57->Checked)
	{
		WriteMemory(MechanicDash1, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(MechanicDash2, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(MechanicDash3, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
	else
	{
		WriteMemory(MechanicDash1, 6, 0x0F, 0x85, 0x2C, 0x01, 0x00, 0x00);
		WriteMemory(MechanicDash2, 6, 0x0F, 0x84, 0xBC, 0x02, 0x00, 0x00);
		WriteMemory(MechanicDash3, 6, 0x0F, 0x84, 0x4C, 0x01, 0x00, 0x00);
	}
}
void Form2::checkBox58_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Combat Step (58) 97.1
{	
	if(this->checkBox58->Checked)
	{
		WriteMemory(CombatStep1, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(CombatStep2, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(CombatStep3, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
	else
	{
		WriteMemory(CombatStep1, 6, 0x0F, 0x85, 0x2C, 0x01, 0x00, 0x00);
		WriteMemory(CombatStep2, 6, 0x0F, 0x84, 0xBC, 0x02, 0x00, 0x00);
		WriteMemory(CombatStep3, 6, 0x0F, 0x84, 0x4C, 0x01, 0x00, 0x00);
	}
}
void Form2::checkBox51_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Anti Death Updated (Updated v97.1 gMS)
{
	if(this->checkBox51->Checked)
	{
		WriteMemory(AntiDeath, 1, 0xEB);
	}
	else
	{
		WriteMemory(AntiDeath, 1, 0x74);
	}
}
void Form2::checkBox48_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Unlimited Buff v97.1
{	
	if(this->checkBox48->Checked)
	{
		WriteMemory(UnlBuff, 1, 0x90);
	}
	else
	{
		WriteMemory(UnlBuff, 1, 0x40);
	}
}
void Form2::checkBox50_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Stop Aran Attack Movement (Updated v97.1 gMS)
{
	if(this->checkBox50->Checked)
	{
		WriteMemory(AranMov, 1, 0x00);
	}
	else
	{
		WriteMemory(AranMov, 1, 0x01);
	}
}
void Form2::checkBox52_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//No Mob KB (Updated v97.1 gMS)
{
	if(this->checkBox52->Checked)
	{
		WriteMemory(NoMobKB, 2, 0x90, 0x90);
	}
	else
	{
		WriteMemory(NoMobKB, 2, 0x75, 0x25);
	}
}
void Form2::checkBox49_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Enable Disabled Buttons (Updated v97.1 gMS)
{
	if(this->checkBox49->Checked)
	{
		WriteMemory(EDB, 3, 0x8B, 0x41, 0x2C);
	}
	else
	{
		WriteMemory(EDB, 3, 0x8B, 0x41, 0x28);
	}
}
void Form2::checkBox43_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Block Damage v97.1
{
	if(this->checkBox43->Checked)
	{
		WriteMemory(BlockDamage, 2, 0x0F, 0x85);
	}
	else
	{
		WriteMemory(BlockDamage, 2, 0x0F, 0x84);
	}
}
void Form2::checkBox44_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Instant drop (Updated v97.1gMS)
{
	if(this->checkBox44->Checked)
	{
		WriteMemory(InstantDrop1, 2, 0x90, 0x90);
		WriteMemory(InstantDrop2, 1, 0x25);
	}
	else
	{
		WriteMemory(InstantDrop1, 2, 0x75, 0x43);
		WriteMemory(InstantDrop2, 1, 0x0D);
	}
}
void Form2::checkBox27_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Tornado Buff 27 (Updated v97.1 gMS)
{
	if(this->checkBox27->Checked)
	{
		WriteMemory(Tornado, 2, 0x74, 0x07);
	}
	else
	{
		WriteMemory(Tornado, 2, 0x75, 0x11);
	}
}
void Form2::checkBox28_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Slow Mobs 28 (Updated v96.2 gMS)
{
	if(this->checkBox28->Checked)
	{
		WriteMemory(SlowMob, 5, 0xB8, 0x00, 0x00, 0x00, 0x00);
	}
	else
	{
		WriteMemory(SlowMob, 5, 0xB8, 0xE8, 0x03, 0x00, 0x00);
	}
}
void Form2::checkBox29_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Remove Loot Animation (97.1)
{	
	if(this->checkBox29->Checked)
	{
		WriteMemory(RemoveAnim, 6, 0x81, 0xFE, 0x00, 0x00, 0x00, 0x00);
	}
	else
	{
		WriteMemory(RemoveAnim, 6, 0x81, 0xFE, 0xBC, 0x02, 0x00, 0x00);
	}
}
void Form2::checkBox42_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Hide (CS) 42 v97.1
{
	if(this->checkBox42->Checked)
	{
		WriteMemory(HideCS, 2, 0x75, 0x02);
	}
	else
	{
		WriteMemory(HideCS, 2, 0x74, 0x02);
	}
}
void Form2::checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Unlimited Mech Seige Mode 97.1
{
	if(this->checkBox5->Checked)
	{
		WriteMemory(GiantRobot, 1, 0xEB);
		WriteMemory(TankSiege, 1, 0xEB);
		WriteMemory(NormSiege, 1, 0xEB);
	}
	else
	{
		WriteMemory(GiantRobot, 1, 0x7C);
		WriteMemory(TankSiege, 1, 0x7C);
		WriteMemory(NormSiege, 1, 0x7C);
	}
}
void Form2::checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Endless Flamethrower 6 (Updated v97.1)
{
	if(this->checkBox6->Checked)
	{
		WriteMemory(EndlessFlamethrower, 6, 0x89, 0x86, 0xDF, 0x3B, 0x00, 0x00);
	}
	else
	{
		WriteMemory(EndlessFlamethrower, 6, 0x89, 0x86, 0xE4, 0x3B, 0x00, 0x00);
	}
}
void Form2::checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Fast Teleport 7 (Updated v97.1 gMS)
{
	if(this->checkBox7->Checked)
	{
		WriteMemory(FastTeleport, 5, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
	else
	{
		WriteMemory(FastTeleport, 5, 0x05, 0x58, 0x02, 0x00, 0x00);
	}
}
void Form2::checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Uber Tubi 8 Updated v97.1 gMS
{	
	if(this->checkBox8->Checked)
	{
		WriteMemory(Tubi1, 6, 0x81, 0xFE, 0x00, 0x00, 0x00, 0x00);
		WriteMemory(Tubi2, 6, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(Tubi3, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(Tubi4, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
	else
	{
		WriteMemory(Tubi1, 6, 0x81, 0xFE, 0xBC, 0x02, 0x00, 0x00);
		WriteMemory(Tubi2, 6, 0xB9, 0xBC, 0x02, 0x00, 0x00);
		WriteMemory(Tubi3, 6, 0x89, 0x86, 0xB8, 0x20, 0x00, 0x00);
		WriteMemory(Tubi4, 6, 0x89, 0x86, 0xBC, 0x20, 0x00, 0x00);
	}
}
void Form2::checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Lemmings 11 (Updated v97.1 gMS)
{
	if(this->checkBox11->Checked)
	{
		WriteMemory(LemmingLeft, 2, 0x0F, 0x84);
		WriteMemory(LemmingRight, 2, 0x0F, 0x84);
	}
	else
	{
		WriteMemory(LemmingLeft, 2, 0x0F, 0x85);
		WriteMemory(LemmingRight, 2, 0x0F, 0x85);
	}
}
void Form2::checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e)// Mob KB 12 (Updated v97.1 gMS)
{
	if(this->checkBox12->Checked)
	{
		WriteMemory(AllMobKB, 1, 0x75);
	}
	else
	{
		WriteMemory(AllMobKB, 1, 0x74);
	}
}
void Form2::checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Anti Breath 13 (Updated v97.1 gMS)
{	
	if(this->checkBox13->Checked)
	{
		WriteMemory(AntiBreath, 1, 0x7C);
	}
	else
	{
		WriteMemory(AntiBreath, 1, 0x7D);
	}
}
void Form2::checkBox47_CheckedChanged(System::Object^  sender, System::EventArgs^  e)// Unlimited Attack 47 (Updated v97.1 gMS)
{
	if(this->checkBox47->Checked)
	{
		WriteMemory(UnlimitedAttack, 1, 0xEB);
	}
	else
	{
		WriteMemory(UnlimitedAttack, 1, 0x7E);
	}
}
void Form2::checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e)// No Player KB 15 (Updated v97.1 gMS)
{
	if(this->checkBox15->Checked)
	{
		WriteMemory(NoPlayerKB, 1, 0x00);
	}
	else
	{
		WriteMemory(NoPlayerKB, 1, 0x01);
	}
}
void Form2::checkBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Client Side Lag 16 (Updated v97.1 gMS)
{
	if(this->checkBox16->Checked)
	{
		WriteMemory(CSMobLag, 2, 0xB8, 0x00);
	}
	else
	{
		WriteMemory(CSMobLag, 2, 0xB8, 0x01);
	}
}
void Form2::checkBox17_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Server Side Lag 17 (Updated v97.1 gMS)
{
	if(this->checkBox17->Checked)
	{
		WriteMemory(SSMobLag, 2, 0xB8, 0x00);
	}
	else
	{
		WriteMemory(SSMobLag, 2, 0xB8, 0x01);
	}
}
void Form2::checkBox18_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Full Godmode 18 (Updated v97.1 gMS)
{
	if(this->checkBox18->Checked)
	{
		WriteMemory(FullGodmode, 2, 0x0F, 0x84);
	}
	else
	{
		WriteMemory(FullGodmode, 2, 0x0F, 0x85);
	}
}
void Form2::checkBox19_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Blink Godmode 19 (Updated v97.1 gMS)
{
	if(this->checkBox19->Checked)
	{
		WriteMemory(BlinkGodmode1, 2, 0x83, 0xCE);
		WriteMemory(BlinkGodmode2, 2, 0xEB, 0x09);

	}
	else
	{
		WriteMemory(BlinkGodmode1, 2, 0x83, 0xEE);
		WriteMemory(BlinkGodmode2, 2, 0x7E, 0x21);
	}
}
void Form2::checkBox20_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//15 Sec LBGM 20 (Updated v97.1 gMS)
{
	if(this->checkBox20->Checked)
	{
		WriteMemory(LBGM, 3, 0x83, 0xEE, 0x02);
	}
	else
	{
		WriteMemory(LBGM, 3, 0x83, 0xEE, 0x1E);
	}
}
void Form2::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Morph Godmode 1 (Updated v97.1 gMS)
{
	if(this->checkBox1->Checked)
	{
		if(this->textBox1->Text == "")
		{
			this->checkBox1->Checked = false;

			MessageBoxW(NULL, L"Please insert a value for Morph Godmode. Default is 9", L"Alert", MB_OK);
		}
		else
		{
			this->timer1->Interval = 50; // 50 MS Interval
			this->timer1->Enabled = true;	
		}
	}
}
void Form2::timer1_Tick(System::Object^  sender, System::EventArgs^  e)//Morph Godmode 1 (Updated v97.1 gMS)
{
	if(this->checkBox1->Checked)
	{
		MorphValue = Convert::ToInt32(this->textBox1->Text);
		WritePointer(CharBase, Morph, MorphValue);
	}
	else
	{
		if(ReadPointer((ULONG_PTR*)CharBase, Morph) != 0)
		{
			WritePointer(CharBase, Morph, 0);
		}
	}
}
void Form2::checkBox22_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Miss Godmode 22 (Updated v97.1 gMS)
{
	if(this->checkBox22->Checked)
	{
		WriteMemory(MissGodmode, 2, 0x0F, 0x85);
	}
	else
	{
		WriteMemory(MissGodmode, 2, 0x0F, 0x84);
	}
}
void Form2::checkBox23_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//All Jump 23 (Updated v97.1 gMS)
{
	if(this->checkBox23->Checked)
	{
		WriteMemory(AllJump, 1, 0x75);
	}
	else
	{
		WriteMemory(AllJump, 1, 0x74);
	}
}
void Form2::checkBox24_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Fall Through Floor 24 (Updated v97.1 gMS)
{
	if(this->checkBox24->Checked)
	{
		WriteMemory(FallThroughFloor, 1, 0x00);
	}
	else
	{
		WriteMemory(FallThroughFloor, 1, 0x02);
	}
}
void Form2::checkBox25_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Moon Jump 25 (Updated v97.1 gMS)
{
	if(this->checkBox25->Checked)
	{
		WriteMemory(MoonJump, 1, 0x74);
	}
	else
	{
		WriteMemory(MoonJump, 1, 0x75);
	}
}
void Form2::checkBox26_CheckedChanged(System::Object^  sender, System::EventArgs^  e)// Sit Hack 26 (Updated v97.1 gMS)
{
	if(this->checkBox26->Checked)
	{
		WriteMemory(SitHack, 1, 0x75);
	}
	else
	{
		WriteMemory(SitHack, 1, 0x74);
	}
}
void Form2::checkBox30_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Map Speed 30 (Updated v97.1 gMS)
{
	if(this->checkBox30->Checked)
	{
		WriteMemory(MapSpeed, 1, 0x58);
	}
	else
	{
		WriteMemory(MapSpeed, 1, 0x08);
	}
}
void Form2::checkBox31_CheckedChanged(System::Object^  sender, System::EventArgs^  e)// Client Side Dark Sight 31 v97.1
{
if(this->checkBox31->Checked)
	{
		WriteMemory(CSDarkSight, 1, 0x74);
	}
	else
	{
		WriteMemory(CSDarkSight, 1, 0x75);
	}
}
void Form2::checkBox32_CheckedChanged(System::Object^  sender, System::EventArgs^  e)// Show PIC 32 (Updated v97.1 gMS)
{
	if(this->checkBox32->Checked)
	{
		WriteMemory(ShowPIC, 2, 0x0F, 0x85);
	}
	else
	{
		WriteMemory(ShowPIC, 2, 0x0F, 0x84);
	}
}
void Form2::checkBox33_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Hide Mob HP Bar 33 (Updated v97.1 gMS)
{
	if(this->checkBox33->Checked)
	{
		WriteMemory(HideMobHPBar, 1, 0x01);
	}
	else
	{
		WriteMemory(HideMobHPBar, 1, 0x00);
	}
}
void Form2::checkBox34_CheckedChanged(System::Object^  sender, System::EventArgs^  e)// Invisible Mobs 34 (Updated v96.2 gMS)
{
	if(this->checkBox34->Checked)
	{
		WriteMemory(InvisibleMobs, 2, 0x0F, 0x85);
	}
	else
	{
		WriteMemory(InvisibleMobs, 2, 0x0F, 0x84);
	}
} 
void Form2::checkBox35_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Raining Mobs 35 (Updated v97.1 gMS)
{
	if(this->checkBox35->Checked)
	{
		WriteMemory(RainingMobs, 2, 0xD9, 0xC1);
	}
	else
	{
		WriteMemory(RainingMobs, 2, 0xD9, 0xC0);
	}
} 
void Form2::checkBox36_CheckedChanged(System::Object^  sender, System::EventArgs^  e)// Left Push Vac 36 (Updated v97.1 gMS)
{
	if(this->checkBox36->Checked)
	{
		WriteMemory(LeftPVac, 1, 0x00);
	}
	else
	{
		WriteMemory(LeftPVac, 1, 0x01);
	}
} 
void Form2::checkBox37_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Left Force Vac 37 (Updated v97.1 gMS)
{
	if(this->checkBox37->Checked)
	{
		WriteMemory(LeftFVac, 2, 0x0F, 0x84);
	}
	else
	{
		WriteMemory(LeftFVac, 2, 0x0F, 0x85);
	}
} 
void Form2::checkBox38_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Right Push Vac 38 (Updated v97.1 gMS)
{
	if(this->checkBox38->Checked)
	{
		WriteMemory(RightPVac, 1, 0x01);
	}
	else
	{
		WriteMemory(RightPVac, 1, 0x00);
	}
} 
void Form2::checkBox39_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Right Force Vac 39  (Updated v97.1 gMS)
{
	if(this->checkBox39->Checked)
	{
		WriteMemory(RightFVac, 1, 0x0C);
	}
	else
	{
		WriteMemory(RightFVac, 1, 0x2C);
	}
} 
void Form2::checkBox40_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Left Force Vac Mob Only 40 (Updated v97.1 gMS)
{
	if(this->checkBox40->Checked)
	{
		WriteMemory(LeftFVacMobOnly, 2, 0x90, 0x90);
	}
	else
	{
		WriteMemory(LeftFVacMobOnly, 2, 0x7A, 0x4D);
	}
}
void Form2::checkBox41_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//Client Side Origin 41 (Updated v97.1 gMS)
{
	if(this->checkBox41->Checked)
	{
		WriteMemory(CSOriginVac1, 1, 0x75);
		WriteMemory(CSOriginVac2, 1, 0x75);
	}
	else
	{
		WriteMemory(CSOriginVac1, 1, 0x74);
		WriteMemory(CSOriginVac2, 1, 0x74);
	}
}
void Form2::checkBox65_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//PIC Typer
{
	if(this->checkBox65->Checked)
	{
		WriteMemory(PICType1, 1, 0xEB);
		WriteMemory(PICType2, 1, 0x85);
	}
	else
	{
		WriteMemory(PICType1, 1, 0x74);
		WriteMemory(PICType2, 1, 0x84);
	}
}

void Form2::checkBox60_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Show Potential
{
	if(this->checkBox60->Checked)
	{
		WriteMemory(ShowPotential, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
	else
	{
		WriteMemory(ShowPotential, 6, 0x0F, 0x84, 0x8A, 0x00, 0x00, 0x00);
	}
}
void Form2::checkBox61_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // Show Rank
{
	if(this->checkBox61->Checked)
	{
		WriteMemory(ShowRank, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
	else
	{
		WriteMemory(ShowRank, 6, 0x0F, 0x84, 0x9F, 0x00, 0x00, 0x00);
	}
}
void Form2::checkBox62_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // Pet Equip
{
	if(this->checkBox62->Checked)
	{
		WriteMemory(PetEquip1, 1, 0x90);
		WriteMemory(PetEquip2, 5, 0xE8, 0x13, 0x81, 0x4F, 0x00);
	}
	else
	{
		WriteMemory(PetEquip1, 1, 0x50);
		WriteMemory(PetEquip2, 5, 0xE8, 0x43, 0x82, 0x4F, 0x00);
	}
}

	
#pragma endregion Contains the code that executes the hacks when activated and deactivated.
#pragma region CSEAXUA
///////////CSEAX Unlimited Attack (v96.2)
void __declspec(naked) CSXUAcodecave()
{
        __asm
        {
			push eax
            mov eax,[CharBase] //CHARACTER POINTER
            mov eax,[eax]
            mov eax,[eax+AttackCount] //ATTACK COUNTER OFFSET
            cmp eax,uacount//uacount
			pop eax
            jg CSedit //jna

			push eax
            mov eax,[CharBase] //CHARACTER POINTER
            mov eax,[eax]
            mov eax,[eax+PID] //pID OFFSET
            cmp esi,eax
			pop eax
            jne CSedit
            add eax,06
            jmp CSedit
     
            CSedit:
            jmp CSXreturn
     
            CSXreturn:
            mov [ebx], eax
			mov edi,[ebp+0x10] 
            jmp dword ptr [CSEAXUAReturn]
        }
}
     
        BYTE CSBuffer[5];
void Form2::checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
    {
		MakePageWritable(CSXUAaddy, 5);
        if(this->checkBox14->Checked)
        {
                uacount = Convert::ToInt32(this->textBox11->Text);
                JumpCall(true, (BYTE*)CSXUAaddy, (void*)&CSXUAcodecave, (BYTE*)&CSBuffer[0], 0);
           
        }
        else
        {
                memcpy((void*)CSXUAaddy,CSEAXUAOriginal,sizeof(CSEAXUAOriginal));
        }
}

#pragma endregion WORKS v98.0
#pragma region TeleportButton
//Teleport Button
	int TeleXPos;
	int TeleYPos;

	void Teleport(long int X, long int Y)
	{
		WritePointer(CharBase, TeleX, X); 
		WritePointer(CharBase, TeleY, Y);  
		WritePointer(CharBase, Tele, 1); 
	}



void Form2::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	TeleXPos = Convert::ToInt32(this->textBox2->Text);
	TeleYPos = Convert::ToInt32(this->textBox3->Text);
	Teleport(TeleXPos, TeleYPos);

}

// X Teleport Value
void Form2::textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
		if(this->textBox2->Text == "")
		{ 
			this->textBox2->Text == "0000";
		}
}
// Y Teleport Value
void Form2::textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
		if(this->textBox3->Text == "")
		{ 
			this->textBox3->Text == "0000";
		}
}
#pragma endregion WORKS v98.0
#pragma region XY Mouse Click
// Cleric's method.

	void CharTele(int X, int Y)
	{
		
	    WritePointer(CharBase, TeleX, X);
		WritePointer(CharBase, TeleY, Y);
		WritePointer(CharBase, Tele, 1);
	}

bool MouseTele = false;
void TeleToMouseRoutine()
{
        Sleep(1000); // Don't count the initial click to trigger the hack on.
        while (MouseTele)
        {
                //MouseAnim = ReadPointer((ULONG_PTR*)MouseBase, MouseAnimOffset); // Check with (MouseAnim == 12)
                bool LIsDown = ( HIWORD(GetAsyncKeyState(VK_LBUTTON)) == 0xFFFF ? true : false );
                if (LIsDown)
                {		
						int RealMouse = *((unsigned long*)MouseBase) + MouseLoc;
						int MouseXpos = ReadPointer((ULONG_PTR*)RealMouse, Mousex);
						int MouseYpos = ReadPointer((ULONG_PTR*)RealMouse, Mousex + 4);
						CharTele(MouseXpos, MouseYpos);
						Sleep(1000);
                }
                Sleep(10);
        }
}
void TriggerMouseTele()
{
		MouseTele = !MouseTele;
		if (MouseTele)
		{
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&TeleToMouseRoutine, NULL, NULL, NULL);
		}
}

void Form2::checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox4->Checked)
	{

		TriggerMouseTele();
	}
	else
	{
		MouseTele = false;
	}
}
#pragma endregion
#pragma region SSMouseFly
//
//SS Mouse Fly
bool On = false;
void SSTele(int X, int Y)
{
	    WritePointer(CharBase, TeleX, X);
		WritePointer(CharBase, TeleY, Y);
		WritePointer(CharBase, Tele, 1);
}
void SSMouseFly()
{
	Sleep(1000); // Don't count the initial click to trigger the hack on.
	while(On)
	{
		int RealMouse = *((unsigned long*)MouseBase) + MouseLoc;
		int MouseXPos = ReadPointer((ULONG_PTR*)RealMouse, Mousex);
		int MouseYPos = ReadPointer((ULONG_PTR*)RealMouse, Mousex + 4);
		SSTele(MouseXPos, MouseYPos);
		Sleep(10);
	}
	Sleep(10);
}
void TriggerSSFly()
{
		On = !On;
		if (On)
		{
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&SSMouseFly, NULL, NULL, NULL);
		}
}
void Form2::checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox9->Checked)
	{
		TriggerSSFly();
	}
	else
	{
		On = false;
	}
}
#pragma endregion
#pragma region LoopTeleport
int LoopDelay;
bool loopOn = false;

void TeleLoopTele(long int X, long int Y)
{
	    WritePointer(CharBase, TeleX, X);
		WritePointer(CharBase, TeleY, Y);
		WritePointer(CharBase, Tele, 1);
}

void TeleLoop()
{
	while(loopOn)
	{
	TeleLoopTele(TeleXPos, TeleYPos);
	Sleep(LoopDelay*1000);
	}

}
void TriggerTeleloop()
{	
	loopOn = !loopOn;
	if(loopOn)
	{
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&TeleLoop, NULL, NULL, NULL);
	}
}

void Form2::checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	TeleXPos = Convert::ToInt32(this->textBox2->Text);
	TeleYPos = Convert::ToInt32(this->textBox3->Text);
	LoopDelay = Convert::ToInt32(this->textBox4->Text);		
	if(this->checkBox10->Checked)
	{
		TriggerTeleloop();
	}
	else
	{
		loopOn = false;
	}
}


#pragma endregion WORKS v98.0
#pragma region CSEAXVac
//CSEAX Vac

	__declspec(naked) void __stdcall CSEAXX()
{
	 __asm
		 {
			push ecx
			mov ecx,[CharBase] //Char Base (Updated 96)
			mov ecx,[ecx]
			mov ecx,[ecx+PID] // Char PID
 
			cmp ecx,esi
			pop ecx
			je NormalX
 
			mov eax,[InfoBase] //InfoBase
			mov eax,[eax]
			mov eax,[eax+Mapx] //Map X
			//mov eax,[eax+0x27C] //needs updating?
			add eax,x //X-value in pixels away from character
 
			NormalX:
			mov [ebx],eax
			mov edi,[ebp+0x10]
			jmp dword ptr [ReturnX]
 
		 }
}
	
	__declspec(naked) void __stdcall CSEAXY()
{
	 __asm
		 {
			push ecx
			mov ecx,[CharBase] // Char Base (Updated 96)
			mov ecx,[ecx]
			mov ecx,[ecx+PID] // Char PID
 
			cmp ecx,esi
			pop ecx
			je NormalY
 
			mov eax,[InfoBase] // Char Base (Updated)
			mov eax,[eax]
			mov eax,[eax+Mapy] // Char PID
			//mov eax,[eax+0x280] // needs updating?
			add eax,y //Y-Value in pixels away from character.
 
			NormalY:
			mov [edi],eax
			mov ebx,[ebp+0x14]
			jmp dword ptr [ReturnY]

		 }
} 
	BYTE OldMemBuf[5];
void Form2::checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
 {
	if(this->checkBox3->Checked)
	{
		x = Convert::ToInt32(this->textBox8->Text);
		y = Convert::ToInt32(this->textBox7->Text);		
		JumpCall(true, (BYTE*)VacX, (void*)&CSEAXX, (BYTE*)&OldMemBuf[0], 0);
		JumpCall(true, (BYTE*)VacY, (void*)&CSEAXY, (BYTE*)&OldMemBuf[0], 0);
	}
	else
	{
		memcpy((void*)VacX,CSEAXXOriginal,sizeof(CSEAXXOriginal)); 
		memcpy((void*)VacY,CSEAXYOriginal,sizeof(CSEAXYOriginal));
	}
}
#pragma endregion WORKS v98.0
#pragma region CSMouseFly
//CS MOUSE FLY
	__declspec(naked) void __stdcall CSX()
{
	 __asm
		 {
			push ecx
			mov ecx,[CharBase] // Char Related
			mov ecx,[ecx]
			mov ecx,[ecx+PID]

			cmp esi,ecx
			pop ecx
			jne NormalX

			mov eax,[MouseBase] //Mouse Pointer
			mov eax,[eax]
			mov eax,[eax+MouseLoc] //Offset
			mov eax,[eax+Mousex] //Mouse-X Offset

			NormalX:
			mov [ebx],eax
			mov edi,[ebp+0x10]
			jmp dword ptr [CSReturnX]

		 }
} 
	__declspec(naked) void __stdcall CSY()
{
	 __asm
		 {
			push ecx
			mov ecx,[CharBase] // Char Related
			mov ecx,[ecx]
			mov ecx,[ecx+PID]

			cmp esi,ecx
			pop ecx
			jne NormalY

			mov eax,[MouseBase] //Mouse Pointer
			mov eax,[eax]
			mov eax,[eax+MouseLoc] //Offset
			mov eax,[eax+Mousey] //Mouse-Y Offset

			NormalY:
			mov [edi],eax
			mov ebx,[ebp+0x14]
			jmp dword ptr [CSReturnY]

 
		 }
}

	BYTE CSOldMemBuff[5];
void Form2::checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
 {
	if(this->checkBox2->Checked)

	{
		JumpCall(true, (BYTE*)VacX, (void*)&CSX, (BYTE*)&CSOldMemBuff[0], 0);
		JumpCall(true, (BYTE*)VacY, (void*)&CSY, (BYTE*)&CSOldMemBuff[0], 0);
	}
	else
	{
		memcpy((void*)VacX,CSEAXXOrig,sizeof(CSEAXXOrig)); 
		memcpy((void*)VacY,CSEAXYOrig,sizeof(CSEAXYOrig));
	}
}
#pragma endregion WORKS v98.0
#pragma region MMC
//MMC v98.0    
#pragma region MMC XY
__declspec(naked) void __stdcall vSetAggro()
{
    __asm
            {
                call dword ptr [MMCCall]
                mov edx,[CharBase] //Char Base (Updated 95.4)
                mov edx,[edx]
                mov edx,[edx+PID]
                mov edx,[edx+0x8]
                mov [esi+0x00000308],edx
                jmp dword ptr [Ret1]

            }
}
__declspec(naked) void __stdcall vcave1()
{
    __asm
        {	
            push eax
            call edx
            fild dword ptr [x]
            jmp dword ptr [Ret2]
        }
}

__declspec(naked) void __stdcall vcave2()
{
    __asm
        {	
			push edx
            call eax
            fcomp dword ptr [x]
            jmp dword ptr [Ret3]
        }
}

__declspec(naked) void __stdcall vcave3()
{
    __asm
        {
            mov [esp+0x1c],eax
            fild dword ptr [x]
            jmp dword ptr [Ret4]
        }
}
__declspec(naked) void __stdcall vcave4()
{
    __asm
        {
            mov [esp+0x1c],eax
            fild dword ptr [y]
            jmp dword ptr [Ret5]
        }
}            
#pragma endregion

BYTE OldMemBuff[8];
void Form2::checkBox21_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if(this->checkBox21->Checked == true)
        {

				x = Convert::ToInt32(this->textBox6->Text);
				y = Convert::ToInt32(this->textBox5->Text);
				JumpCall(true, (BYTE*)SetAggro, (void*)&vSetAggro, (BYTE*)&OldMemBuff[0], 0);
				JumpCall(true, (BYTE*)cave1, (void*)&vcave1, (BYTE*)&OldMemBuff[0], 0);
				JumpCall(true, (BYTE*)cave2, (void*)&vcave2, (BYTE*)&OldMemBuff[0], 0);
				JumpCall(true, (BYTE*)cave3, (void*)&vcave3, (BYTE*)&OldMemBuff[0], 0);
				JumpCall(true, (BYTE*)cave4, (void*)&vcave4, (BYTE*)&OldMemBuff[0], 0);
				memset((void*)(cave3+5),0x90,3);
				memset((void*)(cave4+5),0x90,3);
		}
		else
        {
			memcpy((void*)SetAggro, SetAggroOriginal, sizeof(SetAggroOriginal));
			memcpy((void*)cave1, cave1Original, sizeof(cave1Original));
			memcpy((void*)cave2, cave2Original, sizeof(cave2Original));
			memcpy((void*)cave3, cave3Original, sizeof(cave3Original));
			memcpy((void*)cave4, cave4Original, sizeof(cave4Original));
        }
    }
#pragma endregion
#pragma region Kami

long int TargetX = 0,
		 TargetY = 0;

unsigned long ulKami = 0x0095FE6B; // 83 be ? ? 00 00 00 89 44 ? ? 0f 84
unsigned long ulKamiReturn = 0x0095FE7C; // 8b 8e ? ? 00 00 2b c8 85 c9 0f 8f ? ? ? ? 8b 86 ? ? 00 00 85 c0
unsigned long ulKamiNop = 0x00662766; // 75 ? 56 e8 ? ? ? 00 83 c4 ? 85 c0 0f 84 ? ? 00 00 8b
unsigned long ulKamiBypass = 0x009C492E+6; // 83 be ? ? 00 00 00 dd 5c ? ? db 45 ? dc 35 ? ? ? ? dd + 6
void __declspec(naked) KamiHook() 
{
	__asm 
	{
		mov [esp+0x04],eax
		push eax
		push ecx
		mov eax,[TargetX]
		mov ecx,[TargetY]
		mov [esi+0x00003B9C],eax
		mov [esi+0x00003BA0],ecx
		pop ecx
		pop eax
		jmp dword ptr [ulKamiReturn]
	}
}

void HookKami(bool bEnable) 
{
	if(bEnable)
	{
		WriteMemory(ulKamiNop, 2, 0x90, 0x90);
		WriteMemory(ulKamiBypass, 1, 0x01);
		Jump(ulKami, KamiHook, 2);
	} else
	{
		WriteMemory(ulKami, 7, 0x83, 0xBE, 0x94, 0x3B, 0x00, 0x00, 0x00);
		WriteMemory(ulKamiNop, 2, 0x75, 0x25);
		WriteMemory(ulKamiBypass, 1, 0x00);
	}
}

unsigned long pfnPtInRect = 0x00517D0B; // ff 15 ? ? ? 00 85 c0 75 ? 8d 4c 24 ? c7 44 24 ? FF 
//new: FF 15 ? ? CC 00 85 C0 75 ? 8D
//call dword ptr [00CBE144]
unsigned long ulPtInRect = GetPointedAddress((ULONG_PTR*)ReadPointer((ULONG_PTR*)pfnPtInRect, 2), 0);

long int iX = 0,
		 iY = 0;


void __declspec(naked) ItemXY_Hook_Cave()
{
	__asm
	{
		mov eax,[esp+0x08]
		mov [iX],eax
		mov eax,[esp+0x0C]
		mov [iY],eax
		jmp dword ptr [ulPtInRect]
   }
}

void ItemXY_Hook(bool bEnable)
{
	if(bEnable)Call(pfnPtInRect, ItemXY_Hook_Cave, 1);
	else WriteMemory(pfnPtInRect, 6, 0xff, 0x15, 0x44, 0x31, 0xCC, 0x00); // FF 15 4431CC00 
}

bool bKami = false,
	 bMob = false,
	 bLoot = false;

BYTE LootWhen = 20;

int RangeX = 70,
	RangeY = 0;

long int StartX = 0,
	     StartY = 0;

void Kami()
{

	unsigned long ulEBX;
	while(bKami)
	{
		//Kami
		if((ReadPointer((ULONG_PTR*)ItemBase, ItemCount) > LootWhen) && (bLoot == true))
		{
			StartX = ReadPointer((ULONG_PTR*)CharBase,Charx);
			StartY = ReadPointer((ULONG_PTR*)CharBase,Chary);
			while(ReadPointer((ULONG_PTR*)ItemBase, ItemCount) > 0)
			{
				TargetX = iX;
				TargetY = iY;
				Sleep(200);
			}
			if(!bMob)
			{
				TargetX = StartX;
				TargetY = StartY;
			}
		}
		/*Kam*/
		if ((ReadPointer((ULONG_PTR*)MonsterBase,MobCount) != 0) && (bMob == true))
		{
			ulEBX = ReadPointer((ULONG_PTR*)MonsterBase, MobShort1);
			ulEBX = GetValue(ulEBX, MobShort2);
			ulEBX = GetValue(ulEBX, MobShort3);   
			ulEBX = GetValue(ulEBX, MobShort4);    
			TargetX = ((long int)GetValue(ulEBX, MobXShort) - RangeX);
			TargetY = ((long int)GetValue(ulEBX, MobYShort) - RangeY);
		}
		Sleep(150);
	}
		Sleep(100);
}

void Form2::checkBox46_CheckedChanged(System::Object^  sender, System::EventArgs^  e){ // Kami Activation
	bMob = checkBox46->Checked;
	if(textBox10->Text != "" && textBox9->Text != ""){
		if(bMob){
			bKami = true;
			CreateThread(NULL, NULL, (::LPTHREAD_START_ROUTINE)&Kami, NULL, NULL, NULL);
		} else bKami = false;
	} else MessageBoxW(NULL, L"You must input valid range values!", L"Alert", MB_OK);//Alert("You must input valid range values!");
	//ItemXY_Hook(bKami);
	HookKami(bKami);
}

void Form2::checkBox45_CheckedChanged(System::Object^  sender, System::EventArgs^  e){
	bLoot = checkBox45->Checked;
	if(textBox12->Text != ""){
		if(bLoot){
			bKami = true;
			CreateThread(NULL, NULL, (::LPTHREAD_START_ROUTINE)&Kami, NULL, NULL, NULL);
		} else bKami = false;
	} else MessageBoxW(NULL, L"You must input valid item values!", L"Alert", MB_OK);//Alert("You must input valid item values!");
	//ItemXY_Hook(bKami);
	//HookKami(bKami);
}

void Form2::textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e){
	RangeX = (int)Convert::ToInt32(textBox10->Text);
}

void Form2::textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e){
	RangeY = (int)Convert::ToInt32(textBox9->Text);
}

void Form2::textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e){
	LootWhen = (BYTE)Convert::ToInt32(textBox12->Text);
}

#pragma endregion 
#pragma region SpawnControl
//Spawn Control XY v96.2------------------------------------------------------------

	__declspec(naked) void __stdcall SpawnControlCave()
{
	 __asm
		 {
			mov ebx,[SpawnX]
			mov ecx,[SpawnY]
			jmp dword ptr [SpawnControlRet]
		 }
}
//Spawn Control Char position------------------------------------------------------------
	BYTE SCBuff[6];
void Form2::checkBox54_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox54->Checked)
	{
		SpawnX = ((short signed int)ReadPointer((ULONG_PTR*)CharBase, Charx)-1);
		SpawnY = ((short signed int)ReadPointer((ULONG_PTR*)CharBase, Chary)-1);		
		JumpCall(true, (BYTE*)SpawnControl, (void*)&SpawnControlCave, (BYTE*)&SCBuff[0], 0);
		memset((void*)(SpawnControl+5),0x90,1);
	}
	else
	{
		memcpy((void*)SpawnControl,SpawnControlOriginal,sizeof(SpawnControlOriginal)); 
	}
}


//Spawn Control COORDS------------------------------------------------------------
void Form2::checkBox55_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
 {
	if(this->checkBox55->Checked)
	{
		SpawnX = Convert::ToInt32(textBox14->Text);
		SpawnY = Convert::ToInt32(textBox15->Text);		
		JumpCall(true, (BYTE*)SpawnControl, (void*)&SpawnControlCave, (BYTE*)&SCBuff[0], 0);
		memset((void*)(SpawnControl+5),0x90,1);
	}
	else
	{
		memcpy((void*)SpawnControl,SpawnControlOriginal,sizeof(SpawnControlOriginal)); 
	}
}
#pragma endregion WORKS v98.0
#pragma region Safe UA by m1sniper
//Safe Unlimited Attack
//Dave(m1sniper)
//gMS v98.0
//GameKiller.net

void __declspec(naked) SUAcodecave()
{
        __asm
        {
			push ebx
			mov ebx,[CharBase]
			mov ebx,[ebx]
			mov ebx,[ebx+AttackCount]
			cmp ebx,suacount
			jge increaseX
			pop ebx
			mov [eax],edi
			pop edi
			mov [eax+0x04],ecx
			jmp SUAreturn


			increaseX:
			pop ebx
			mov [eax],edi
			add [eax],0x08
			pop edi
			mov [eax+0x04],ecx
			jmp SUAreturn

			SUAreturn:
			mov [eax],edi
			pop edi
			mov [eax+0x04],ecx
			jmp dword ptr [SUAReturn]
        }
}
     
        BYTE SCSBuffer[6];
void Form2::checkBox63_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
    {
		MakePageWritable(SUAaddy, 6);
        if(this->checkBox63->Checked)
        {
				suacount = Convert::ToInt32(this->textBox11->Text);
                JumpCall(true, (BYTE*)SUAaddy, (void*)&SUAcodecave, (BYTE*)&SCSBuffer[0], 0);
				memset((void*)(SUAaddy+5),0x90,1);
           
        }
        else
        {
                memcpy((void*)SUAaddy,SUAOriginal,sizeof(SUAOriginal));
        }
}


#pragma endregion Currently Crashes
#pragma region 7 Miss Godmode
void __declspec(naked) SevenMisscodecave()
{
        __asm
        {
			inc [bMiss + 0x32]
			cmp dword ptr [bMiss + 0x32], 07 //Miss Amount
			jg miss_reset
			mov [esp+0x000000CC], 00 // Dmg
			jmp miss_ret

			miss_reset:
			mov [bMiss + 0x32], 00
			jmp miss_ret

			miss_ret:
			mov ebx,[esp+0x000000CC]
			jmp dword ptr [SevenMissReturn]
        }
}
     
        BYTE SMBuffer[7];
void Form2::checkBox64_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
		MakePageWritable(SevenMissAddy, 7);
		MakePageWritable(NoKB, 1);
        if(this->checkBox64->Checked)
        {
                JumpCall(true, (BYTE*)SevenMissAddy, (void*)&SevenMisscodecave, (BYTE*)&SMBuffer[0], 0);
				memset((void*)(SevenMissAddy+5),0x90,2);
				WriteMemory(NoKB, 1, 0x00);
        }
        else
        {
                memcpy((void*)SevenMissAddy,SevenMissOriginal,sizeof(SevenMissOriginal));
				WriteMemory(NoKB, 1, 0x01);
        }
}
#pragma endregion 
#pragma region DupeX
	DWORD DupeXAddy = 0x009BFC60; //AOB: 89 BE ? ? ? ? 89 8E ? ? ? ? 8B 86 ? ? ? ? 3B C1 74 5B
    DWORD DupeXReturn = DupeXAddy + 6;  
    BYTE DupeXOriginal[] = {0x89, 0xBE, 0xA4, 0x01, 0x00, 0x00};
	DWORD Platform = 0, RunFlag = 0, weakplatform = 0;
#pragma region Strong DupeX
	void __declspec(naked) DupeXCodeCaveStrong()
{
        __asm
        {
			pushfd
			push eax
			push ecx
			mov eax,[CharBase] // Char Base
			test eax,eax
			je NullPlat
			mov eax,[eax+PID] // Char pID
			lea ecx,[eax-0x0c]
			test ecx,ecx
			je NullPlat
			mov eax,[ecx+0x000001A4]
			test eax,eax
			je NullPlat
			cmp [RunFlag],0x01
			je DoVac
			mov [Platform],eax
			inc [RunFlag]
			jmp DoVac
 
			DoVac:
			cmp esi,ecx
			je Normal
			mov edi,[Platform]
			jmp Normal
 
			NullPlat:
			mov [Platform],0x00
			mov [RunFlag],0x00
			jmp Normal

			Normal:
			pop ecx
			pop eax
			popfd
			mov [esi+0x000001A4],edi
			jmp dword ptr [DupeXReturn]
			
        }
}
#pragma endregion
#pragma region Weak DupeX
	void __declspec(naked) DupeXCodeCaveWeak()
{
        __asm
		{
		test [weakplatform],0xFFFFFFFF // //Unrandomize Platform, you can edit if you want.
		jnz finish
		mov [weakplatform],edi

		finish:
		mov edi,[weakplatform]
		mov [esi+0x000001A4],edi
		jmp DupeXNormal
 
		DupeXNormal:
		mov [esi+0x000001A4],edi
		jmp dword ptr [DupeXReturn]
        }
}
#pragma endregion
        BYTE DXBuffer[6];
void Form2::checkBox66_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
		MakePageWritable(DupeXAddy, 6);
		if(this->checkBox66->Checked)
		{
			if(radioButton3->Checked == true) //Weak
			{
				JumpCall(true, (BYTE*)DupeXAddy, (void*)&DupeXCodeCaveWeak, (BYTE*)&DXBuffer[0], 0);
				memset((void*)(DupeXAddy+5),0x90,1);
			}
			if(radioButton4->Checked == true) // Strong
			{
				JumpCall(true, (BYTE*)DupeXAddy, (void*)&DupeXCodeCaveStrong, (BYTE*)&DXBuffer[0], 0);
				memset((void*)(DupeXAddy+5),0x90,1);
			}
			if((radioButton3->Checked == false) && (radioButton4->Checked == false))
			{
				::MessageBox(NULL, "You need to choose either version of DupeX, v1 (Weak) or v2 (Strong)!",  "Error!", MB_ICONEXCLAMATION|MB_OK); 
				checkBox66->Checked = false;
			}
		}
		else
		{
			memcpy((void*)DupeXAddy,DupeXOriginal,sizeof(DupeXOriginal));			
		}
}
#pragma endregion