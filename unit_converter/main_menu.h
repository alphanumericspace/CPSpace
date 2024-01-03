#ifndef mainMenu
#define mainMenu

void main_menu(void) {
   std::cout<<BD<<G<<FD<<S<<"Main Menu\n\n";
   
   std::vector<std::string> list_menu {
		"(1) Unit Converter",
		"(2) Information",
		"(0) Exit Program"
	};
	
	for(std::string list : list_menu) {
		std::cout<<list<<std::endl;
	}
	std::cout<<"\nEnter available options.\n\n";
}

#endif