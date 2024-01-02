// Unit Converter

#include <iostream>
#include <vector>
#include <string>

#define HD "HEAD > "

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
   std::cout<<HD<<"Main Menu\n";
   newline();
   
   std::vector<std::string> list_menu {
		"[1](unc) Unit Converter",
		"[2](inf) Information",
		"[0](ext) Exit Program"
	};
	
	for(std::string list : list_menu) {
		std::cout<<list<<std::endl;
	}
	
	newline();
}

void unit_converter(void) {
   std::cout<<HD<<"Unit Converter\n";
   newline();
   
   std::vector<std::string> units {
      "[1](len) Length", "[2](are) Area",
      "[3](vol) Volume", "[4](wgt) Weight",
      "[5](tmp) Temperature", "[6](spd) Speed",
      "[7](pre) Pressure", "[8](pow) Power",
      "[9](byt) Data Size", "[0](abr) Abort",
      "[00](ext) Exit Program"
   };
   
   for(std::string unit : units) {
      std::cout<<unit<<std::endl;
   }
   
   newline();
}

void length_units(void) {
   std::cout<<HD<<"Unit Converter > Length\n";
   newline();
   
   std::vector<std::string> length_units {
      "[1](km) Kilometer", "[2](hm) Hectometer",
      "[3](am) Decameter", "[4](mt) Meter",
      "[5](dm) Decimeter", "[6](cm) Centimeter",
      "[7](mm) Millimeter", "[8](um) Micrometer",
      "[9](nm) Nanometer", "[10](pm) Picometer",
      "[11](mi) Mile", "[12](yd) Yard",
      "[13](ft) Foot", "[14](in) Inch",
      "[15](nm) Nautical Mile", "[16](ly) Light Year",
      "[17](au) Astronomical Unit", "[18](pc) Parsec",
      "[19](ld) Lunar Distance", "[0](abr) Abort",
      "[00](ext) Exit Program"
   };
   
   for(std::string unit : length_units) {
      std::cout<<unit<<std::endl;
   }
   
   newline();
}

int main() {
   std::cout<<"\nCPSpace Project - Unit Converter\n\nWelcome to CPSPace Project, this tool is designed to seamlessly convert various units and simplify your calculations.\n";
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
            std::cout<<"Select a unit: ";
            std::cin>>unit;
            drawline();
            newline();
            
            if(unit == "1"
            or unit == "len") {
               length_units();
               
               std::string len;
               while(!(len == "0" or len == "abr")) {
                  std::cout<<"Select a length unit: ";
                  std::cin>>len;
                  drawline();
                  newline();
                  
                  if(len == "0"
                  or len == "abr") {
                     std::cout<<"<| Operation aborted...\n";
                     drawline();
                     newline();
                  }
                  else
                  if(len == "00"
                  or len == "ext") {
                     std::cout<<"<| Exit the program...\n";
                     newline();
                     return 0;
                  }
                  else {
                     std::cout<<"'"<<len<<"' not in option\n";
                     newline();
                  }
               }
               
               unit_converter();
            }
            else
            if(unit == "2"
            or unit == "are") {
               std::cout<<"Done\n";
               newline();
            }
            else
            if(unit == "3"
            or unit == "vol") {
               std::cout<<"Done\n";
               newline();
            }
            else
            if(unit == "4"
            or unit == "wgt") {
               std::cout<<"Done\n";
               newline();
            }
            else
            if(unit == "5"
            or unit == "tmp") {
               std::cout<<"Done\n";
               newline();
            }
            else
            if(unit == "6"
            or unit == "spd") {
               std::cout<<"Done\n";
               newline();
            }
            else
            if(unit == "7"
            or unit == "pre") {
               std::cout<<"Done\n";
               newline();
            }
            else
            if(unit == "8"
            or unit == "pow") {
               std::cout<<"Done\n";
               newline();
            }
            else
            if(unit == "0"
            or unit == "abr") {
               std::cout<<"<| Operation aborted...\n";
               drawline();
               newline();
            }
            else
            if(unit == "00"
            or unit == "ext") {
               std::cout<<"<| Exit the program...\n";
               newline();
               return 0;
            }
            else {
            std::cout<<"'"<<unit<<"' not in option\n";
            newline();
            }
         }
         
         main_menu();
		}
		else
		if(inp == "2" or inp == "inf") {
         std::cout<<"Done\n";
         newline();
		}
		else
		if(inp == "0" or inp == "ext") {
         std::cout<<"<| Exit the program...\n";
         newline();
		}
		else {
		std::cout<<"'"<<inp<<"' not in option\n";
		newline();
		}
	}
	return 0;
}