#pragma once
#include "BusinessAccount.h"
#include "Date.h"
#include "Time.h"
#include <string>
using namespace std;
class BusinessStatement : public BusinessAccount
{

protected:
	string WDinput;
	int transactionAmount;
	double Balance;
	Date InputDate;
	Time InputTime;
	
public:

	BusinessStatement();
	BusinessStatement(string, int, double, int, int, int, int, int, int, Date, Time);
	~BusinessStatement();
	void SetOperatorOverloadedDate();//takes overloaded date with cin >>
	void GetOperatorOverloadedDate();//takes overloaded date with cout<<
	void SetOperatorOverloadedTime();
	void GetOperatorOverloadedTime();
	void TransactionAmount();
	void Transactiontype();


	friend istream& operator>>(istream& input, BusinessStatement& a)
	{

		cout << "with no spaces Please Enter the following " << endl;
		cout << "Enter Transaction Amount ";
		input >> a.transactionAmount;
		cout << "Enter Balance ";
		input >> a.Balance;




		return input;
	} // end function 
	friend ostream& operator << (ostream& out, const BusinessStatement& a)
	{

		out << "Transaction Amount: " << a.transactionAmount << "\nEnter Balance: " << a.Balance << endl << endl;
		return out;
	}

	friend bool operator== (BusinessStatement& t1, BusinessStatement& t2)
	{
		return (t1.Balance != t2.Balance);
	}
	friend bool operator!= (BusinessStatement& t1, BusinessStatement& t2)
	{
		return (t1.transactionAmount == t2.transactionAmount);
	}
};

