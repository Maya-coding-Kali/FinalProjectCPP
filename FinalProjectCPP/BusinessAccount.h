#pragma once
#include "Branch.h"
#include <iostream>
using namespace std;
using std::ostream;
using std::istream;
class  BusinessAccount : public Branch

{
	friend ostream& operator<<(ostream&, const BusinessAccount&);
	friend istream& operator>>(istream&, BusinessAccount&);
protected:

	int AccountNumber;
	char* Accounttype;// (Credit card, Line of credit, checking, saving)
	double Balance;
	char* businessName;
	char* DBA;
	char* Phone;
	char* email;


public:
	BusinessAccount();
	BusinessAccount(int, double, char*, char*, char*, char*, char*);
	~BusinessAccount();
	char* GetAccounttype();
	void SetAccounttype(char*);
	char* GetbusinessName();
	void SetbusinessName(char*);
	char* GetDBA();
	void SetDBA(char*);
	char* GetPhone();
	void SetPhone(char*);
	char* Getemail();
	void Setemail(char*);
	int GetAccountNumber();
	void SetAccountNumber(int);
	double GetBalance();
	void SetBalance(double);
	//polymorhism
	void SetBranchID(int);
	int GetBranchID();
	void SetCanadianAddress(char*);
	char* GetCanadianAddress();
	//operator overload
	friend istream& operator>>(istream& input, BusinessAccount& a)
	{

		cout << "with no spaces Please Enter the following " << endl;
		cout << "Enter Account Number ";
		input >> a.AccountNumber;
		cout << "Enter Account type ";
		input >> (char*)a.Accounttype;
		cout << "Enter Balance ";
		input >> a.Balance;
		cout << "Enter Business Name ";
		input >> a.businessName;
		cout << "Enter DBA ";
		input >> a.DBA;
		cout << "Enter Phone ";
		input >> a.Phone;
		cout << "Enter email ";
		input >> a.email;



		return input;
	} // end function 
	friend ostream& operator << (ostream& out, const BusinessAccount& a)
	{

		out << "Account Number: " 
			<< a.AccountNumber
			<< "\nAccount type: " 
			<< a.Accounttype 
			<< "\nEnter Balance: " 
			<< a.Balance
			<< "\nEnter Business Name: "
			<< a.businessName 
			<< "\nEnter DBA: "
			<< a.DBA
			<< "\Phone: " 
			<< a.Phone 
			<< "\nEnter email: "
			<< a.email 
			<< endl;
		return out;
	}

	friend bool operator== (BusinessAccount& t1, BusinessAccount& t2)
	{
		return (t1.AccountNumber == t2.AccountNumber);
	}
	friend bool operator!= (BusinessAccount& t1, BusinessAccount& t2)
	{
		return (t1.Balance != t2.Balance );
	}
};