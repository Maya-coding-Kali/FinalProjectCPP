// FinalProjectCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bank.h"
#include "PersonalStatement.h"
#include "PersonalAccount.h"
#include "BusinessAccount.h"
#include "BusinessStatement.h"
#include "CanadianAddress.h"
#include "Branch.h"
using namespace std;


int main()
{
	
	
	char* input = (char*) "";
	int BranchID = 0;

	//Setting up the bank objects
	Bank Bankobj;
	Bankobj.SetVInstitutionID(85);
	cout << "Bank Number is:"<< Bankobj.GetVInstitutionID()<<endl;
	Bankobj.SetName((char*)"Awsome Bank");
	cout<<"Bankobj Name is:"<< Bankobj.GetName()<<endl;
	Bankobj.SetForLoopBranches();


	//Setting up the Branch objects
	Branch BranchObj;
	BranchObj.SetBranchID(3);
	cout << "\nBranch Number is:" << BranchObj.GetBranchID() << endl;
	BranchObj.SetCanadianAddress((char*)"123 Fake Street");
	cout << "Branch Number is:" << BranchObj.GetCanadianAddress() << endl << endl;
	cout << "operator overloaded in" << endl;
	cin >> BranchObj;
	cout << "operator overloaded out" << endl;
	cout << BranchObj;

	//Setting up the Bussiness account
	BusinessAccount BAccount, BAccount2;

	BAccount.SetCanadianAddress((char*)"7510 uber ave");
	BAccount.SetBranchID(88);
	// Account type (Credit card, Line of credit, checking, saving)
	BAccount.SetAccounttype((char*)"Savings");
	cout << "Account type:" << BAccount.GetAccounttype() << endl;
	//businessName
	BAccount.SetbusinessName((char*)"Super fly BUSSINESS");
	cout << "Business Name is:" << BAccount.GetbusinessName() << endl;
	//DBA
	BAccount.SetDBA((char*)"Bob Lawbla");
	cout << "Doing Business as:" << BAccount.GetDBA() << endl;
	// Phone
	BAccount.SetPhone((char*)"778-302-2270");
	cout << "Phone Number is:" << BAccount.GetPhone() << endl;
	// Email
	BAccount.Setemail((char*)"Maya.kali@gmail.com");
	cout << "Phone Number is:" << BAccount.Getemail() << endl;
	// AccountNumber
	BAccount.SetAccountNumber(888);
	cout << "Account Number is:" << BAccount.GetAccountNumber() << endl;
	// AccountNumber
	BAccount.SetBalance(888.02);
	cout << "Account Number is:" << BAccount.GetBalance() << endl << endl;




	BAccount2.SetCanadianAddress((char*)"7510 uber ave");
	BAccount2.SetBranchID(88);
	// Account type (Credit card, Line of credit, checking, saving)
	BAccount2.SetAccounttype((char*)"Savings");
	cout << "Account type:" << BAccount2.GetAccounttype() << endl;
	//businessName
	BAccount2.SetbusinessName((char*)"Super fly BUSSINESS");
	cout << "Business Name is:" << BAccount2.GetbusinessName() << endl;
	//DBA
	BAccount2.SetDBA((char*)"Bob Lawbla");
	cout << "Doing Business as:" << BAccount2.GetDBA() << endl;
	// Phone
	BAccount2.SetPhone((char*)"778-302-2270");
	cout << "Phone Number is:" << BAccount2.GetPhone() << endl;
	// Email
	BAccount2.Setemail((char*)"Maya.kali@gmail.com");
	cout << "Phone Number is:" << BAccount2.Getemail() << endl;
	// AccountNumber
	BAccount2.SetAccountNumber(8388);
	cout << "Account Number is:" << BAccount2.GetAccountNumber() << endl;
	// AccountNumber
	BAccount2.SetBalance(888.02);
	cout << "Account Number is:" << BAccount2.GetBalance() << endl << endl;
	// operator overload for Business accounts
	// for account number
	if (BAccount == BAccount2)
	{
		cout << "you did it!"<< endl;
	}
	else 
	{
		cout << "Nooooooo!" << endl;

	}
	// for Balance
	if (BAccount != BAccount2)
	{
		cout << "you did it!" << endl;
	}
	else
	{
		cout << "Nooooooo!" << endl;

	}
	
	//Business Statement
	BusinessStatement BusinessStatementObj, BusinessStatementObj2;
	//this is showing the date overload for <<>> using a funtion from BusinessStatement
	BusinessStatementObj.SetOperatorOverloadedDate();
	BusinessStatementObj.GetOperatorOverloadedDate();
	//this is showing the Time overload for <<>> using a funtion from BusinessStatement
	BusinessStatementObj.SetOperatorOverloadedTime();
	BusinessStatementObj.GetOperatorOverloadedTime();
	//Transaction type
	
	BusinessStatementObj.SetBalance(10000.00);
	BusinessStatementObj.Transactiontype();
	BusinessStatementObj.TransactionAmount();
	cout << BusinessStatementObj.GetBalance()<< endl;
	// Email inheritance from BusinessAccount 
	BusinessStatementObj.Setemail((char*)"inheritance@gmail.com");
	cout << "Phone Number is:" << BusinessStatementObj.Getemail() << endl << endl;

	// PersonalStatement <<>> overload
	cout << "operator overloaded in" << endl;
	cin >> BusinessStatementObj;
	cout << "operator overloaded out" << endl;
	cout << BusinessStatementObj;
	cout << "operator overloaded in" << endl;
	cin >> BusinessStatementObj2;
	cout << "operator overloaded out" << endl;
	cout << BusinessStatementObj2;
	// PersonalStatement ==,!= overload
	//for transactionAmount
	if (BusinessStatementObj != BusinessStatementObj2)
	{
		cout << "you did it!" << endl;
	}
	else
	{
		cout << "Nooooooo!" << endl << endl;

	}
	// for Balance
	if (BusinessStatementObj == BusinessStatementObj2)
	{
		cout << "you did it!" << endl;
	}
	else
	{
		cout << "Nooooooo!" << endl << endl;

	}
	
	//Setting up the PersonalAccount
	PersonalAccount PAccount , PAccount2;
	PAccount.SetCanadianAddress((char*)"10 Neat Street");
	PAccount.SetBranchID(88);
	// Account type (Credit card, Line of credit, checking, saving)
	PAccount.SetAccounttype((char*)"Savings");
	cout << "Account type:" << PAccount.GetAccounttype() << endl;
	//businessName
	PAccount.SetbeneficiaryFirstName((char*)"Super fly BUSSINESS");
	cout << "Business Name is:" << PAccount.GetbeneficiaryFirstName() << endl;
	//DBA
	PAccount.SetbeneficiaryLastName((char*)"Bob Lawbla");
	cout << "Doing Business as:" << PAccount.GetbeneficiaryLastName() << endl;
	// Phone
	PAccount.SetPhone((char*)"778-302-2270");
	cout << "Phone Number is:" << PAccount.GetPhone() << endl;
	// Email
	PAccount.Setemail((char*)"Maya.kali@gmail.com");
	cout << "Phone Number is:" << PAccount.Getemail() << endl;
	// AccountNumber
	PAccount.SetAccountNumber(888);
	cout << "Account Number is:" << PAccount.GetAccountNumber() << endl;
	// AccountNumber
	PAccount.SetBalance(8888.02);
	cout << "Account Number is:" << PAccount.GetBalance() << endl << endl;

	//Setting up personal account 2 to show operator overload
	PAccount2.SetCanadianAddress((char*)"10 Neat Street");
	PAccount2.SetBranchID(88);
	// Account type (Credit card, Line of credit, checking, saving)
	PAccount2.SetAccounttype((char*)"Savings");
	cout << "Account type:" << PAccount2.GetAccounttype() << endl;
	//businessName
	PAccount2.SetbeneficiaryFirstName((char*)"Super fly BUSSINESS");
	cout << "Business Name is:" << PAccount2.GetbeneficiaryFirstName() << endl;
	//DBA
	PAccount2.SetbeneficiaryLastName((char*)"Bob Lawbla");
	cout << "Doing Business as:" << PAccount2.GetbeneficiaryLastName() << endl;
	// Phone
	PAccount2.SetPhone((char*)"778-302-2270");
	cout << "Phone Number is:" << PAccount2.GetPhone() << endl;
	// Email
	PAccount2.Setemail((char*)"Maya.kali@gmail.com");
	cout << "Phone Number is:" << PAccount2.Getemail() << endl;
	// AccountNumber
	PAccount2.SetAccountNumber(888);
	cout << "Account Number is:" << PAccount2.GetAccountNumber() << endl;
	// AccountNumber
	PAccount2.SetBalance(8888.02);
	cout << "Account Number is:" << PAccount2.GetBalance() << endl << endl;
	if (PAccount == PAccount2)
	{
		cout << "you did it!" << endl;
	}
	else
	{
		cout << "Nooooooo!" << endl;

	}
	// for Balance
	if (PAccount != PAccount2)
	{
		cout << "you did it!" << endl;
	}
	else
	{
		cout << "Nooooooo!" << endl;

	}
	//PersonalStatement class
	PersonalStatement Object1, Object2;
	// Set, get Date and set, get time contain an operator overload
	Object1.SetTime();
	Object1.GetTime();
	Object1.SetOperatorOverloadedDate();
	Object1.GetOperatorOverloadedDate();
	// PersonalStatement <<>> overload
	cout << "operator overloaded in" << endl;
	cin >> Object1;
	cout << "operator overloaded out" << endl;
	cout << Object1;
	cout << "operator overloaded in" << endl;
	cin >> Object2;
	cout << "operator overloaded out" << endl;
	cout << Object2;
	// PersonalStatement ==,!= overload
	//for transactionAmount
	if (Object1 == Object2)
	{
		cout << "you did it!" << endl;
	}
	else
	{
		cout << "Nooooooo!" << endl;

	}
	// for Balance
	if (Object1 != Object2)
	{
		cout << "you did it!" << endl;
	}
	else
	{
		cout << "Nooooooo!" << endl;

	}

	// Template class with Operator overload
	CanadianAddress <string> C;
	cout <<"operator overloaded in"<<endl;
	cin >> C;
	cout << "operator overloaded out" << endl;
	cout << C;
	// non operator overloaded templated class
	
	CanadianAddress <int> CanadianAddressObj;
	// SetSuitNo Template as int
	CanadianAddressObj.SetSuitNo(222);
	cout << "SuitNo:" << CanadianAddressObj.GetSuitNo() << endl;
	//Street Number
	CanadianAddressObj.SetStreetNumber(555);
	cout << "Street Number:" << CanadianAddressObj.GetStreetNumber() << endl;
	//StreetType
	CanadianAddressObj.SetStreetType((char*)"Gravel Road street");
	cout << "Street Type:" << CanadianAddressObj.GetStreetType() << endl;
	// City
	CanadianAddressObj.SetCity((char*)"Cool city");
	cout << "City is:" << CanadianAddressObj.GetCity() << endl;
	// Province
	CanadianAddressObj.SetProvince((char*)"B.C");
	cout << "Province is:" << CanadianAddressObj.GetProvince() << endl;
	// PostalCode
	CanadianAddressObj.SetPostalCode((char*)"B7C7F7");
	cout << "PostalCode is:" << CanadianAddressObj.GetPostalCode() << endl;
	// AccountNumber
	CanadianAddressObj.SetCountry((char*)"Canada");
	cout << "Account Number is:" << CanadianAddressObj.GetCountry() << endl;
	
	// I wasnt too sure how to use = operator overload in a practical way so i decided to display it 
	Date ab111, in222;
	cin >> ab111;
	in222 = ab111;// = operator overload 
	cout << in222;

	// PolyMorphism
	
	

	Branch* Service[2];
	Service[0] = &PAccount;
	Service[1] = &BAccount;
	
	for (int i = 0; i <= 1; i++)
	{
		std::cout << "BranchID:\n";
		std::cout << Service[i]->GetBranchID() << std::endl;
		std::cout << "Canadian Address:\n";
		std::cout << Service[i]->GetCanadianAddress() << std::endl << std::endl;


	}
	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
