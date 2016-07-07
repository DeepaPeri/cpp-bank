#ifndef MENU
#define MENU

class Menu{
private:
	std::string* options;
public:
	//Supply the options that this menu is supposed to render.
	Menu(std::string* options);
	
	//Display the menu to user and return the selected option.
	int getUserChoice();
};
#endif
