//---------------------------------------------------------------------------

#ifndef Admin2H
#define Admin2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyAdmin2 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *op;
	TLabel *Label2;
	TLabel *ap;
	TLabel *Label4;
	TLabel *bp;
	TLabel *Label6;
	TLabel *abp;
	TLabel *Label8;
	TLabel *on;
	TLabel *Label10;
	TLabel *an;
	TLabel *Label12;
	TLabel *bn;
	TLabel *Label14;
	TLabel *abn;
	TButton *updateButton;
	void __fastcall updateButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyAdmin2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyAdmin2 *myAdmin2;
//---------------------------------------------------------------------------
#endif
