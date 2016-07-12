#include <iostream>
#include <string>
#include "accountlist.h"
#include "account.h"

using namespace std;	

AccountList::AccountList(int capacity){
	this -> capacity = capacity;
	accountList = new Account[capacity]; //Allocate heap memory of size 'capacity'	
	size = 0; //Number of accounts is zero
}

void AccountList::createAccount(long accountNumber, double balance, string name){
	if(isFull()){
		cout << "Error. No space for any more accounts. Cannot create account." << endl;
		return ;
	}	
	accountList[size] = Account(accountNumber, balance, name);
	size++;
}

int AccountList::getSize(){
	return size;
}

int AccountList::getCapacaity(){
	return capcity;
}

void AccountList::printReport(){
	cout << "Total number of accounts: " << size << endl;
	cout << "Account details" << endl;

	for(int i = 0; i < size; i++){
		accountList[i].display();
	}
}

Account* AccountList::getAccount(long accountNumber){
	//Search : Linear search
	for(int i = 0; i < size; i++){
		if(accountList[i].getAccountNumber() == accountNumber){
			return &accountList[i];
		}
	}
	return NULL;
}

bool AccountList::isFull(){
	return size >= capacity;
}

