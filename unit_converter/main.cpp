// Unit Converter

#include <iostream>
#include <vector>
#include <string>

void straight_line(void) {
   for(int i = 0; i < 25; ++i) {
      std::cout<<"-";
   }
}
void main_menu(void) {
   std::cout<<"HEAD >> Main Menu\n\n";
   std::vector<std::string> list_menu {
		"[1] Unit Converter",
		"[2] Information",
		"[3] View the repository on GitHub",
		"[0] Exit"
	};
	for(std::string list : list_menu) {
		std::cout<<list<<std::endl;
	}
	std::cout<<"\n";
}
void unit_converter(void) {
   std::cout<<"HEAD >> Unit Converter\n\n";
   std::vector<std::string> unit_opt {
      "[1] Length", "[2] Area",
      "[3] Volume", "[4] Weight",
      "[5] Temperature", "[6] Speed",
      "[7] Pressure", "[8] Power",
      "[0] Abort"
   };
   std::cout<<"Select one of the unit conversion operations that you want: \n\n";
   for(std::string unit : unit_opt) {
      std::cout<<unit<<std::endl;
   }
   std::cout<<"\n";
}

int main() {
   std::cout<<"CPSpace Project - Unit Converter\n\nWelcome to CPSPace Project, this is a tool to convert one unit to another based on international standards.\n\n";
   straight_line()
   main_menu();
	std::string input;
	while(!(input == "0")) {
		std::cout<<"Enter the option: ";
		std::cin>>input;
		straight_line();
		
		if(input == "1") {
		   unit_converter();
		   
		   std::string unit_opt;
		   while(!(unit_opt == "0")) {
		      std::cout<<"Enter the option: ";
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
		         std::cout<<"[]> Operation aborted...\n";
		         straight_line();
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
		   std::cout<<"[]> Exit the program...\n\n";
		}
		else std::cout<<"'"<<input<<"' not in option\n\n";
	}
	return 0;
}