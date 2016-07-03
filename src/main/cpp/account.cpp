#include<iostream>
#include<string>
using namespace std;
class Account {
private:
	long account_number;
	double balance;
	string name;
public:	
	void printdata(long account_number,double balance,string name){
		this ->account_number = account_number;		cout << "account number - " << account_number << endl;
		this ->balance = balance ;			cout << "balance - " << balance << endl;
		this ->name = name;				cout << "name - " << name << endl;
		}
	
	void deposit(double amount){
		balance = balance + amount;
		cout << "balance - "<< balance << endl;
	}
	void withdraw(double amount){
		balance = balance - amount;
		cout << balance << endl;
		if(balance < 0){
			cout << "Your balance than entered amount. " << endl;
			balance = balance + amount;
			cout << "Your current balance - " << balance << endl;
		}else {
		cout << balance << endl;}
	}
};
int main(){
	Account a;
	a.printdata(214,232335,"asfast");
	a.deposit(25634);
	a.withdraw(343466);
}
