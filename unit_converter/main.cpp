// Unit Converter

#include <iostream>
#include <vector>
#include <string>

#define FI "HEAD >> "
#define FD "HEAD << "
#define EX "HEAD <> "

void drawline(void) {
   std::cout<<"\n";
   for(int i = 0; i < 20; i++) {
      std::cout<<"<>";
   }
   std::cout<<"\n\n";
}

void main_menu(void) {
   std::cout<<FD<<"Main Menu\n\n";
   
   std::vector<std::string> list_menu {
		"(1) Unit Converter",
		"(2) Information",
		"(0) Exit Program"
	};
	
	for(std::string list : list_menu) {
		std::cout<<list<<std::endl;
	}
	std::cout<<"\nEnter your choice according to the number provided.\n\n";
}

void unit_converter(void) {
   std::cout<<FD<<"Unit Converter\n\n";
   
   std::vector<std::string> units {
      "(1) Length       |  (2) Area",
      "(3) Volume       |  (4) Weight",
      "(5) Temperature  |  (6) Speed",
      "(7) Pressure     |  (8) Power",
      "(9) Data Size    |  (-1) Previous",
      "(0) Exit Program"
   };
   
   for(std::string unit : units) {
      std::cout<<unit<<std::endl;
   }
   std::cout<<"\nEnter your choice according to the number provided.\n\n";
}

void length_units(void) {
   std::cout<<FD<<"Length\n\n";
   
   std::vector<std::string> length_units {
      "(1) Kilometer          |  (2) Hectometer",
      "(3) Decameter          |  (4) Meter",
      "(5) Decimeter          |  (6) Centimeter",
      "(7) Millimeter         |  (8) Micrometer",
      "(9) Nanometer          |  (10) Picometer",
      "(11) Mile              |  (12) Yard",
      "(13) Foot              |  (14) Inch",
      "(15) Nautical Mile     |  (16) Light Year",
      "(17) Astronomical Unit |  (18) Parsec",
      "(19) Lunar Distance    |  (-1) Previous",
      "(0) Exit Program"
   };
   
   for(std::string unit : length_units) {
      std::cout<<unit<<std::endl;
   }
   std::cout<<"\nEnter your choice according to the number provided.\n\n";
}

double lengthUnitConversion(std::string option, double input);

int main() {
   std::cout<<"CPSPace Project\n\n";
   std::cout<<"This tool is designed to seamlessly convert various units and simplify your calculations.\n\n";
   main_menu();
   
	std::string input;
	while(!(input == "0")) {
		std::cout<<FI;
		std::cin>>input;
		drawline();
		
		if(input == "1") {
         unit_converter();
         
         std::string unit;
         while(!(unit == "-1")) {
            std::cout<<FI;
            std::cin>>unit;
            drawline();
            
            if(unit == "1") {
               length_units();
               
               std::string len;
               while(!(len == "-1")) {
                  std::cout<<FI;
                  std::cin>>len;
                  drawline();
                  
                  if(len == "-1") {
                     unit_converter();
                  }
                  else if(len == "0") {
                     std::cout<<EX<<"Exit Program\n\n";
                     return 0;
                  }
                  else {
                     std::cout<<"'"<<len<<"' not in option\n\n";
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
               std::cout<<EX<<"Exit Program\n\n";
               return 0;
            }
            else {
            std::cout<<"'"<<unit<<"' not in option\n\n";
            }
         }
		}
		else if(input == "2") {
         std::cout<<"Done\n";
		}
		else if(input == "0") {
         std::cout<<EX<<"Exit Program\n\n";
         return 0;
		}
		else {
		std::cout<<"'"<<input<<"' not in option\n\n";
		}
	}
}
//double lengthUnitConversion(std::string option, double input) {}