// Unit Converter

#include <iostream>
#include <vector>
#include <string>

#include "menu.h"

int main() {
   menu::header();
   menu::main_menu();
   
	std::string input;
	while(!(input == "0")) {
	   menu::input();
		std::cin>>input;
		std::cout<<"\n";
		
		if(input == "1") {
         menu::unit_converter();
         
         std::string unit;
         while(!(unit == "-1")) {
            menu::input();
            std::cin>>unit;
            std::cout<<"\n";
            
            if(unit == "1") {
               menu::length_units();
               
               std::string len;
               while(!(len == "-1")) {
                  menu::input();
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
                     menu::unavailableOption(len);
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
               menu::unavailableOption(unit);
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
         menu::unavailableOption(input);
	      menu::main_menu();
		}
	}
}