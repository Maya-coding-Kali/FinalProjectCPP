#pragma once
#include<string>
#include<iostream>
#include<string.h>
using namespace std;
// Class for Adressess
template<typename T>
class CanadianAddress
{
	friend ostream& operator<<(ostream&, const CanadianAddress&);
	friend istream& operator>>(istream&, CanadianAddress&);
protected:
	T SuitNo;
	T StreetNumber;
	//i used string instad of char because the string works better with what i am doing with the overload, 
	string StreetTypeOverload;
	string StreetnameOverload;
	string CityOverload;
	string ProvinceOverload;
	string PostalCodeOverload;
	string CountryOverload;
	// I kept the char for the non overloaded functions to maintain consistancy with the requierments
	char* StreetType;
	char* Streetname;
	char* City;
	char* Province;
	char* PostalCode;
	char* Country;

public:


	CanadianAddress();
	CanadianAddress(char*, char*, char*, char*, char*, char*, T, T);
	~CanadianAddress();
	T GetSuitNo();
	void SetSuitNo(T);
	T GetStreetNumber();
	void SetStreetNumber(T);
	char* GetStreetType();
	void SetStreetType(char*);
	char* GetStreetName();
	void SetStreetName(char*);
	char* GetCity();
	void SetCity(char*);
	char* GetProvince();
	void SetProvince(char*);
	char* GetPostalCode();
	void SetPostalCode(char*);
	char* GetCountry();
	void SetCountry(char*);



	friend istream& operator>>(istream& input, CanadianAddress& a)
	{
		
	
		cout << "with no spaces Please Enter the following "<<endl;
		cout << "Enter SuitNo ";
		input >> a.SuitNo;
		cout << "Enter Street Number ";
		input >> a.StreetNumber;
		cout << "Enter Street Type ";
		input >> a.StreetTypeOverload;
		cout << "Enter Street Name ";
		input >> a.StreetnameOverload;
		cout << "Enter City ";
		input >> a.CityOverload;
		cout << "Enter Province ";
		input >> a.ProvinceOverload;
		cout << "Enter PostalCode ";
		input >> a.PostalCodeOverload;
		cout << "Enter Country ";
		input >> a.CountryOverload;
		

		return input; 
	} // end function 
	friend ostream& operator << (ostream& out, const CanadianAddress& a)
	{
		
		out << "SuitNo Number: "
			<< a.SuitNo 
			<< "\nStreet Number: "
			<< a.StreetNumber 
			<< "Enter Street type "
			<< a.StreetTypeOverload
			<< "\nEnter Street Name: "
			<< a.StreetnameOverload
			<< "\nCity: "
			<< a.CityOverload 
			<< "\nEnter Province: "
			<< a.ProvinceOverload 
			<< "\nEnter PostalCode: " 
			<< a.PostalCodeOverload 
			<< "\nEnter Country: " 
			<< a.CountryOverload<<endl;
		
			
		return out;
	}
	
};

template<typename T>
CanadianAddress<T>::CanadianAddress()// constructor
{
	//implementing variables
	T SuitNo; 
	T StreetNumber;
	char* StreetType = (char*)"";
	char* Streetname = (char*)"";
	char* City = (char*)"";
	char* Province = (char*)"";
	char* PostalCode = (char*)"";
	char* Country = (char*)"";
}
// overloaded constructor
template<typename T>
CanadianAddress<T>::CanadianAddress(char* VStreetType, char* VStreetname, char* VCity, char* VProvince, char* VPostalCode, char* VCountry, T VStreetNumber, T VSuitNo)
{
	StreetType = VStreetType;
	Streetname = VStreetname;
	City = VCity;
	Province = VProvince;
	PostalCode = VPostalCode;
	Country = VCountry;
	StreetNumber = VStreetNumber;
	SuitNo = VSuitNo;


}
//deconstructor
template<typename T>
CanadianAddress<T>::~CanadianAddress()
{
}
//Suit number Get and set as a template for int and char

template<typename T>
void CanadianAddress<T>::SetSuitNo(T VSuitNo)
{
	SuitNo = VSuitNo;
}
template<typename T>
T CanadianAddress<T>::GetSuitNo()
{
	return SuitNo;
}
//Street Number Get and set template for int and char

template<typename T>
void CanadianAddress<T>::SetStreetNumber(T VStreetNumber)
{
	StreetNumber = VStreetNumber;
}
template<typename T>
T CanadianAddress<T>::GetStreetNumber()
{
	return StreetNumber;
}
//Street Type Get and set
template<typename T>
void CanadianAddress<T>::SetStreetType(char* VStreetType)// This will set the value of street type
{
	StreetType = VStreetType;
}
template<typename T>
char* CanadianAddress<T>::GetStreetType()// This will Get the value that you or your user has previously set
{
	return StreetType;
}
//Street name Get and set
template<typename T>
void CanadianAddress<T>::SetStreetName(char* VStreetname)
{
	Streetname = VStreetname;
}
template<typename T>
char* CanadianAddress<T>::GetStreetName()
{
	return Streetname;
}


//City Get and set
template<typename T>
void CanadianAddress<T>::SetCity(char* VCity)// This will set the value of City
{
	City = VCity;
}
template<typename T>
char* CanadianAddress<T>::GetCity()// This will Get the value that you or your user has previously set
{
	return City;
}

//Province Get and set
template<typename T>

void CanadianAddress<T>::SetProvince(char* VProvince)// This will set the value of Province
{
	Province = VProvince;
}
template<typename T>
char* CanadianAddress<T>::GetProvince()// This will Get the value that you or your user has previously set
{
	return Province;
}

//PostalCode Get and set
template<typename T>

void CanadianAddress<T>::SetPostalCode(char* VPostalCode)// This will set the value of PostalCode
{
	PostalCode = VPostalCode;
}
template<typename T>
char* CanadianAddress<T>::GetPostalCode()// This will Get the value that you or your user has previously set
{
	return PostalCode;
}

//Country Get and set
template<typename T>

void CanadianAddress<T>::SetCountry(char* VCountry)// This will set the value of Country
{
	Country = VCountry;
}
template<typename T>
char* CanadianAddress<T>::GetCountry()// This will Get the value that you or your user has previously set
{
	return Country;
}
