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
#include <windows.h>
extern void Main(void);

void WINAPI MainThread( )//Create External Message
{
    Main();
}
HWND FindProcessWindow()
{
  TCHAR szBuffer[200];
  DWORD dwTemp;

  for (HWND hWnd = GetTopWindow(NULL); hWnd != NULL; hWnd = GetNextWindow(FindWindowA("MapleStoryClass", NULL), GW_HWNDNEXT))
  {
	if (!GetClassName(FindWindowA("MapleStoryClass", NULL), szBuffer, 200))
	  continue;

	if (strcmp(szBuffer, "MapleStoryClass") != 0)
	  continue;

	GetWindowThreadProcessId(FindWindowA("MapleStoryClass", NULL), &dwTemp);

	if (dwTemp == GetCurrentProcessId())
	  return hWnd;
  }

  return NULL;
}


::BOOL WINAPI DllWork (__in ::HMODULE hModule )
{
	Main();
	return true;
}

::BOOL WINAPI DllMain ( __in ::HMODULE hModule, __in ::DWORD dwReason, __in __reserved ::LPVOID lpvReserved )
{
	::HANDLE hThread = NULL;

	if ( dwReason == DLL_PROCESS_ATTACH ) 
	{
		if (( hThread = ::CreateThread(NULL, 0, (::LPTHREAD_START_ROUTINE)&DllWork, (::HMODULE)hModule, 0, NULL) ) == NULL ) 
		{
			return FALSE;
		}
		if ( ::CloseHandle(hThread) == FALSE )
		{
                    
		}
	}
	return TRUE;
}
