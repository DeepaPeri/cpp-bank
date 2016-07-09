#ifndef ACCOUNTLIST
#define ACCOUNTLIST
#include <iostream>
#include <string>
#include "account.h"

class AccountList{
private:
	int capacity;
	Account* accountList;
	int size;
public:
	AccountList(int capacity);

	void createAccount(long accountNumber, double balance, std::string name);

	int getCountOfAccounts();

	void printReport();
};
#endif
