//---------------------------------------------------------------------------

#ifndef AdminLoginH
#define AdminLoginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyAdminLogin : public TForm
{
__published:	// IDE-managed Components
	TEdit *adminUsernameEdit;
	TLabel *Label1;
	TEdit *adminPasswordEdit;
	TLabel *Label2;
	TButton *adminLoginButton;
	TLabel *messageLabel;
	TLabel *adminMessageLabel;
	void __fastcall adminLoginButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyAdminLogin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyAdminLogin *myAdminLogin;
//---------------------------------------------------------------------------
#endif
