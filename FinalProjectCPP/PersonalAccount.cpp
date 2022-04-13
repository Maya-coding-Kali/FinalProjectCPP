#include "PersonalAccount.h"// This class is 
#include "pch.h"
PersonalAccount::PersonalAccount()
{
	 AccountNumber= 0;
	 Accounttype = (char*) "";// (Credit card, Line of credit, checking, saving)
	 Balance = 0;
	 beneficiaryFirstName = (char*)"";
	 beneficiaryLastName = (char*)"";
	 Phone = (char*)"";
	 email = (char*)"";
}
PersonalAccount::PersonalAccount(int VAccountNumber, double VBalance, char*  VAccounttype, char* VbeneficiaryFirstName, char* VbeneficiaryLastName, char* VPhone, char* Vemail)
{
	AccountNumber = VAccountNumber;
	Accounttype = VAccounttype;// (Credit card, Line of credit, checking, saving)
	Balance = VBalance;
	beneficiaryFirstName = VbeneficiaryFirstName;
	beneficiaryLastName = VbeneficiaryLastName;
	Phone = VPhone;
	email = Vemail;
}

PersonalAccount::~PersonalAccount()//deconstructor
{
}
//Accounttype Get and set 


void PersonalAccount::SetAccounttype(char* VAccounttype)
{
	Accounttype = VAccounttype;
}

char* PersonalAccount::GetAccounttype()
{
	return Accounttype;
}
//beneficiary First Name Get and set 


void PersonalAccount::SetbeneficiaryFirstName(char* VbeneficiaryFirstName)
{
	beneficiaryFirstName = VbeneficiaryFirstName;
}

char* PersonalAccount::GetbeneficiaryFirstName()
{
	return beneficiaryFirstName;
}
//Street Type Get and set

void PersonalAccount::SetbeneficiaryLastName(char* VbeneficiaryLastName)// This will set the value
{
	beneficiaryLastName = VbeneficiaryLastName;
}

char* PersonalAccount::GetbeneficiaryLastName()// This will Get the value that you or your user has previously set
{
	return beneficiaryLastName;
}
//Phone name Get and set

void PersonalAccount::SetPhone(char* VPhone)
{
	Phone = VPhone;
}

char* PersonalAccount::GetPhone()
{
	return Phone;
}


//email Get and set

void PersonalAccount::Setemail(char* Vemail)// This will set the value of Email
{
	email = Vemail;
}

char* PersonalAccount::Getemail()// This will Get the value that you or your user has previously set
{
	return email;
}

//AccountNumber Get and set


void PersonalAccount::SetAccountNumber(int VAccountNumber)// This will set the value of AccountNumber
{
	AccountNumber = VAccountNumber;
}
int PersonalAccount::GetAccountNumber()// This will Get the value that you or your user has previously set
{
	return AccountNumber;
}

//PostalCode Get and set


void PersonalAccount::SetBalance( double VBalance)// This will set the value of Balance
{
	Balance = VBalance;
}

double PersonalAccount::GetBalance()// This will Get the value that you or your user has previously set
{
	return Balance;
}
void PersonalAccount::SetBranchID(int VBranchID)
{
	BranchID = VBranchID;
}
int PersonalAccount::GetBranchID()
{
	return BranchID;
}
void PersonalAccount::SetCanadianAddress(char* VCanadianAddress)
{
	CanadianAddress = VCanadianAddress;
}
char* PersonalAccount::GetCanadianAddress()
{
	return CanadianAddress;
}
