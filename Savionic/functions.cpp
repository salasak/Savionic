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
#include <Windows.h>
#include "functions.h"

using namespace std;

DWORD dwOldProtect;

void MakePageWritable(unsigned long ulAddress, unsigned long ulSize)
{
    MEMORY_BASIC_INFORMATION* mbi = new MEMORY_BASIC_INFORMATION;
    VirtualQuery((void*)ulAddress, mbi, ulSize);
    if (mbi->Protect != PAGE_EXECUTE_READWRITE)
    {
        unsigned long* ulProtect = new unsigned long;
        VirtualProtect((void*)ulAddress, ulSize, PAGE_EXECUTE_READWRITE, ulProtect);
      delete ulProtect;
    }
   delete mbi;
}

void WriteMemory( unsigned long ulAddress, unsigned char ucAmount, ...)  
{
	VirtualProtect((void*)ulAddress, ucAmount, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	va_list* va = new va_list;
	va_start(*va, ucAmount);

	for (unsigned char ByteToWrite = va_arg(*va, unsigned char), ucIndex = 0; ucIndex < ucAmount; ucIndex++, ByteToWrite = va_arg(*va, unsigned char))
	{
		*(unsigned char*)(ulAddress + ucIndex) = ByteToWrite;
	}
	va_end(*va);
	delete va;
	VirtualProtect((void*)ulAddress, ucAmount, dwOldProtect, &dwOldProtect);
}

void Jump(unsigned long ulAddress, void* Function,  unsigned Nops)
{
	VirtualProtect((void*)ulAddress, Nops + 5, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	*(unsigned char*)ulAddress = 0xE9;
	*(unsigned long*)(ulAddress + 1) = jmp(ulAddress, Function);
	memset((void*)(ulAddress + 5), 0x90, Nops); 
	VirtualProtect((void*)ulAddress, Nops + 5, dwOldProtect, &dwOldProtect);
}

bool WritePointer(unsigned long ulBase, int iOffset, int iValue)
{
   __try { *(int*)(*(unsigned long*)ulBase + iOffset) = iValue; return true; }
   __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}

__inline DWORD WriteValue(DWORD dwBase, int iOffset, int iValue)
{
   if (!IsBadReadPtr((void*)(dwBase + iOffset), 4))
   {
		*(int*)(dwBase + iOffset) = iValue;
   }
   return 0;
}

unsigned long GetPointedAddress(ULONG_PTR* ulBase, int iOffset) 
{ 
   __try { return *(unsigned long*)ulBase + iOffset; } 
   __except (EXCEPTION_EXECUTE_HANDLER) { return 0; } 
}

void Call(DWORD dwAddress,  VOID* CodeCave, INT Nops)
{
	VirtualProtect((void*)dwAddress, Nops + 5, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	*(BYTE*)dwAddress = 0xE8;
	*(DWORD*)(dwAddress+1) = jmp(dwAddress,CodeCave);
	memset((void*)(dwAddress+5),0x90,Nops);
	VirtualProtect((void*)dwAddress, Nops + 5, dwOldProtect, &dwOldProtect);
}


__inline DWORD_PTR jmpcall(LPCVOID lpcvSrc, LPCVOID lpcvDest)
{
    return reinterpret_cast<DWORD_PTR>(lpcvDest) - reinterpret_cast<DWORD_PTR>(lpcvSrc) - 5;
}

bool MakePageRWX(LPCVOID lpcvMemory)
{
    MEMORY_BASIC_INFORMATION mbiInfo;
    SecureZeroMemory(&mbiInfo, sizeof(MEMORY_BASIC_INFORMATION));

    if (VirtualQuery(lpcvMemory, &mbiInfo, sizeof(mbiInfo)) == 0)
        return false;

    if (mbiInfo.Protect != PAGE_EXECUTE_READWRITE)
    {
        DWORD dwProtect = 0;
        return (VirtualProtect(const_cast<LPVOID>(lpcvMemory), mbiInfo.RegionSize, PAGE_EXECUTE_READWRITE, &dwProtect) != FALSE);
    }

    return true;
}

bool JumpCall(bool fJump, const LPBYTE lpbAddress, LPCVOID lpcvHook, const LPBYTE lpbBuffer, size_t cNops)
{
	VirtualProtect((void*)lpbAddress, 5, PAGE_EXECUTE_READWRITE, &dwOldProtect);

	if (lpbBuffer != NULL)
	memcpy(reinterpret_cast<void*>(lpbBuffer), reinterpret_cast<const void*>(lpbAddress), cNops + 5);

	*lpbAddress = (fJump ? 0xE9 : 0xE8);
	*reinterpret_cast<LPDWORD>(lpbAddress + 1) = jmpcall(lpbAddress, lpcvHook);

	if (cNops)
	memset(reinterpret_cast<void*>(lpbAddress + 5), 0x90, cNops);

	VirtualProtect((void*)lpbAddress, 5, dwOldProtect, &dwOldProtect);
	return true;
}
