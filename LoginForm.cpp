//---------------------------------------------------------------------------

#include <fmx.h>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
using namespace std;

#pragma hdrstop

#include "LoginForm.h"
#include "DonorPatient.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
__fastcall TMyLoginForm::TMyLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}

vector<string> parseCommaDelimitedString(string line){
	vector<string> result;
	stringstream s_stream(line);

	while(s_stream.good()){
		string substr;
		getline(s_stream,substr,',');
		result.push_back(substr);
	}
	return result;
}

//---------------------------------------------------------------------------
void __fastcall TMyLoginForm::loginButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("registeredUsers.txt",ios::in);

	if(myFile.is_open()){
		string line;

		while(getline(myFile,line)){
			vector<string> parseLine=parseCommaDelimitedString(line);
			const char* username=parseLine.at(2).c_str();

			AnsiString editUsername=usernameEdit->Text;
			const char* usernameString=editUsername.c_str();

			if(strcmp(username,usernameString)==0){
				const char* password=parseLine.at(3).c_str();

				AnsiString editPassword=passwordEdit->Text;
				const char* passwordString=editPassword.c_str();

				if(strcmp(password,passwordString)==0){
					messageLabel->Text="Success!";
					myDonorPatient->Show();
                    this->Close();
				}
				else
					messageLabel->Text="Wrong Password!";
			}
		}
	}
}
//---------------------------------------------------------------------------
