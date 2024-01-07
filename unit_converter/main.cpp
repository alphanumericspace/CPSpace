// Unit Converter

#include <iostream>
#include "cli.h"

int main() {
   std::cout<<"CPSPace Project\n\n"
            <<"This tool is designed to seamlessly convert\nvarious units and simplify your calculations.\n\n"
            <<"GitHub: https://github.com/alphanumericspace/CPSpace/ \n\n";
   
   cli::def("main");
   
   std::string main;
   do {
      cli::def("in");
      std::cin>>main;
      cli::def("ln");
      
      if(main == "1") {
         cli::def("length");
         std::string length;
         do {
            cli::def("in");
            std::cin>>length;
            cli::def("ln");
            if(length == "0") cli::def("exit");
            else cli::def("unav", length);
         } while(length != "-1");
         cli::def("main");
      } else if(main == "2") {
         cli::def("area");
         std::string area;
         do {
            cli::def("in");
            std::cin>>area;
            cli::def("ln");
            if(area == "0") cli::def("exit");
            else cli::def("unav", area);
         } while(area != "-1");
         cli::def("main");
      } else if(main == "3") {
         cli::def("volume");
         std::string volume;
         do {
            cli::def("in");
            std::cin>>volume;
            cli::def("ln");
            if(volume == "0") cli::def("exit");
            else cli::def("unav", volume);
         } while(volume != "-1");
         cli::def("main");
      } else if(main == "4") {
         cli::def("weight");
         std::string weight;
         do {
            cli::def("in");
            std::cin>>weight;
            cli::def("ln");
            if(weight == "0") cli::def("exit");
            else cli::def("unav", weight);
         } while(weight != "-1");
         cli::def("main");
      } else if(main == "5") {
         cli::def("temp");
         std::string temp;
         do {
            cli::def("in");
            std::cin>>temp;
            cli::def("ln");
            if(temp == "0") cli::def("exit");
            else cli::def("unav", temp);
         } while(temp != "-1");
         cli::def("main");
      } else if(main == "6") {
         cli::def("speed");
         std::string speed;
         do {
            cli::def("in");
            std::cin>>speed;
            cli::def("ln");
            if(speed == "0") cli::def("exit");
            else cli::def("unav", speed);
         } while(speed != "-1");
         cli::def("main");
      } else if(main == "7") {
         cli::def("press");
         std::string press;
         do {
            cli::def("in");
            std::cin>>press;
            cli::def("ln");
            if(press == "0") cli::def("exit");
            else cli::def("unav", press);
         } while(press != "-1");
         cli::def("main");
      } else if(main == "8") {
         cli::def("power");
         std::string power;
         do {
            cli::def("in");
            std::cin>>power;
            cli::def("ln");
            if(power == "0") cli::def("exit");
            else cli::def("unav", power);
         } while(power != "-1");
         cli::def("main");
      } else if(main == "9") {
         cli::def("data");
         std::string data;
         do {
            cli::def("in");
            std::cin>>data;
            cli::def("ln");
            if(data == "0") cli::def("exit");
            else cli::def("unav", data);
         } while(data != "-1");
         cli::def("main");
      } else if(main == "0") cli::def("exit");
      else cli::def("unav", main);
      
   } while(main != "0");
   
	return 0;
}