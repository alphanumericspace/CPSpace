#ifndef menu
#define menu

#define B "\033[34m" // Blue
#define G "\033[32m" // Green
#define C "\033[36m" // Cyan
#define R "\033[31m" // Red
#define S "\033[0m" // Reset
#define BD "\033[1m" // Bold
#define FI "INPUT << "
#define FD "HEAD >> "
#define EX "STOP <> "
#define ER "ERROR >< "

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