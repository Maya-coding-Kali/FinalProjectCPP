#pragma once
#include "Branch.h"
#include <iostream>
using namespace std;
using std::ostream;
using std::istream;

class  PersonalAccount : public Branch

{
	friend ostream& operator<<(ostream&, const PersonalAccount&);
	friend istream& operator>>(istream&, PersonalAccount&);
protected:

	int AccountNumber;
	char* Accounttype;// (Credit card, Line of credit, checking, saving)
	double Balance;
	char* beneficiaryFirstName;
	char* beneficiaryLastName;
	char* Phone;
	char* email;

public:
	PersonalAccount();
	PersonalAccount(int, double, char*, char*, char*, char*, char*);
	~PersonalAccount();
	char* GetAccounttype();
	void SetAccounttype(char*);
	char* GetbeneficiaryFirstName();
	void SetbeneficiaryFirstName(char*);
	char* GetbeneficiaryLastName();
	void SetbeneficiaryLastName(char*);
	char* GetPhone();
	void SetPhone(char*);
	char* Getemail();
	void Setemail(char*);
	int GetAccountNumber();
	void SetAccountNumber(int);
	double GetBalance();
	void SetBalance(double);
	//for polymophisim
	void SetBranchID(int);
	int GetBranchID();
	void SetCanadianAddress(char*);
	char* GetCanadianAddress();

	//operator overload
	friend istream& operator>>(istream& input, PersonalAccount& a)
	{
	
		cout << "with no spaces Please Enter the following " << endl;
		cout << "Enter Account Number ";
		input >> a.AccountNumber;
		cout << "Enter Account type ";
		input >> a.Accounttype;
		cout << "Enter Balance ";
		input >> a.Balance;
		cout << "Enter First Name ";
		input >> a.beneficiaryFirstName;
		cout << "Enter Last ";
		input >> a.beneficiaryLastName;
		cout << "Enter Phone ";
		input >> a.Phone;
		cout << "Enter email ";
		input >> a.email;
	


		return input;
	} // end function 
	friend ostream& operator << (ostream& out, const PersonalAccount& a)
	{

		out << "Account Number: "
			<< a.AccountNumber 
			<< "\nAccount type: " 
			<< a.Accounttype 
			<< "\nEnter Balance: " 
			<< a.Balance
			<< a.beneficiaryLastName 
			<< "\nCity: " 
			<< a.Phone 
			<< "\nEnter Province: "
			<< a.email 
			<< "\nEnter PostalCode: "<<endl;
		return out;
	}
	
	friend bool operator== (PersonalAccount& t1, PersonalAccount& t2)
	{
		return (t1.AccountNumber == t2.AccountNumber );
	}
	friend bool operator!= (PersonalAccount& t1, PersonalAccount& t2)
	{
		return (t1.Balance != t2.Balance);
	}
};