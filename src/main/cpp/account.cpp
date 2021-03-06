/**
* This class represents an account object held by a customer.
* @author: Sai Deepa Bhavani
* @date: 03-07-2016
*/
#include<iostream>
#include<string>
#include "account.h"

using namespace std;

Account::Account(long accountNumber, double balance, string name){
	this -> accountNumber = accountNumber;
	this -> balance = balance ;
	this -> name = name;                             
}

//Deposit the given amount, which should be more than 0.
void Account::deposit(double amount){
	if(amount <= 0){
		cout << "Error: Minimum amount to be deposited should be more than ZERO: " << amount << endl;
		cout << "Error: Deposit operation failed." << endl;
		return;
	}
	balance = balance + amount;
	cout << "Final balance after deposit: "<< balance << endl;
}

//Withdraw the given amount, which should more than ZERO and within the available balance.
void Account::withdraw(double amount){
	if (amount <= 0){
		cout << "Error: Invalid withdraw amount. Withdraw amount should be more than ZERO: " << amount << endl;
		cout << "Error: Withdraw operation failed." << endl;
	}else if(amount > balance){
		cout << "Error: Invalid withdraw amount. Withdraw amount should be within available balance." << endl;
		cout << "Error: Available balance is: " << balance << ". Requested withdraw amount is: " << amount << endl;
	}else{
		balance = balance - amount;
		cout << "Final balance after withdraw is: " << balance << endl;
	}
}

//Balance query.
double Account::getBalance(){
	return balance;
}

//Query account holder's name.
string Account::getName(){
	return name;
}

//Print account details.
void Account::display(){
	cout << "[Account number: " << accountNumber << ", Name: " << name << ", Balance: " << balance << " ]" << endl;
}
