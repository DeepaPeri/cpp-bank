#ifndef MENU
#define MENU

class Menu{
private:
	char options[][25];
	int numberOfOptions;
public:
	//Supply the options that this menu is supposed to render.
	Menu(char& options[][25], int numberOfOptions);
	
	//Display the menu to user and return the selected option.
	int getUserChoice();
};
#endif
