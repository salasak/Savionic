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
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;



BOOL InjectDLL(DWORD dwPID, char* strHookDLL)
{
	if (LoadLibrary(strHookDLL))
		return TRUE;

	return FALSE;
}

DWORD GetProcessID(char* strProcessName)
{
		DWORD id;
        HWND hProcWnd = FindProcessWindow( "MapleStoryClass", GetCurrentProcessId() ); //Find class window

        GetWindowThreadProcessId(hProcWnd, &id);
		return id;
}

void DllInjectionFunctionDiag(char* TitleForDiag)
{
	char strHookPath[128] = "";		//** Will hold the path to the previously used hook DLL
	char strBuffer0[128] = "MapleStory.exe";		//** Random buffer we can use here and there
	HINSTANCE g_hInstance = NULL;
	OPENFILENAME ofOpenFile;

	//** Initialize ofOpenFile
	ZeroMemory(&ofOpenFile, sizeof(ofOpenFile));
	ofOpenFile.lStructSize = sizeof(ofOpenFile);
	ofOpenFile.hInstance =  g_hInstance;
	ofOpenFile.lpstrFile = strHookPath;

	ofOpenFile.lpstrFile[0] = '\0';
	ofOpenFile.nMaxFile = sizeof(strHookPath);
	ofOpenFile.lpstrFilter = "DLL Files (*.dll)\0*.dll\0";	//** Filter
	ofOpenFile.nFilterIndex = 1;
	ofOpenFile.lpstrFileTitle = NULL;
	ofOpenFile.nMaxFileTitle = 0;
	ofOpenFile.lpstrInitialDir = NULL;
	ofOpenFile.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY; //** Flags
	ofOpenFile.lpstrTitle = TitleForDiag;

	if(GetOpenFileName(&ofOpenFile) == TRUE) //** User hit OK
	{
		if( InjectDLL(GetProcessID(strBuffer0), strHookPath) == TRUE)
		{
			MessageBox(0, "Injection Succeeded", "Succeeded", MB_OK);
		}
		else
		{
			MessageBox(0, "Injection Failed", "Failed", MB_OK);
		}
	}
}

void DllInjectionFunction(char strHookPath[128])
{
	char strBuffer0[128] = "MapleStory.exe";		//** Random buffer we can use here and there

	if( InjectDLL(GetProcessID(strBuffer0), strHookPath) == TRUE)
	{
		MessageBox(0, "Injection Succeeded", "Succeeded", MB_OK);
	}
	else
	{
		MessageBox(0, "Injection Failed", "Failed", MB_OK);
	}
}