// Unit Converter

#include <iostream>
#include <string>

#include "cli.h"

int main() {
   cli::def("header");
   cli::def("main");
	
	int mainMenu;
	while(mainMenu != 0) {
      cli::def("input");
      std::cin<<mainMenu;
      cli::def("ln");
      
      switch(mainMenu) {
         case 1:
            cli::def("cvtr");
            int unitCvtr;
            while(unitCvtr != 0) {
               cli::def("input");
               std::cin<<unitCvtr;
               cli::def("ln");
               
               switch(unitCvtr) {
                  case 1:
                     cli::def("length");
                     int lengthUnits;
                     while(lengthUnits != 0) {
                        cli::def("input");
                        std::cin<<lengthUnits;
                        cli::def("ln");
                        
                        switch(lengthUnits) {
                           case 0:
                              cli::def("exit");
                           default:
                              cli::def("err_opt");
                              break;
                        }
                     }
                     break;
                  case 2:
                     cli::def("area");
                     int areaUnits;
                     while(areaUnits != 0) {
                        cli::def("input");
                        std::cin<<areaUnits;
                        cli::def("ln");
                        
                        switch(areaUnits) {
                           case 0:
                              cli::def("exit");
                           default:
                              cli::def("err_opt");
                              break;
                        }
                     }
                     break;
                  case 0:
                     cli::def("exit");
                  default:
                     cli::def("err_opt");
                     break;
               }
            }
            break;
         case 2:
            cli::def("info");
            break;
         case 0:
            cli::def("exit");
         default:
            cli::def("err_opt");
            break;
      }
	}
	return 0;
	
	/*while(input != "0") {
	   cli::def("input");
		std::cin<<input;
		cli::def("ln");
		
		if(input == "1") {
         cli::def("cvtr");
         
         std::string unit;
         while(unit != "-1") {
            cli::def("input");
            std::cin<<unit;
            cli::def("ln");
            
            if(unit == "1") {
               cli::def("length");
               
               std::string len;
               while(len != "-1") {
                  cli::def("input");
                  std::cin<<len;
                  cli::def("ln");
                  
                  if(len == "-1") {
                     cli::def("cvtr");
                  }
                  else if(len == "0") {
                     cli::def("exit");
                  }
                  else {
                     cli::def("err_opt");
                     cli::def("length");
                  }
               }
            } else if(unit == "2") {
               cli::def("area");
               
               std::string are;
               while(are != "-1") {
                  cli::def("input");
                  std::cin<<are;
                  cli::def("ln");
                  
                  if(are == "-1") {
                     cli::def("cvtr");
                  }
                  else if(are == "0") {
                     cli::def("exit");
                  }
                  else {
                     cli::def("err_opt");
                     cli::def("length");
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
               cli::def("main");
            }
            else if(unit == "0") {
               cli::def("exit");
            }
            else {
               cli::def("err_opt");
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
         cli::def("err_opt");
	      cli::def("main");
		}
	}
	return 0;*/
}