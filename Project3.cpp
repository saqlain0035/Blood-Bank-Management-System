//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("MainForm.cpp", MyMainForm);
USEFORM("RegistrationForm.cpp", MyRegistrationForm);
USEFORM("LoginForm.cpp", MyLoginForm);
USEFORM("Admin2.cpp", myAdmin2);
USEFORM("AdminLogin.cpp", myAdminLogin);
USEFORM("Donor.cpp", myDonor);
USEFORM("DonorPatient.cpp", myDonorPatient);
USEFORM("Patient.cpp", myPatient);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TMyMainForm), &MyMainForm);
		Application->CreateForm(__classid(TMyLoginForm), &MyLoginForm);
		Application->CreateForm(__classid(TMyRegistrationForm), &MyRegistrationForm);
		Application->CreateForm(__classid(TmyDonorPatient), &myDonorPatient);
		Application->CreateForm(__classid(TmyAdminLogin), &myAdminLogin);
		Application->CreateForm(__classid(TmyAdmin2), &myAdmin2);
		Application->CreateForm(__classid(TmyDonor), &myDonor);
		Application->CreateForm(__classid(TmyPatient), &myPatient);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
