#pragma once
#include "PersonalAccount.h"
#include "Date.h"
#include "Time.h"
#include <string>
using namespace std;
class PersonalStatement : public PersonalAccount
{

protected:
	string WDinput;
	int transactionAmount;
	double Balance;
	Date InputDate;
	Time InputTime;
public:
	
	PersonalStatement(); 
	PersonalStatement(string , int , double , int , int , int, int, int, int, Date,Time);
	~PersonalStatement();
	void SetOperatorOverloadedDate();//takes overloaded date with cin >>
	void GetOperatorOverloadedDate();//takes overloaded date with cout<<
	double GetBalance();
	void SetBalance(double);
	
	void SetTime();
	void GetTime();
	void TransactionAmount();//takes user input for a dollar amount
	void Transactiontype(); //(Withdraw/ Deposit) 
	//operator overload
	friend istream& operator>>(istream& input, PersonalStatement& a)
	{

		cout << "with no spaces Please Enter the following " << endl;
		cout << "Enter Transaction Amount ";
		input >> a.transactionAmount;
		cout << "Enter Balance ";
		input >> a.Balance;
		



		return input;
	} // end function 
	friend ostream& operator << (ostream& out, const PersonalStatement& a)
	{

		out << "Transaction Amount: " << a.transactionAmount << "\nEnter Balance: " << a.Balance << endl << endl;
		return out;
	}

	friend bool operator== (PersonalStatement& t1, PersonalStatement& t2)
	{
		return (t1.transactionAmount == t2.transactionAmount);
	}
	friend bool operator!= (PersonalStatement& t1, PersonalStatement& t2)
	{
		return (t1.Balance != t2.Balance);
	}
};

