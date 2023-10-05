//---------------------------------------------------------------------------

#ifndef DonorH
#define DonorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyDonor : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *bgEdit;
	TEdit *packetEdit;
	TButton *donorButton;
	TLabel *donorMessage;
	void __fastcall donorButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyDonor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyDonor *myDonor;
//---------------------------------------------------------------------------
#endif
