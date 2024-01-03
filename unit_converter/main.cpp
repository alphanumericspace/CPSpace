// Unit Converter

#include <iostream>
#include <vector>
#include <string>

#include "menu.h"

#define B "\033[34m" // Blue
#define G "\033[32m" // Green
#define C "\033[36m" // Cyan
#define R "\033[31m" // Red
#define S "\033[0m" // Reset
#define BD "\033[1m" // Bold
#define FI "INPUT << "
#define FD "HEAD >> "
#define EX "STOP <> "
#define ER "ERROR >< "

int main() {
   std::cout<<"CPSPace Project\n\n";
   std::cout<<"This tool is designed to seamlessly convert various units and simplify your calculations.\n\n";
   menu::main_menu();
   
	std::string input;
	while(!(input == "0")) {
		std::cout<<BD<<B<<FI<<S;
		std::cin>>input;
		std::cout<<"\n";
		
		if(input == "1") {
         menu::unit_converter();
         
         std::string unit;
         while(!(unit == "-1")) {
            std::cout<<BD<<B<<FI<<S;
            std::cin>>unit;
            std::cout<<"\n";
            
            if(unit == "1") {
               menu::length_units();
               
               std::string len;
               while(!(len == "-1")) {
                  std::cout<<BD<<B<<FI<<S;
                  std::cin>>len;
                  std::cout<<"\n";
                  
                  if(len == "-1") {
                     menu::unit_converter();
                  }
                  else if(len == "0") {
                     menu::exitProgram();
                     return 0;
                  }
                  else {
                     std::cout<<BD<<R<<ER<<S<<"Unavailable Option '"<<len<<"'\n\n";
                     menu::length_units();
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
               menu::main_menu();
            }
            else if(unit == "0") {
               menu::exitProgram();
               return 0;
            }
            else {
               std::cout<<BD<<R<<ER<<S<<"Unavailable Option '"<<unit<<"'\n\n";
               menu::unit_converter();
            }
         }
		}
		else if(input == "2") {
         std::cout<<"Done\n";
		}
		else if(input == "0") {
         menu::exitProgram();
         return 0;
		}
		else {
         std::cout<<BD<<R<<ER<<S<<"Unavailable Option '"<<input<<"'\n\n";
	      menu::main_menu();
		}
	}
}