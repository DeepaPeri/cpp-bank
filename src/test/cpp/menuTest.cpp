#include "menu.h"

int main(){
	char options[][20] = {"Cut", "Copy", "Paste", "Delete"};
	Menu m (options, 4);

	int c = m.getUserChoice();

	cout << "User choice is : " << c;
}
