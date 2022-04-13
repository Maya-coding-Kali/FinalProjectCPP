#pragma once
#include <iostream>
using namespace std;
using std::ostream;
using std::istream;

class Date
{
	
	friend ostream& operator<<(ostream& os, const Date& dt);
	friend istream& operator>>(istream& is, const Date& dt);
protected:

	

public:
	bool Checkyear(int);
	bool Checkmonth(int);
	bool Checkday(int);
	int day;
	int month;
	int year;
	Date(); // default Constructor 
	Date(int, int, int); // Overloaded constructor 
	Date(Date*);
	~Date();
	// Access function 
	void Setyear(int);
	int Getyear();
	void Setmonth(int);
	int Getmonth();
	void Setday(int);
	int Getday();
	
	friend istream& operator>> (istream& is, Date& dt)
	{
		
		
		cout << "Enter Day: ";
		is >> dt.day;
		cout << "Enter  Month: ";
		is >> dt.month;
		cout << "Enter Year: ";
		is >> dt.year;
		
		return is;
	}
	
	const Date& operator=(const Date& DateEqual)
	{
		year = DateEqual.year;
		month = DateEqual.month;
		day = DateEqual.day;
		return DateEqual;
	}
	

};