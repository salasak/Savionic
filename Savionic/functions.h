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
#include <string>
#include <time.h>
#include <tchar.h>
#include <stdio.h>
#include <algorithm>

//Determines the displacement of a long jump or a call
#define jmp(frm, to) (int)(((int)to - (int)frm) - 5)

using namespace std;

__inline DWORD WriteValue(DWORD dwBase, int iOffset, int iValue);
__inline DWORD_PTR jmpcall(LPCVOID lpcvSrc, LPCVOID lpcvDest);

void MakePageWritable(unsigned long ulAddress, unsigned long ulSize);
void WriteMemory( unsigned long ulAddress, unsigned char ucAmount, ...);
void Jump(unsigned long ulAddress, void* Function,  unsigned Nops);
void Call(DWORD dwAddress,  VOID* CodeCave, INT Nops);

bool WritePointer(unsigned long ulBase, int iOffset, int iValue);
bool MakePageRWX(LPCVOID lpcvMemory);
bool JumpCall(bool fJump, const LPBYTE lpbAddress, LPCVOID lpcvHook, const LPBYTE lpbBuffer, size_t cNops);

unsigned long GetPointedAddress(ULONG_PTR* ulBase, int iOffset) ;


__inline DWORD GetValue(DWORD ulBase, INT nOffset)
{
	if (!IsBadReadPtr((void*)(ulBase + nOffset), 4))
	{
		return *(DWORD*)(ulBase + nOffset);
	}
	return 0;
}

__inline ULONG_PTR ReadPointer(ULONG_PTR* ulBase, INT nOffset)
{
   if ( !IsBadReadPtr((VOID*)ulBase, sizeof(ULONG_PTR)) )
        if ( !IsBadReadPtr((VOID*)((*(ULONG_PTR*)ulBase)+nOffset), sizeof(ULONG_PTR)) )
            return *(ULONG_PTR*)((*(ULONG_PTR*)ulBase)+nOffset);
	return 0;
}
