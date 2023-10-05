//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Patient.h"

#include<fstream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyPatient *myPatient;
//---------------------------------------------------------------------------
__fastcall TmyPatient::TmyPatient(TComponent* Owner)
	: TForm(Owner)
{
}

vector<int> conversion(string line){
	vector<int> result;
	stringstream s_stream(line);

	while(s_stream.good()){
		string substr;
		getline(s_stream,substr,',');
		int i=stoi(substr);
		result.push_back(i);
	}
	return result;
}

void func(vector<int> bg){

	fstream myFile;
	myFile.open("bloodgroup.txt",ios::out);

	if(myFile.is_open()){

		for(int i=0;i<8;i++){
			myFile<<bg[i];
			if(i!=7)
				myFile<<',';
		}
		myFile.close();
	}
}
//---------------------------------------------------------------------------
void __fastcall TmyPatient::patientButtonClick(TObject *Sender)
{
    fstream myFile;
	myFile.open("bloodgroup.txt",ios::in);

	if(myFile.is_open()){
		string line;

		string message="Data Updated Sucessfully";

		getline(myFile,line);
		vector<int> bg=conversion(line);

		AnsiString bgType=bgEdit->Text;
		AnsiString bgPackets=packetEdit->Text;
		int bgPack=stoi(bgPackets.c_str());

		if(bgType=="O+" && bgPack<=bg[0]){
			bg[0]-=bgPack;
			func(bg);
			patientMessage->Text=message.c_str();
		}
		else if(bgType=="A+" && bgPack<=bg[1]){
			bg[1]-=bgPack;
			func(bg);
			patientMessage->Text=message.c_str();
		}
		else if(bgType=="B+" && bgPack<=bg[2]){
			bg[2]-=bgPack;
			func(bg);
			patientMessage->Text=message.c_str();
		}
		else if(bgType=="AB+" && bgPack<=bg[3]){
			bg[3]-=bgPack;
			func(bg);
			patientMessage->Text=message.c_str();
		}
		else if(bgType=="O-" && bgPack<=bg[4]){
			bg[4]-=bgPack;
			func(bg);
			patientMessage->Text=message.c_str();
		}
		else if(bgType=="A-" && bgPack<=bg[5]){
			bg[5]-=bgPack;
			func(bg);
			patientMessage->Text=message.c_str();
		}
		else if(bgType=="B-" && bgPack<=bg[6]){
			bg[6]-=bgPack;
			func(bg);
			patientMessage->Text=message.c_str();
		}
		else if(bgType=="AB-" && bgPack<=bg[7]){
			bg[7]-=bgPack;
			func(bg);
			patientMessage->Text=message.c_str();
        }
		else
			patientMessage->Text="Required Bloodgroup not available!";

		myFile.close();
	}
}
//---------------------------------------------------------------------------

