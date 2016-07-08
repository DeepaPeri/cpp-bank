#ifndef MENU
#define MENU

#include <string>

class Menu{
private:
	std::string* options;
	int numberOfOptions;
public:
	//Supply the options that this menu is supposed to render.
	Menu(std::string* options, int numberOfOptions);
	
	//Display the menu to user and return the selected option.
	int getUserChoice();
};
#endif
