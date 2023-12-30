
// Unit Converter

#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<std::string> list_menu {
      "\nUnit Converter\n",
      "\nWelcome to SPace Project, this is a tool to convert one unit to another based on international standards.\n",
      "\nEnter the number according to the options provided below.\n\n",
		"[1] Unit Converter\n",
		"[2] Information\n",
		"[3] See this project on GitHub.\n",
		"[0] Exit\n"
	};
	
	for(std::string list : list_menu) {
		std::cout<<list;
	}
	
	int input;
	
	do {
		std::cout<<"\nEnter the option: ";
		std::cin>>input;
		std::cout<<std::endl;

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
				std::cout<<"Exit..."<<std::endl<<std::endl;
				break;
			default:
				std::cout<<"'"<<input<<"'"<<" is not in option"<<std::endl;
		}
	} while (input != 0);
}
