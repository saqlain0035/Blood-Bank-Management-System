//---------------------------------------------------------------------------

#ifndef PatientH
#define PatientH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyPatient : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *bgEdit;
	TEdit *packetEdit;
	TButton *patientButton;
	TLabel *patientMessage;
	void __fastcall patientButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyPatient(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyPatient *myPatient;
//---------------------------------------------------------------------------
#endif
