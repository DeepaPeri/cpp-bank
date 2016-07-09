#include<iostream>
#include "account.h"
#include "menu.h"
#include <string>

using namespace std;

int main(){
	cout << "Welcome to Deepa Bank. Have a great day. " << endl;
	cout << "********************************************" << endl;

	string options[] = {"Create account", "Deposit", "Withdraw", "Balance enquiry", "Report", "Exit program"};
	Menu mainMenu(options, 6);

	int choice = mainMenu.getUserChoice();

	switch(choice){
	case 1:
		cout << "We need to create an account now" << endl;
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
		cout << "Print the details of all accounts" << endl;
		break;
	case 6:
		cout << "We are exiting now.  Bye bye" << endl;
		return 0;
	default:
		cout << "Sorry. I don't understand what to do..... bye bye" << endl;
	}
	return 0;
}
