//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Donor.h"

#include<fstream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyDonor *myDonor;
//---------------------------------------------------------------------------
__fastcall TmyDonor::TmyDonor(TComponent* Owner)
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
//---------------------------------------------------------------------------
void __fastcall TmyDonor::donorButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("bloodgroup.txt",ios::in);

	if(myFile.is_open()){
		string line;

		getline(myFile,line);
		vector<int> bg=conversion(line);

		AnsiString bgType=bgEdit->Text;
		AnsiString bgPackets=packetEdit->Text;
		int bgPack=stoi(bgPackets.c_str());

		if(bgType=="O+")
			bg[0]+=bgPack;
		else if(bgType=="A+")
			bg[1]+=bgPack;
		else if(bgType=="B+")
			bg[2]+=bgPack;
		else if(bgType=="AB+")
			bg[3]+=bgPack;
		else if(bgType=="O-")
			bg[4]+=bgPack;
		else if(bgType=="A-")
			bg[5]+=bgPack;
		else if(bgType=="B-")
			bg[6]+=bgPack;
		else if(bgType=="AB-")
			bg[7]+=bgPack;
		else
			donorMessage->Text="Wrong Input!";

		myFile.close();

        myFile.open("bloodgroup.txt",ios::out);

	if(myFile.is_open()){

		for(int i=0;i<8;i++){
			myFile<<bg[i];
			if(i!=7)
				myFile<<',';
		}
		myFile.close();
		donorMessage->Text="Data Updated Sucessfully!";
	}
	}

}
//---------------------------------------------------------------------------

