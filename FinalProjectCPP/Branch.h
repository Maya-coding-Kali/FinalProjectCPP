#pragma once
#include "Bank.h"
#include <string>
#include <iostream>
using namespace std;
class Branch
{
protected:
	int BranchID;
	char* CanadianAddress;
public:
	Branch();
	~Branch();
	void SetBranchID(int);
	int GetBranchID();
	void SetCanadianAddress(char*);
	char* GetCanadianAddress();

	friend istream& operator>>(istream& input, Branch& a)
	{

		cout << "with no spaces Please Enter the following " << endl;
		cout << "Enter BranchID ";
		input >> a.BranchID;





		return input;
	}
	friend ostream& operator << (ostream& out, const Branch& a)
	{

		out << "BranchID is: " << a.BranchID <<  endl << endl;
		return out;
	}
};

