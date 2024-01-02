// Unit Converter

#include <iostream>
#include <vector>
#include <string>

#define FD "HEAD >> "
#define BW "HEAD << "
#define EX "HEAD <> "

void singlen(void) {
   std::cout<<"\n";
}
void doublen(void) {
   std::cout<<"\n\n";
}

void drawline(void) {
   doublen();
   
   for(int i = 0; i < 30; ++i) {
      std::cout<<"-";
   }
   
   doublen();
}

void main_menu(void) {
   std::cout<<FD<<"Main Menu";
   doublen();
   
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
   std::cout<<FD<<"Unit Converter";
   doublen();
   
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
   std::cout<<FD<<"Unit Converter > Length";
   doublen();
   
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
   std::cout<<"\nCPSpace Project - Unit Converter\n\nWelcome to CPSPace Project, this tool is designed to seamlessly convert various units and simplify your calculations.";
   doublen();
   
   main_menu();
   
	std::string input;
	while(!(input == "0")) {
	   singlen();
		std::cout<<"Enter the option: ";
		std::cin>>input;
		drawline();
		
		if(input == "1") {
         unit_converter();
         
         std::string unit;
         while(!(unit == "-1")) {
            std::cout<<"Select a unit: ";
            std::cin>>unit;
            drawline();
            
            if(unit == "1") {
               length_units();
               
               std::string len;
               while(!(len == "-1")) {
                  std::cout<<"Select a length unit: ";
                  std::cin>>len;
                  drawline();
                  
                  if(len == "-1") {
                     std::cout<<BW<<"Previous";
                     drawline();
                  }
                  else
                  if(len == "0") {
                     std::cout<<EX<<"Exit Program";
                     doublen();
                     return 0;
                  }
                  else {
                     std::cout<<"'"<<len<<"' not in option";
                     doublen();
                  }
               }
               
               unit_converter();
            }
            else
            if(unit == "2") {
               std::cout<<"Done";
               doublen();
            }
            else
            if(unit == "3") {
               std::cout<<"Done";
               doublen();
            }
            else
            if(unit == "4") {
               std::cout<<"Done\n";
               doublen();
            }
            else
            if(unit == "5") {
               std::cout<<"Done";
               doublen();
            }
            else
            if(unit == "6") {
               std::cout<<"Done";
               doublen();
            }
            else
            if(unit == "7") {
               std::cout<<"Done";
               doublen();
            }
            else
            if(unit == "8") {
               std::cout<<"Done";
               doublen();
            }
            else
            if(unit == "-1") {
               std::cout<<BW<<"Previous";
               drawline();
            }
            else
            if(unit == "0") {
               std::cout<<EX<<"Exit Program";
               doublen();
               return 0;
            }
            else {
            std::cout<<"'"<<unit<<"' not in option";
            doublen();
            }
         }
         
         main_menu();
		}
		else
		if(input == "2") {
         std::cout<<"Done";
         doublen();
		}
		else
		if(input == "0") {
         std::cout<<EX<<"Exit Program";
         doublen();
		}
		else {
		std::cout<<"'"<<input<<"' not in option";
		doublen();
		}
	}
	return 0;
}
//double lengthUnitConversion(std::string option, double input) {}