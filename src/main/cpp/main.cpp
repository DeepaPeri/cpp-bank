#include<iostream>
#include "account.h"
#include "menu.h"
#include <string>
#include "accountList.h"

using namespace std;

int main(){
	string name;
	double balance;
	long accountNumber;
	int capacity;
	cout << "How many accounts you want to manage: ";
	cin >> capacity;
	AccountList accountList(capacity);
	
	cout << "Welcome to Deepa Bank. Have a great day. " << endl;
	cout << "********************************************" << endl;
	
	string options[] = {"Create account", "Deposit", "Withdraw", "Balance enquiry", "Report", "Exit program"};
	Menu mainMenu(options, 6);

	int choice;
	do {
		choice = mainMenu.getUserChoice();

		switch(choice){
		case 1:
			cout << "Please provide the details of new account" << endl;
			cout << "Enter the account holder name: " ;
			cin.ignore();
			getline(cin, name);
			cout << "Enter the new account number: ";
			cin >> accountNumber;
			cout << "Enter initial balance: ";
			cin >> balance;
			accountList.createAccount(accountNumber, balance, name);
			break;
		case 2: 
			cout << "We need to deposit money into an account" << endl;
			break;
		case 3:
			cout << "We need to withdraw money from an account" << endl;
			break;
		case 4: 
			cout << "Enquire the balance of an account" << endl;
			break;
		case 5:
			accountList.printReport();
			break;
		case 6:
			cout << "We are exiting now.  Bye bye" << endl;
			break;
		default:
			cout << "Sorry. I don't understand what to do..... try again." << endl;
		}
	}while(choice != 6);
	
	return 0;
}
