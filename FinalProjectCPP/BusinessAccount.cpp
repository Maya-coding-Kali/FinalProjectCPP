#include "BusinessAccount.h"// This class is 
#include "pch.h"
BusinessAccount::BusinessAccount()
{
	AccountNumber = 0;
	Accounttype = (char*)"";// (Credit card, Line of credit, checking, saving)
	Balance = 0;
	businessName = (char*)"";
	DBA = (char*)"";
	Phone = (char*)"";
	email = (char*)"";


}
BusinessAccount::BusinessAccount(int VAccountNumber, double VBalance, char* VAccounttype, char* VbusinessName, char* VDBA, char* VPhone, char* Vemail)
{
	AccountNumber = VAccountNumber;
	Accounttype = VAccounttype;// (Credit card, Line of credit, checking, saving)
	Balance = VBalance;
	businessName = VbusinessName;
	DBA = VDBA;
	Phone = VPhone;
	email = Vemail;
}

BusinessAccount::~BusinessAccount()//deconstructor
{
}
//Accounttype Get and set 


void BusinessAccount::SetAccounttype(char* VAccounttype)
{
	Accounttype = VAccounttype;
}

char* BusinessAccount::GetAccounttype()
{
	return Accounttype;
}
//beneficiary First Name Get and set 


void BusinessAccount::SetbusinessName(char* VbusinessName)
{
	businessName = VbusinessName;
}

char* BusinessAccount::GetbusinessName()
{
	return businessName;
}
//Street Type Get and set

void BusinessAccount::SetDBA(char* VDBA)// This will set the value
{
	DBA = VDBA;
}

char* BusinessAccount::GetDBA()// This will Get the value that you or your user has previously set
{
	return DBA;
}
//Phone name Get and set

void BusinessAccount::SetPhone(char* VPhone)
{
	Phone = VPhone;
}

char* BusinessAccount::GetPhone()
{
	return Phone;
}


//email Get and set

void BusinessAccount::Setemail(char* Vemail)// This will set the value of Email
{
	email = Vemail;
}

char* BusinessAccount::Getemail()// This will Get the value that you or your user has previously set
{
	return email;
}

//AccountNumber Get and set


void BusinessAccount::SetAccountNumber(int VAccountNumber)// This will set the value of AccountNumber
{
	AccountNumber = VAccountNumber;
}
int BusinessAccount::GetAccountNumber()// This will Get the value that you or your user has previously set
{
	return AccountNumber;
}

//PostalCode Get and set


void BusinessAccount::SetBalance(double VBalance)// This will set the value of Balance
{
	Balance = VBalance;
}

double BusinessAccount::GetBalance()// This will Get the value that you or your user has previously set
{
	return Balance;
}
void BusinessAccount::SetBranchID(int VBranchID)
{
	BranchID = VBranchID;
}
int BusinessAccount::GetBranchID()
{
	return BranchID;
}
void BusinessAccount::SetCanadianAddress(char* VCanadianAddress)
{
	CanadianAddress = VCanadianAddress;
}
char* BusinessAccount::GetCanadianAddress()
{
	return CanadianAddress;
}