#include "Branch.h"
#include "pch.h"
Branch::Branch()
{
	BranchID = 0;
	CanadianAddress = (char*)"";
}

Branch::~Branch()
{
}
void Branch::SetBranchID(int VBranchID)
{
	BranchID = VBranchID;
}
int Branch::GetBranchID()
{
	return BranchID;
}
void Branch::SetCanadianAddress(char* VCanadianAddress)
{
	CanadianAddress = VCanadianAddress;
}
char* Branch::GetCanadianAddress()
{
	return CanadianAddress;
}