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
		"[0] Exit\n\n"
	};
	
	for(std::string list : list_menu) {
		std::cout<<list;
	}
	
	std::string opt;
	
	do {
		std::cout<<"Enter the option: ";
		std::cin>>opt;
		std::cout<<"\n";

		if(opt == "1") {
		   std::cout<<"Done\n\n";
		}
		else if(opt == "2") {
		   std::cout<<"Done\n\n";
		}
		else if(opt == "3") {
		   std::cout<<"Done\n\n";
		}
		else if(opt == "0") {
		   std::cout<<"Exit...\n\n";
		}
		else std::cout<<"'"<<opt<<"' not in option\n\n";
	} while (!(opt == "0"));
	return 0;
}