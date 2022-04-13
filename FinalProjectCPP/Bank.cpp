#include "Bank.h"
#include "pch.h"
#include <iostream>
using namespace std;
Bank::Bank()
{
	Name = (char*)"";
	InstitutionID = 0;
	BranchID = 0;
	ForLoopBranches[BranchID];

}
Bank::Bank(char* Vname, int VInstitutionID, char* VForLoopBranches, int VBranchID)
{
	Name = Vname;
	InstitutionID = VInstitutionID;
	ForLoopBranches[BranchID] = VForLoopBranches;
	BranchID = VBranchID;
}


Bank::~Bank()
{
}
void Bank::SetName(char* vName)
{
	Name = vName;
}

char* Bank::GetName()
{
	return Name;
}
void Bank::SetVInstitutionID(int VInstitutionID)
{
	InstitutionID = VInstitutionID;
}

int Bank::GetVInstitutionID()
{
	return InstitutionID;
}
void Bank::SetForLoopBranches()
{
	int NumCount = 1;
	for (BranchID; BranchID < 20; BranchID++)
	{
		ForLoopBranches[BranchID] = (char*)"Branch #";
		cout <<  ForLoopBranches[BranchID]<< NumCount << endl;
		NumCount++;
	}
}

void Bank::WrittenArrayBranches()
{

}

