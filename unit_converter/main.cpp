// Unit Converter

#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<std::string> list_menu {
      "\nUnit Converter\n\n",
      "Welcome to SPace Project, this is a tool to convert one unit to another based on international standards.\n\n",
      "Enter the number according to the options provided below.\n\n",
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
		std::cout<<"\n";


		switch (input) {
			case 1:
				std::cout<<"Done\n";

				break;
			case 2:
				std::cout<<"Done\n";

				break;
			case 3:
				std::cout<<"Done\n";

				break;
			case 0:
				std::cout<<"Exit...\n\n";
				break;
			default:
				std::cout<<"'"<<input<<"'"<<" is not in option\n";

		}
	} while (input != 0 && std::cin.fail());
	return 0;
}
