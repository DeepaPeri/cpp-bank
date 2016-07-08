#include "menu.h"
#include <iostream>

using namespace std;

Menu::Menu(char& options [][25], int numberOfOptions){
	this -> options = options;
	this -> numberOfOptions = numberOfOptions;
}

int Menu::getUserChoice(){
	cout << endl << endl;
	cout << "**********************************************************************************" << endl;
	cout << endl;
	cout << "Please chose an option from the following listed ones" << endl;
	
	for(int i = 0; i < numberOfOptions; i++){
		cout << i + 1 << ". " << options[i]<< endl;
	}

	cout << "Enter your choice : " ;
	int choice;
	cin >> choice;

	if (choice < 1 || choice > numberOfOptions){
		cout << "ERROR : Invalied choice. Please try again." << endl;
		return getUserChoice();	
	}
	
	cout << "Your choice is: " << options[choice - 1];

	return choice;
}