#include "menu.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
	string options[4] = {"Cut", "Copy", "Paste", "Delete"};
	Menu m (options, 4);

	int c = m.getUserChoice();

	cout << "menuTest::" << "User choice is : " << c << endl;
}
