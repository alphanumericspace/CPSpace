// Unit Converter

#include <iostream>
#include <vector>
#include <string>

#define FI "\033[1;32mHEAD >>\033[0m "
#define FD "\033[1;32mHEAD <<\033[0m "
#define EX "\033[1;32mHEAD <>\033[0m "

void main_menu(void) {
   std::cout<<FD<<"Main Menu\n";
   
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
   std::cout<<FD<<"Unit Converter\n";
   
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
   std::cout<<FD<<"Length\n";
   
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
   std::cout<<"Welcome to CPSPace Project,\nthis tool is designed to seamlessly convert\nvarious units and simplify your calculations.\n\n";
   
   main_menu();
   
	std::string input;
	while(!(input == "0")) {
		std::cout<<FI<<;
		std::cin>>input;
		
		if(input == "1") {
         unit_converter();
         
         std::string unit;
         while(!(unit == "-1")) {
            std::cout<<FI<<;
            std::cin>>unit;
            
            if(unit == "1") {
               length_units();
               
               std::string len;
               while(!(len == "-1")) {
                  std::cout<<FI<<;
                  std::cin>>len;
                  
                  if(len == "-1") {
                     unit_converter();
                  }
                  else if(len == "0") {
                     std::cout<<EX<<<<"Exit Program\n";
                     return 0;
                  }
                  else {
                     std::cout<<"'"<<len<<"' not in option\n";
                  }
               }
            }
            else if(unit == "2") {
               std::cout<<"Done\n";
            }
            else if(unit == "3") {
               std::cout<<"Done\n";
            }
            else if(unit == "4") {
               std::cout<<"Done\n";
            }
            else if(unit == "5") {
               std::cout<<"Done\n";
            }
            else if(unit == "6") {
               std::cout<<"Done\n";
            }
            else if(unit == "7") {
               std::cout<<"Done\n";
            }
            else if(unit == "8") {
               std::cout<<"Done\n";
            }
            else if(unit == "9") {
               std::cout<<"Done\n";
            }
            else if(unit == "-1") {
               main_menu();
            }
            else if(unit == "0") {
               std::cout<<EX<<<<"Exit Program\n";
               return 0;
            }
            else {
            std::cout<<"'"<<unit<<"' not in option\n";
            }
         }
		}
		else if(input == "2") {
         std::cout<<"Done\n";
		}
		else if(input == "0") {
         std::cout<<EX<<<<"Exit Program\n";
         return 0;
		}
		else {
		std::cout<<"'"<<input<<"' not in option\n";
		}
	}
}
//double lengthUnitConversion(std::string option, double input) {}