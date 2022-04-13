
#include "Time.h"
#include <iostream>
using namespace std;
Time::Time()
{
	Vsecond = 0;
	Vminute = 0;
	Vhour = 0;
	
}

Time::Time(int s, int m, int h)
{
	if (CheckSecond(s))
	{
		Vsecond = s;
	}
	else
	{
		Vsecond = 0;
	}
	if (CheckMinute(m))
	{
		Vminute = m;
	}
	else
	{
		Vminute = 0;
	}
	if (CheckHour(h))
	{
		Vhour = h;
	}
	else
	{
		Vhour = 0;
	}
}

Time::Time(Time* Right)
{
	Vsecond = Right->GetSecond();
	Vminute = Right->GetMinute();
	Vhour = Right->GetHour();
}

Time::~Time()
{
}
int Time::GetSecond()
{
	return Vsecond;
}
int Time::GetMinute()
{
	return Vminute;
}
int Time::GetHour()
{
	return Vhour;
}
void Time::SetSecond(int d)
{
	if (CheckSecond(d))
	{
		Vsecond = d;
	}
	else
	{
		Vsecond = 0;

	}
	
}
void Time::SetMinute(int m)
{
	if (CheckMinute(m))
	{
		Vminute = m;
	}
	else
	{
		Vminute = 0;
	}
}
void Time::SetHour(int h)
{
	Vhour = h;
	if (CheckHour(h))
	{
		Vhour = h;
	}
	else
	{
		Vhour = 0;
	}
}
bool Time::CheckHour(int hh)
{
	if (hh < 0 || hh > 24)
	{
		return false;
	}
	return true;
}
bool Time::CheckMinute(int mm)
{
	if (mm < 0 || mm > 60)
	{
		return false;
	}
	return true;
}
bool Time::CheckSecond(int ss)
{
	if (ss < 0 || ss > 60)
	{
		return false;
	}
	return true;
}

