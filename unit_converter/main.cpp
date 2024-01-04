// Unit Converter

#include <iostream>
#include <string>

#include "cli"

int main() {
   cli::defn("main_header");
   cli::defn("main_menu");
	std::string input;
	/*while(input != "0") {
	   cli::defn("input_prefix");
		std::cin>>input;
		cli::defn("newline");
		
		if(input == "1") {
         cli::defn("unit_converter");
         
         std::string unit;
         while(unit != "-1") {
            cli::defn("input_prefix");
            std::cin>>unit;
            cli::defn("newline");
            
            if(unit == "1") {
               cli::defn("length_units");
               
               std::string len;
               while(len != "-1") {
                  cli::defn("input_prefix");
                  std::cin>>len;
                  cli::defn("newline");
                  
                  if(len == "-1") {
                     cli::defn("unit_converter");
                  }
                  else if(len == "0") {
                     cli::defn("exit_prefix");
                  }
                  else {
                     cli::defn("unavailable_option_prefix", len);
                     cli::defn("length_units");
                  }
               }
            } else if(unit == "2") {
               cli::defn("area_units");
               
               std::string are;
               while(are != "-1") {
                  cli::defn("input_prefix");
                  std::cin>>are;
                  cli::defn("newline");
                  
                  if(are == "-1") {
                     cli::defn("unit_converter");
                  }
                  else if(are == "0") {
                     cli::defn("exit_prefix");
                  }
                  else {
                     cli::defn("unavailable_option_prefix", are);
                     cli::defn("length_units");
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
               cli::defn("main_menu");
            }
            else if(unit == "0") {
               cli::defn("exit_prefix");
            }
            else {
               cli::defn("unavailable_option_prefix", unit);
               cli::defn("unit_converter");
            }
         }
		}
		else if(input == "2") {
         cli::defn("information");
		}
		else if(input == "0") {
         cli::defn("exit_prefix");
		}
		else {
         cli::defn("unavailable_option_prefix", input);
	      cli::defn("main_menu");
		}
	}*/
	return 0;
}