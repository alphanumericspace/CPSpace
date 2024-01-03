// Unit Converter

#include <iostream>
#include <vector>
#include <string>

#include "interface.h"

int main() {
   interface::defn("main_header");
   interface::defn("main_menu");
	std::string input;
	while(input != "0") {
	   interface::defn("input_header");
		std::cin>>input;
		std::cout<<"\n";
		
		if(input == "1") {
         interface::defn("unit_converter");
         
         std::string unit;
         while(unit != "-1") {
            interface::defn("input_header");
            std::cin>>unit;
            std::cout<<"\n";
            
            if(unit == "1") {
               interface::defn("length_units");
               
               std::string len;
               while(len != "-1") {
                  interface::defn("input_header");
                  std::cin>>len;
                  std::cout<<"\n";
                  
                  if(len == "-1") {
                     interface::defn("unit_converter");
                  }
                  else if(len == "0") {
                     interface::defn("exit_header");
                  }
                  else {
                     interface::defn("error_header", len);
                     interface::defn("length_units");
                  }
               }
            } else if(unit == "2") {
               interface::defn("area_units");
               
               std::string are;
               while(are != "-1") {
                  interface::defn("input_header");
                  std::cin>>are;
                  std::cout<<"\n";
                  
                  if(are == "-1") {
                     interface::defn("unit_converter");
                  }
                  else if(are == "0") {
                     interface::defn("exit_header");
                  }
                  else {
                     interface::defn("error_header", are);
                     interface::defn("length_units");
                  }
               }
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
               interface::defn("main_menu");
            }
            else if(unit == "0") {
               interface::defn("exit_header");
               return 0;
            }
            else {
               interface::defn("error_header", unit);
               interface::defn("unit_converter");
            }
         }
		}
		else if(input == "2") {
         interface::defn("information");
		}
		else if(input == "0") {
         interface::defn("exit_header");
		}
		else {
         interface::defn("error_header", input);
	      interface::defn("main_menu");
		}
	}
}