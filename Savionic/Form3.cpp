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
#include "Form3.h"
#include <Windows.h>
#include "windows.h"
#include <string>
#include <time.h>
#include <tchar.h>
#include <stdio.h>
#include <algorithm>

using namespace Savionic;
using namespace std;

bool InjectedSuccessfully;
char strHookPath[128] = "";





// DLL INJECTOR

//If Injection Succeeded
void InjectionSucceeded()
{
	InjectedSuccessfully = true;
}

//If Injection Failed
void InjectionFailed()
{
	InjectedSuccessfully = false;
}

//Finds Process Window
HWND WINAPI FindProcWindow ( __in_z LPCSTR lpcszWindowClass, __in DWORD dwProcessId )
{
	DWORD	dwWindowId;
	CHAR	pszClassName[200];
	HWND 	hWnd;
	
	hWnd = GetTopWindow (NULL);
	
	while ( hWnd != NULL )
	{
		if ( GetClassName (FindWindowA("MapleStoryClass", NULL), pszClassName, 200) > 0)
			if ( lstrcmpiA (lpcszWindowClass, pszClassName) == 0)
				if ( GetWindowThreadProcessId (FindWindowA("MapleStoryClass", NULL), &dwWindowId) )
					if ( dwWindowId == dwProcessId )
						return hWnd;
		
		hWnd = GetNextWindow ( hWnd, GW_HWNDNEXT );
	}
	return NULL;
}

//Injects The DLL
BOOL InjectTheDLL(DWORD dwPID, char* strHookDLL)
{
	if (LoadLibrary(strHookDLL))
		return TRUE;

	return FALSE;
}

//Gets Process ID
DWORD GetProcID(char* strProcessName)
{
		DWORD id;
        HWND hProcWnd = FindProcWindow( "MapleStoryClass", GetCurrentProcessId() ); //Find class window

        GetWindowThreadProcessId(hProcWnd, &id);
		return id;


}

//Whole Injection Function
void DllInjectionFunctionA(char strHookPath[128])
{
	char strBuffer0[128] = "MapleStory.exe";		//** Random buffer we can use here and there

		if( InjectTheDLL(GetProcID(strBuffer0), strHookPath) == TRUE)
		{
			InjectionSucceeded();
		}
		else
		{
			InjectionFailed();
		}
}

//Browse (File Dialog)
void Form3::button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	//GUI Changes
	this->label2->Text = "No Item Selected";
	this->label2->ForeColor = System::Drawing::Color::White;
	this->pictureBox1->Visible = false;
	this->pictureBox2->Visible = false;
	this->textBox1->Text = "";

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
	ofOpenFile.lpstrTitle = "Open\0";

	if(GetOpenFileName(&ofOpenFile) == TRUE) //** User hit OK
	{
		String ^ActualPath = gcnew String( strHookPath );
		this->textBox1->Text = ActualPath;
		this->label2->Text = "Ready to inject";
	}
}

//Inject
void Form3::button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(this->textBox1->Text == "")
	{
		MessageBoxA(NULL, "You have not selected a file.", "No File", MB_OK | MB_SETFOREGROUND);
	}
	else
	{
		DllInjectionFunctionA(strHookPath);

		if(InjectedSuccessfully == true)
		{
			this->label2->Text = "Injection Succeeded";
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->pictureBox1->Visible = true;
			this->pictureBox2->Visible = false;
			Beep(980, 250);
		}
		else
		{
			this->label2->Text = "Injection Failed";
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->pictureBox2->Visible = true;
			this->pictureBox1->Visible = false;
			Beep(300, 250);
		}
	}
}