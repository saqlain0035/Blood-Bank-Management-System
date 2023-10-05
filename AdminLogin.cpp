//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdminLogin.h"
#include "Admin2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyAdminLogin *myAdminLogin;
//---------------------------------------------------------------------------
__fastcall TmyAdminLogin::TmyAdminLogin(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------
void __fastcall TmyAdminLogin::adminLoginButtonClick(TObject *Sender)
{
	AnsiString name=adminUsernameEdit->Text;
	char* username=name.c_str();

	AnsiString pass=adminPasswordEdit->Text;
	char* password=pass.c_str();

	if(strcmp(username,"admin")==0 && (strcmp(password,"admin123")==0)){
		adminMessageLabel->Text="Sucess!";
		myAdmin2->Show();
        this->Close();
	}
	else
		adminMessageLabel->Text="Wrong Input!";
}
//---------------------------------------------------------------------------

