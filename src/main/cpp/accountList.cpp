#include <iostream>
#include <string>
#include "accountlist.h"
#include "account.h"

using namespace std;	

AccountList::AccountList(int capacity){
	this -> capacity = capacity;
	accountList = new Account[capacity];	
	size = 0;
}

void AccountList::createAccount(long accountNumber, double balance, string name){
	if(size >= capacity){
		cout << "Error. No space for any more accounts. Cannot create account." << endl;
		return ;
	}	
	accountList[size] = Account(accountNumber, balance, name);
	size++;
}

int AccountList::getCountOfAccounts(){
	return size;
}
void AccountList::printReport(){
	cout << "Total number of accounts: " << size << endl;
	cout << "Account details" << endl;

	for(int i = 0; i < size; i++){
		accountList[i].display();
	}
}

