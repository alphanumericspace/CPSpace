// Unit Converter

#include <iostream>
#include <string>

#include "cli.h"

int main() {
   std::cout<<"CPSPace Project\n\nThis tool is designed to seamlessly convert\nvarious units and simplify your calculations.\n\n";
   cli::def("main");
   
   std::string input;
	while(input != "0") {
	   cli::def("input");
		std::cin>>input;
		cli::def("ln");
		
		if(input == "1") {
         cli::def("cvtr");
         
         std::string unitCvtr;
         while(unitCvtr != "-1") {
            cli::def("input");
            std::cin>>unitCvtr;
            cli::def("ln");
            
            if(unitCvtr == "1") {
               cli::def("length");
               
               std::string length;
               while(length != "-1") {
                  cli::def("input");
                  std::cin>>length;
                  cli::def("ln");
                  
                  if(length == "-1") {
                     cli::def("cvtr");
                  }
                  else if(length == "0") {
                     cli::def("exit");
                  }
                  else {
                     cli::def("err_opt", length);
                     cli::def("length");
                  }
               }
            } else if(unitCvtr == "2") {
               cli::def("area");
               
               std::string area;
               while(area != "-1") {
                  cli::def("input");
                  std::cin>>area;
                  cli::def("ln");
                  
                  if(area == "-1") {
                     cli::def("cvtr");
                  }
                  else if(area == "0") {
                     cli::def("exit");
                  }
                  else {
                     cli::def("err_opt", area);
                     cli::def("length");
                  }
               }
            }
            else if(unitCvtr == "3") {
               std::cout<<"Done\n";
            }
            else if(unitCvtr == "4") {
               std::cout<<"Done\n";
            }
            else if(unitCvtr == "5") {
               std::cout<<"Done\n";
            }
            else if(unitCvtr == "6") {
               std::cout<<"Done\n";
            }
            else if(unitCvtr == "7") {
               std::cout<<"Done\n";
            }
            else if(unitCvtr == "8") {
               std::cout<<"Done\n";
            }
            else if(unitCvtr == "9") {
               std::cout<<"Done\n";
            }
            else if(unitCvtr == "-1") {
               cli::def("main");
            }
            else if(unitCvtr == "0") {
               cli::def("exit");
            }
            else {
               cli::def("err_opt", unitCvtr);
               cli::def("cvtr");
            }
         }
		}
		else if(input == "2") {
         cli::def("info");
		}
		else if(input == "0") {
         cli::def("exit");
		}
		else {
         cli::def("err_opt", input);
	      cli::def("main");
		}
	}
	return 0;
}