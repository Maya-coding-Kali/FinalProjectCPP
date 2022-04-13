#include "PersonalStatement.h"
#include "Date.h"
#include "Time.h"
#include "Bank.h"
#include "Branch.h"
#include <string>
#include <iostream>
using std::ostream;
using std::istream;

using namespace std;
PersonalStatement::PersonalStatement()
{
  
    WDinput = (string) "";
    transactionAmount = 0;
    Balance = 0;

    
}
PersonalStatement::PersonalStatement(string VWDinput, int VtransactionAmount, double VBalance, int Y, int M, int D, int H, int Min, int S, Date VInputDate,  Time VInputTime)
{
   
    InputTime = VInputTime;
    InputDate = VInputDate;
    WDinput = VWDinput;
    transactionAmount = VtransactionAmount;
    Balance = 0;
   
}

PersonalStatement::~PersonalStatement()
{
}
void PersonalStatement::Transactiontype()
{


    cout << "please indicate the type of transaction:" << endl;
    cout << "W for withdrawl or D for deposit" << endl;
    cin >> WDinput;


}



void PersonalStatement::SetOperatorOverloadedDate()
{
    
    cin >> InputDate;
    if (InputDate.Checkday(InputDate.day))
    {
        InputDate;
    }
    else
    {
        InputDate.day = 0;
    }
    if (InputDate.Checkmonth(InputDate.month))
    {
        InputDate ;
    }
    else
    {
        InputDate.month = 0;
    }
    if (InputDate.Checkyear(InputDate.year))
    {
        InputDate;
    }
    else
    {
        InputDate.year = 0;
    }
   
}
void PersonalStatement::GetOperatorOverloadedDate()
{
   
    cout << InputDate << endl;
}

void PersonalStatement::SetTime()
{
    cin >> InputTime;
    if (InputTime.CheckHour(InputTime.Vhour))
    {
        InputTime;
    }
    else
    {
        InputTime.Vhour = 0;
    }
    if (InputTime.CheckMinute(InputTime.Vminute))
    {
        InputTime;
    }
    else
    {
        InputTime.Vminute = 0;
    }
    if (InputTime.CheckSecond(InputTime.Vsecond))
    {
        InputTime;
    }
    else
    {
        InputTime.Vsecond = 0;
    }

    
}
void PersonalStatement::GetTime()
{
    cout << InputTime << endl;
}


void PersonalStatement::SetBalance(double VBalance)// This will set the value Balance
{
    Balance = VBalance;
}

double PersonalStatement::GetBalance()// This will Get the value that you or your user has previously set
{
    return Balance;
}
void PersonalStatement::TransactionAmount()
{
   
   
    
    if (WDinput == "W" || WDinput == "w")
    {
      
      
        cout << "please input the amount you would like to withdrawl" << endl;
        cout << "20, 40, 60, 80, 100" << endl;
        cin >> transactionAmount;
       
        if (transactionAmount == 20)
        {
            cout << "Please Take your card, 20$ cash and recipt" << endl;
          
        }
        else if (transactionAmount == 40)
        {
            cout << "Please Take your card, 40$ cash and recipt" << endl;
        }
        else if (transactionAmount == 60)
        {
            cout << "Please Take your card, 60$ cash and recipt" << endl;
        }
        else if (transactionAmount == 80)
        {
            cout << "Please Take your card, 80$ cash and recipt" << endl;
        }
        else if (transactionAmount == 100)
        {
            cout << "Please Take your card, 100$ cash and recipt" << endl;
        }
        else
        {
            cout << "wrong input" << endl;
        }
    }
    else if (WDinput == "D" || WDinput == "d")
    {
        cout << "please input the amount you would like to deposit" << endl;
        cin >> transactionAmount;
        cout << "Thank you for depositing " << transactionAmount << "$" << endl;

    }
    else
    {
        cout << "wrong input" << endl;
    }
}

