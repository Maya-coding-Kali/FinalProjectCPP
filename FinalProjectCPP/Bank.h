#pragma once

class Bank
{
private:
	char* Name;
	int InstitutionID;
	char* ForLoopBranches[20];
	int BranchID;
	char* WrittenBranches[20];
public:
	Bank();
	Bank(char*, int, char*, int);
	~Bank();
	 void SetName(char*);
	virtual char* GetName() ;
	virtual void SetVInstitutionID(int);
	virtual int GetVInstitutionID();
	virtual void SetForLoopBranches() ;
	virtual void WrittenArrayBranches();

};