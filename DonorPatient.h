//---------------------------------------------------------------------------

#ifndef DonorPatientH
#define DonorPatientH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyDonorPatient : public TForm
{
__published:	// IDE-managed Components
	TButton *donorEdit;
	TButton *patientEdit;
	void __fastcall donorEditClick(TObject *Sender);
	void __fastcall patientEditClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyDonorPatient(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyDonorPatient *myDonorPatient;
//---------------------------------------------------------------------------
#endif
