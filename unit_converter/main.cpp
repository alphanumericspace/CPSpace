// Unit Converter

#include <iostream>
#include <vector>
#include <string>

void newline(void) {
   std::cout<<std::endl;
}

void drawline(void) {
   newline();
   
   for(int i = 0; i < 35; ++i) {
      std::cout<<"-";
   }
   
   newline();
}

void main_menu(void) {
   std::cout<<"|> Main Menu\n";
   newline();
   
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
   std::cout<<"|> Unit Converter\n";
   newline();
   
   std::vector<std::string> unit {
      "[1](len) Length", "[2](are) Area",
      "[3](vol) Volume", "[4](wgt) Weight",
      "[5](tmp) Temperature", "[6](spd) Speed",
      "[7](pre) Pressure", "[8](pow) Power",
      "[0](abr) Abort"
   };
   
   for(std::string unit : unit) {
      std::cout<<unit<<std::endl;
   }
   
   newline();
}

int main() {
   std::cout<<"\nCPSpace Project - Unit Converter\n\nWelcome to CPSPace Project, this is a tool to convert one unit to another based on international standards.\n";
   drawline();
   newline();
   
   main_menu();
   
	std::string inp;
	while(!(inp == "0" or inp == "ext")) {
		std::cout<<"Enter the option: ";
		std::cin>>inp;
		drawline();
		newline();
		
		if(inp == "1"
		or inp == "unc") {
         unit_converter();
         
         std::string unit;
         while(!(unit == "0" or unit == "abr")) {
            std::cout<<"Enter the option: ";
            std::cin>>unit;
            newline();
            
            if(unit == "1"
            or unit == "len") {
               std::cout<<"Done\n\n";
            }
            else
            if(unit == "2"
            or unit == "are") {
               std::cout<<"Done\n\n";
            }
            else
            if(unit == "3"
            or unit == "vol") {
               std::cout<<"Done\n\n";
            }
            else
            if(unit == "4"
            or unit == "wgt") {
               std::cout<<"Done\n\n";
            }
            else
            if(unit == "5"
            or unit == "tmp") {
               std::cout<<"Done\n\n";
            }
            else
            if(unit == "6"
            or unit == "spd") {
               std::cout<<"Done\n\n";
            }
            else
            if(unit == "7"
            or unit == "pre") {
               std::cout<<"Done\n\n";
            }
            else
            if(unit == "8"
            or unit == "pow") {
               std::cout<<"Done\n\n";
            }
            else
            if(unit == "0"
            or unit == "abr") {
               std::cout<<"<| Operation aborted...\n";
               drawline();
               newline();
            }
            else
            std::cout<<"'"<<unit<<"' not in option\n";
            newline();
         }
         
         main_menu();
		}
		else
		if(inp == "2" or inp == "inf") {
         std::cout<<"Done\n\n";
		}
		else
		if(inp == "0" or inp == "ext") {
         std::cout<<"<| Exit the program...\n";
         newline();
		}
		else
		std::cout<<"'"<<inp<<"' not in option\n";
		newline();
	}
	
	return 0;
}