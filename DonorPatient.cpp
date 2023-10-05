//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "DonorPatient.h"
#include "Donor.h"
#include "Patient.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyDonorPatient *myDonorPatient;
//---------------------------------------------------------------------------
__fastcall TmyDonorPatient::TmyDonorPatient(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TmyDonorPatient::donorEditClick(TObject *Sender)
{
	myDonor->Show();
	this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TmyDonorPatient::patientEditClick(TObject *Sender)
{
	myPatient->Show();
	this->Close();
}
//---------------------------------------------------------------------------

