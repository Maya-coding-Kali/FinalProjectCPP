#include "BusinessStatement.h"
#include <string>
#include <iostream>
using namespace std;
BusinessStatement::BusinessStatement()
{
    WDinput = (string)"";
    transactionAmount = 0;
    Balance = 0;
    
}
BusinessStatement::BusinessStatement(string VWDinput, int VtransactionAmount, double VBalance, int Y, int M, int D, int H, int Min, int S, Date VInputDate, Time VInputTime)
{
    WDinput = VWDinput;
    transactionAmount = VtransactionAmount;
    Balance = 0;
   
}

BusinessStatement::~BusinessStatement()
{
}
void BusinessStatement::Transactiontype()
{


    cout << "please indicate the type of transaction:" << endl;
    cout << "W for withdrawl or D for deposit" << endl;
    cin >> WDinput;


}


void BusinessStatement::SetOperatorOverloadedDate()
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
        InputDate;
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
void BusinessStatement::GetOperatorOverloadedDate()
{
   
    cout << InputDate << endl;
}

void BusinessStatement::SetOperatorOverloadedTime()
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
void BusinessStatement::GetOperatorOverloadedTime()
{
   
    cout << InputTime << endl;
}
void BusinessStatement::TransactionAmount()
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



