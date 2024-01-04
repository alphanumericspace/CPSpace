// Unit Converter

#include <iostream>
#include <string>

#include "cli.h"

int main() {
   cli::defn("main_header");
   cli::defn("main");
	std::string input;
	while(input != "0") {
	   cli::defn("input_prefix");
		std::cin>>input;
		cli::defn("newline");
		
		if(input == "1") {
         cli::defn("cvtr");
         
         std::string unit;
         while(unit != "-1") {
            cli::defn("input_prefix");
            std::cin>>unit;
            cli::defn("newline");
            
            if(unit == "1") {
               cli::defn("length");
               
               std::string len;
               while(len != "-1") {
                  cli::defn("input_prefix");
                  std::cin>>len;
                  cli::defn("newline");
                  
                  if(len == "-1") {
                     cli::defn("cvtr");
                  }
                  else if(len == "0") {
                     cli::defn("exit_prefix");
                  }
                  else {
                     cli::defn("err_opt_prefix");
                     cli::defn("length");
                  }
               }
            } else if(unit == "2") {
               cli::defn("area");
               
               std::string are;
               while(are != "-1") {
                  cli::defn("input_prefix");
                  std::cin>>are;
                  cli::defn("newline");
                  
                  if(are == "-1") {
                     cli::defn("cvtr");
                  }
                  else if(are == "0") {
                     cli::defn("exit_prefix");
                  }
                  else {
                     cli::defn("err_opt_prefix");
                     cli::defn("length");
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
               cli::defn("main");
            }
            else if(unit == "0") {
               cli::defn("exit_prefix");
            }
            else {
               cli::defn("err_opt_prefix");
               cli::defn("cvtr");
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
         cli::defn("err_opt_prefix");
	      cli::defn("main");
		}
	}
	return 0;
}