// Unit Converter

#include <iostream>
#include <vector>
#include <string>

void main_menu(void) {
   std::cout<<"HEAD >> Main Menu\n\n";
   std::vector<std::string> list_menu {
      "\nCPSpace Project - Unit Converter\n\n",
      "Welcome to CPSPace Project, this is a tool to convert one unit to another based on international standards.\n\n",
		"[1] Unit Converter\n",
		"[2] Information\n",
		"[3] See this project on GitHub.\n",
		"[0] Exit\n\n"
	};
	for(std::string list : list_menu) {
		std::cout<<list;
	}
}

void unit_option(void) {
   std::cout<<"HEAD >> Unit Converter\n\n";
   std::vector<std::string> unit_opt {
      "[1] Length", "[2] Area",
      "[3] Volume", "[4] Weight",
      "[5] Temperature", "[6] Speed",
      "[7] Pressure", "[8] Power",
      "[0] Abort"
   };
   std::cout<<"Unit Converter\n\n";
   for(std::string unit : unit_opt) {
      std::cout<<unit<<std::endl;
   }
}

int main() {
   main_menu();
   
	std::string input;
	while(!(input == "0")) {
		std::cout<<"Enter the option: ";
		std::cin>>input;
		std::cout<<"\n";
		
		if(input == "1") {
		   unit_option();
		   
		   std::string unit_opt;
		   while(!(unit_opt == "0")) {
		      std::cout<<"\nEnter the option: ";
		      std::cin>>unit_opt;
		      std::cout<<"\n";
		      if(unit_opt == "1") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_opt == "2") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_opt == "3") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_opt == "4") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_opt == "5") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_opt == "6") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_opt == "7") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_opt == "8") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_opt == "0") {
		         std::cout<<"Operation aborted...";
		         std::cout<<"--------------------\n\n";
		      }
		      else std::cout<<"'"<<unit_opt<<"' not in option\n\n";
		   }
		   main_menu();
		}
		else if(input == "2") {
		   std::cout<<"Done\n\n";
		}
		else if(input == "3") {
		   std::cout<<"Done\n\n";
		}
		else if(input == "0") {
		   std::cout<<"Exit...\n\n";
		}
		else std::cout<<"'"<<input<<"' not in option\n\n";
	}
	return 0;
}