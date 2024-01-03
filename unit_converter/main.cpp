// Unit Converter

#include <iostream>
#include <vector>
#include <string>

#include "ctn.h"

int main() {
   ctn::defn("main_header");
   ctn::defn("main_menu");
	std::string input;
	while(!(input == "0")) {
	   ctn::defn("input_header");
		std::cin>>input;
		std::cout<<"\n";
		
		if(input == "1") {
         ctn::defn("unit_converter");
         
         std::string unit;
         while(!(unit == "-1")) {
            ctn::defn("input_header");
            std::cin>>unit;
            std::cout<<"\n";
            
            if(unit == "1") {
               ctn::defn("length_units");
               
               std::string len;
               while(!(len == "-1")) {
                  ctn::defn("input_header");
                  std::cin>>len;
                  std::cout<<"\n";
                  
                  if(len == "-1") {
                     ctn::defn("unit_converter");
                  }
                  else if(len == "0") {
                     ctn::defn("exit_header");
                     return 0;
                  }
                  else {
                     ctn::defn("error_header", len);
                     ctn::defn("length_units");
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
               ctn::main_menu();
            }
            else if(unit == "0") {
               ctn::exitProgram();
               return 0;
            }
            else {
               ctn::defn("error_header", unit);
               ctn::defn("unit_converter");
            }
         }
		}
		else if(input == "2") {
         std::cout<<"Done\n";
		}
		else if(input == "0") {
         ctn::defn("exit_header");
         return 0;
		}
		else {
         ctn::defn("error_header", input);
	      ctn::defn("main_menu");
		}
	}
}