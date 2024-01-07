// Unit Converter

#include <iostream>
#include "cli.h"

using namespace cli;

int main() {
   std::cout<<"CPSPace Project\n\n"
            <<"This tool is designed to seamlessly convert\nvarious units and simplify your calculations.\n\n"
            <<"GitHub: https://github.com/alphanumericspace/CPSpace/ \n\n";
   
   def("main");
   
   std::string main;
   do {
      def("in");
      std::cin>>main;
      def("ln");
      
      if(main == "1") {
         def("lenght");
         std::string length;
         do {
            def("in");
            std::cin>>length;
            def("ln");
            if(length == "0") def("exit");
            else def("unav", length);
         } while(length != "-1");
         def("main");
      } else if(main == "2") {
         def("area");
         std::string area;
         do {
            def("in");
            std::cin>>area;
            def("ln");
            if(area == "0") def("exit");
            else def("unav", area);
         } while(area != "-1");
         def("main");
      } else if(main == "3") {
         def("volume");
         std::string volume;
         do {
            def("in");
            std::cin>>volume;
            def("ln");
            if(volume == "0") def("exit");
            else def("unav", volume);
         } while(volume != "-1");
         def("main");
      } else if(main == "4") {
         def("weight");
         std::string weight;
         do {
            def("in");
            std::cin>>weight;
            def("ln");
            if(weight == "0") def("exit");
            else def("unav", weight);
         } while(weight != "-1");
         def("main");
      } else if(main == "5") {
         def("temp");
         std::string temp;
         do {
            def("in");
            std::cin>>temp;
            def("ln");
            if(temp == "0") def("exit");
            else def("unav", temp);
         } while(temp != "-1");
         def("main");
      } else if(main == "6") {
         def("speed");
         std::string speed;
         do {
            def("in");
            std::cin>>speed;
            def("ln");
            if(speed == "0") def("exit");
            else def("unav", speed);
         } while(speed != "-1");
         def("main");
      } else if(main == "7") {
         def("press");
         std::string press;
         do {
            def("in");
            std::cin>>press;
            def("ln");
            if(press == "0") def("exit");
            else def("unav", press);
         } while(press != "-1");
         def("main");
      } else if(main == "8") {
         def("power");
         std::string power;
         do {
            def("in");
            std::cin>>power;
            def("ln");
            if(power == "0") def("exit");
            else def("unav", power);
         } while(power != "-1");
         def("main");
      } else if(main == "9") {
         def("data");
         std::string data;
         do {
            def("in");
            std::cin>>data;
            def("ln");
            if(data == "0") def("exit");
            else def("unav", data);
         } while(data != "-1");
         def("main");
      } else if(main == "0") def("exit");
      else def("unav", main);
      
   } while(main != "0");
   
	return 0;
}