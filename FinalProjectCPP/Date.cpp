
#include "Date.h"
#include <iostream>
using namespace std;
Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}

Date::Date(int Vyear, int Vmonth, int Vday)
{
	if (Checkyear(Vyear))
	{
		year = Vyear;
	}
	else
	{
		year = 0;
	}
	if (Checkmonth(Vmonth))
	{
		month = Vmonth;
	}
	else
	{
		month = 0;
	}
	if (Checkday(Vday))
	{
		day = Vday;
	}
	else
	{
		day = 0;
	}
}

Date::Date(Date* Right)
{
	year = Right->Getyear();
	month = Right->Getmonth();
	day = Right->Getday();
}
Date::~Date()
{
}

int Date::Getday()
{
	return day;
}
int Date::Getmonth()
{
	return month;
}
int Date::Getyear()
{
	return year;
}
void Date::Setday(int Vday)
{
	if (Checkday(Vday))
	{
		day = Vday;
	}
	else
	{
		day = 0;
	}
}
void Date::Setmonth(int Vmonth)
{
	if (Checkmonth(Vmonth))
	{
		month = Vmonth;
	}
	else
	{
		month = 0;
	}
}
void Date::Setyear(int Vyear)
{
	if (Checkyear(Vyear))
	{
		year = Vyear;
	}
	else
	{
		year = 0;
	}
}
bool Date::Checkyear(int Vyear)
{
	if (Vyear < 1900 || Vyear > 2100)
	{
		return false;
	}
	return true;
}
bool Date::Checkmonth(int Vmonth)
{
	if (Vmonth < 1 || Vmonth > 12)
	{
		return false;
	}
	return true;
}
bool Date::Checkday(int Vday)
{
	if (month == 2)
	{
		if ((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
		{
			if (Vday < 1 || Vday >29)
			{
				return false;
			}
		}
		else
		{
			if (Vday < 1 || Vday >28)
			{
				return false;
			}
		}
	}
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		&& (Vday < 1 || Vday >31))
	{
		return false;
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11)
		&& (Vday < 1 || Vday >30))
	{
		return false;
	}
	if (month < 0 || month > 12)
		
	{
		return false;
	}

	return true;
}

 ostream& operator <<(ostream& os, const Date& dt)
{
	os << dt.year << '/' << dt.month << '/' << dt.day << '\n';
	return os;
}
