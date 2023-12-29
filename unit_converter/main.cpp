// Unit Converter

#include <iostream>
#include <array>
#include <string>

int main() {
   std::string title = "\nUnit Converter\n";
	std::string greet = "\nWelcome to SPace Project, this is a tool to convert one unit to another based on international standards.\n";
	std::string opt = "\nEnter the number according to the options provided below.\n\n";

	std::array<std::string, 4> list_menu {
		"[1] Unit Converter",
		"[2] Information",
		"[3] See this project on GitHub.",
		"[0] Exit"
	};

	std::cout<<title<<greet<<opt;
	
	for(std::string list : list_menu) {
		std::cout<<list<<std::endl;
	}
	
	int input;
	
	do {
		std::cout<<"\nEnter the option: ";
		std::cin>>input;

		switch (input) {
			case 1:
				std::cout<<"Done"<<std::endl;
				break;
			case 2:
				std::cout<<"Done"<<std::endl;
				break;
			case 3:
				std::cout<<"Done"<<std::endl;
				break;
			case 0:
				std::cout<<"Exit"<<std::endl;
				break;
			default:
				std::cout<<"'"<<input<<"'"<<" is not in option"<<std::endl;
		}
	} while (input != 0);
}
