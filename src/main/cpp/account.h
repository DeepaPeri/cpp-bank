/**
* This class represents an account object held by a customer.
* @author: Sai Deepa Bhavani
* @date: 03-07-2016
*/
#ifndef ACCOUNT
#define ACCOUNT
#include<iostream>
#include<string>

class Account {
private:
	long accountNumber;
	double balance;
	std::string name;
public:	
	Account(){}
	Account(long accountNumber, double balance, std::string name);
	//Deposit the given amount, which should be more than 0.
	void deposit(double amount);
	
	//Withdraw the given amount, which should more than ZERO and within the available balance.
	void withdraw(double amount);

	//Balance query.
	double getBalance();

	//Query account holder's name.
	std::string getName();

	//Print account details.
	void display();
};
#endif
