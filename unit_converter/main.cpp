// Unit Converter

#include <iostream>
#include <string>

#include "cli.h"

int main() {
   cli::defn("header");
   cli::defn("main");
	std::string input;
	while(input != "0") {
	   cli::defn("input");
		std::cin>>input;
		cli::defn("line");
		
		if(input == "1") {
         cli::defn("cvtr");
         
         std::string unit;
         while(unit != "-1") {
            cli::defn("input");
            std::cin>>unit;
            cli::defn("line");
            
            if(unit == "1") {
               cli::defn("length");
               
               std::string len;
               while(len != "-1") {
                  cli::defn("input");
                  std::cin>>len;
                  cli::defn("line");
                  
                  if(len == "-1") {
                     cli::defn("cvtr");
                  }
                  else if(len == "0") {
                     cli::defn("exit");
                  }
                  else {
                     cli::defn("err_opt");
                     cli::defn("length");
                  }
               }
            } else if(unit == "2") {
               cli::defn("area");
               
               std::string are;
               while(are != "-1") {
                  cli::defn("input");
                  std::cin>>are;
                  cli::defn("line");
                  
                  if(are == "-1") {
                     cli::defn("cvtr");
                  }
                  else if(are == "0") {
                     cli::defn("exit");
                  }
                  else {
                     cli::defn("err_opt");
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
               cli::defn("exit");
            }
            else {
               cli::defn("err_opt");
               cli::defn("cvtr");
            }
         }
		}
		else if(input == "2") {
         cli::defn("info");
		}
		else if(input == "0") {
         cli::defn("exit");
		}
		else {
         cli::defn("err_opt");
	      cli::defn("main");
		}
	}
	return 0;
}