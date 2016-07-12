#ifndef ACCOUNTLIST
#define ACCOUNTLIST
#include <iostream>
#include <string>
#include "account.h"

/** This class maintains the list of accounts
* The capacity of list is fixed (can't grow or shrink)and should be supplied during instantiation.
*/
class AccountList{
private:
	int capacity; //The max number of accounts 
	int size; //Count of accounts currently in list
	Account* accountList; //Pointer to the array of accounts
public:
	AccountList(){}
	AccountList(int capacity);
	
	//Create an account object with the given data and append it to the list
	//It fails if the list is already full
	void createAccount(long accountNumber, double balance, std::string name);

	//Query the current number of accounts
	int getSize();
	
	//Query the capacity of this account list
	int getCapacity();
	
	//Print the details of all existing accounts
	void printReport();
	
	//Query the account object with the given account number
	//It returns pointer to the selected account
	//It returns NULL if the account is not found for the given account number
	Account* getAccount(long accountNumber);

	//Check if the account list is full
	bool isFull();
};
#endif
