//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Admin2.h"

#include<fstream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyAdmin2 *myAdmin2;
//---------------------------------------------------------------------------
__fastcall TmyAdmin2::TmyAdmin2(TComponent* Owner)
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
void __fastcall TmyAdmin2::updateButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("bloodgroup.txt",ios::in);

	if(myFile.is_open()){
		string line;

		getline(myFile,line);
		vector<int> bg=conversion(line);

		op->Text=bg[0];
		ap->Text=bg[1];
		bp->Text=bg[2];
		abp->Text=bg[3];
		on->Text=bg[4];
		an->Text=bg[5];
		bn->Text=bg[6];
		abn->Text=bg[7];
		myFile.close();
	}

}
//---------------------------------------------------------------------------

