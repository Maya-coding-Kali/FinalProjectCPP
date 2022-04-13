#pragma once
#include <iostream>
using namespace std;
using std::ostream;
using std::istream;
class Time
{
	friend ostream& operator<<(ostream& os, const Time& dt);
	friend istream& operator>>(istream& is, const Time& Tt);
protected:

	
	

	
public:
	int Vsecond;
	int Vminute;
	int Vhour;
	Time(); // default Constructor 
	Time(int, int, int); // Overloaded constructor 
	Time(Time*);
	~Time();
	// Access function 
	void SetSecond(int);
	int GetSecond();
	void SetMinute(int);
	int GetMinute();
	void SetHour(int);
	int GetHour();
	bool CheckSecond(int);
	bool CheckMinute(int);
	bool CheckHour(int);

	friend istream& operator>> (istream& is, Time& dt)
	{
		cout << "Enter Second: ";
		is >> dt.Vsecond;
		cout << "Enter  Minute: ";
		is >> dt.Vminute;
		cout << "Enter Hour: ";
		is >> dt.Vhour;

		return is;
	}
	friend ostream& operator<<(ostream& os, const Time& Tt)
	{
		os << Tt.Vsecond << '/' << Tt.Vminute << '/' << Tt.Vhour << '\n';
		return os;
	}
		const Time& operator=(const Time& Tapas)
	{
		Vhour = Tapas.Vhour;
		Vminute = Tapas.Vminute;
		Vsecond = Tapas.Vsecond;
		return Tapas;
	}
};