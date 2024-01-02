// Unit Converter

#include <iostream>
#include <vector>
#include <string>

#define GC "\033[1;32m"
#define RC "\033[0m"
#define FD "HEAD >> "
#define BW "HEAD << "
#define EX "HEAD <> "
#define SN "\n"
#define DN "\n\n"

void main_menu(void) {
   std::cout<<GC<<FD<<RC<<"Main Menu";
   
   std::vector<std::string> list_menu {
		"[1] Unit Converter",
		"[2] Information",
		"[0] Exit Program"
	};
	
	for(std::string list : list_menu) {
		std::cout<<list<<std::endl;
	}
}

void unit_converter(void) {
   std::cout<<GC<<FD<<RC<<"Unit Converter";
   
   std::vector<std::string> units {
      "[1] Length", "[2] Area",
      "[3] Volume", "[4] Weight",
      "[5] Temperature", "[6] Speed",
      "[7] Pressure", "[8] Power",
      "[9] Data Size", "[-1] Previous",
      "[0] Exit Program"
   };
   
   for(std::string unit : units) {
      std::cout<<unit<<std::endl;
   }
}

void length_units(void) {
   std::cout<<GC<<FD<<RC<<"Length";
   
   std::vector<std::string> length_units {
      "[1] Kilometer", "[2] Hectometer",
      "[3] Decameter", "[4] Meter",
      "[5] Decimeter", "[6] Centimeter",
      "[7] Millimeter", "[8] Micrometer",
      "[9] Nanometer", "[10] Picometer",
      "[11] Mile", "[12] Yard",
      "[13] Foot", "[14] Inch",
      "[15] Nautical Mile", "[16] Light Year",
      "[17] Astronomical Unit", "[18] Parsec",
      "[19] Lunar Distance", "[-1] Previous",
      "[0] Exit Program"
   };
   
   for(std::string unit : length_units) {
      std::cout<<unit<<std::endl;
   }
}

double lengthUnitConversion(std::string option, double input);

int main() {
   std::cout<<"CPSpace Project - Unit Converter";
   std::cout<<"Welcome to CPSPace Project, this tool is designed to seamlessly convert various units and simplify your calculations.";
   
   main_menu();
   
	std::string input;
	while(!(input == "0")) {
		std::cout<<"Enter the option: ";
		std::cin>>input;
		
		if(input == "1") {
         unit_converter();
         
         std::string unit;
         while(!(unit == "-1")) {
            std::cout<<"Select a unit: ";
            std::cin>>unit;
            
            if(unit == "1") {
               length_units();
               
               std::string len;
               while(!(len == "-1")) {
                  std::cout<<"Select a length unit: ";
                  std::cin>>len;
                  
                  if(len == "-1") {
                     std::cout<<GC<<BW<<RC<<"Previous";
                  }
                  else
                  if(len == "0") {
                     std::cout<<GC<<EX<<RC<<"Exit Program";
                     return 0;
                  }
                  else {
                     std::cout<<"'"<<len<<"' not in option";
                  }
               }
               
               unit_converter();
            }
            else
            if(unit == "2") {
               std::cout<<"Done";
            }
            else
            if(unit == "3") {
               std::cout<<"Done";
            }
            else
            if(unit == "4") {
               std::cout<<"Done";
            }
            else
            if(unit == "5") {
               std::cout<<"Done";
            }
            else
            if(unit == "6") {
               std::cout<<"Done";
            }
            else
            if(unit == "7") {
               std::cout<<"Done";
            }
            else
            if(unit == "8") {
               std::cout<<"Done";
            }
            else
            if(unit == "-1") {
               std::cout<<GC<<BW<<RC<<"Previous";
            }
            else
            if(unit == "0") {
               std::cout<<GC<<EX<<RC<<"Exit Program";
               return 0;
            }
            else {
            std::cout<<"'"<<unit<<"' not in option";
            }
         }
         main_menu();
		}
		else
		if(input == "2") {
         std::cout<<"Done";
		}
		else
		if(input == "0") {
         std::cout<<GC<<EX<<RC<<"Exit Program";
		}
		else {
		std::cout<<"'"<<input<<"' not in option";
		}
	}
	return 0;
}
//double lengthUnitConversion(std::string option, double input) {}