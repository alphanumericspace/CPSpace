// Unit Converter

#include <iostream>
#include <vector>
#include <string>

void newline(void) {
   std::cout<<std::endl;
}
void drawline(void) {
   newline();
   for(int i = 0; i < 40; ++i) {
      std::cout<<"-";
   }
   newline();
}
void main_menu(void) {
   std::cout<<"|> Main Menu\n\n";
   std::vector<std::string> list_menu {
		"[1](unc) Unit Converter",
		"[2](inf) Information",
		"[0](ext) Exit"
	};
	for(std::string list : list_menu) {
		std::cout<<list<<std::endl;
	}
	newline();
}
void unit_converter(void) {
   std::cout<<"|> Unit Converter\n\n";
   std::vector<std::string> unit_option {
      "[1](len) Length", "[2](are) Area",
      "[3](vol) Volume", "[4](wgt) Weight",
      "[5](tmp) Temperature", "[6](spd) Speed",
      "[7](pre) Pressure", "[8](pow) Power",
      "[0](abr) Abort"
   };
   for(std::string unit : unit_option) {
      std::cout<<unit<<std::endl;
   }
   newline();
}

int main() {
   std::cout<<"\nCPSpace Project - Unit Converter\n\nWelcome to CPSPace Project, this is a tool to convert one unit to another based on international standards.\n";
   drawline();
   newline();
   main_menu();
	std::string input;
	while(!(input == "0" or input == "ext")) {
		std::cout<<"Enter the option: ";
		std::cin>>input;
		drawline();
		newline();
		
		if(input == "1" or input == "unc") {
		   unit_converter();
		   
		   std::string unit_option;
		   while(!(unit_option == "0" or unit_option == "abr")) {
		      std::cout<<"Enter the option: ";
		      std::cin>>unit_option;
		      newline();
		      if(unit_option == "1" or unit_option == "len") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_option == "2" or unit_option == "are") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_option == "3" or unit_option == "vol") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_option == "4" or unit_option == "wgt") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_option == "5" or unit_option == "tmp") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_option == "6" or unit_option == "spd") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_option == "7" or unit_option == "pre") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_option == "8" or unit_option == "pow") {
		         std::cout<<"Done\n\n";
		      }
		      else if(unit_option == "0" or unit_option == "abr") {
		         std::cout<<"<| Operation aborted...\n";
		         drawline();
		         newline();
		      }
		      else std::cout<<"'"<<unit_option<<"' not in option\n\n";
		   }
		   main_menu();
		}
		else if(input == "2" or input == "inf") {
		   std::cout<<"Done\n\n";
		}
		else if(input == "0" or input == "ext") {
		   std::cout<<"<| Exit the program...\n\n";
		}
		else std::cout<<"'"<<input<<"' not in option\n\n";
	}
	return 0;
}