// Unit Converter

#include <iostream>
#include "interface/cli.h"

int main() {
   std::cout<<"  \033[1mAlphanumeric Space Project @CPSpace\033[0m\n\n"
            <<"  This tool is designed to seamlessly convert\n  various units and simplify your calculations.\n\n";
   
   cli::def("home");
   std::string home;
   
   do {
      cli::def("in");
      std::cin>>home;
      cli::def("ln");
      
      if(home == "1") {
         cli::def("cvtr");
         std::string cvtr;
         
         do {
            cli::def("in");
            std::cin>>cvtr;
            cli::def("ln");
         
            if(cvtr == "1") {
               cli::def("length");
               std::string length;
               
               do {
                  cli::def("in");
                  std::cin>>length;
                  cli::def("ln");
                  
                  if(length == "0") cli::def("ex");
                  else if(length == "-1") cli::def("cvtr");
                  else cli::def("uo", length);
               }
               while(length != "-1");
            }
            else if(cvtr == "2") {
               cli::def("area");
               std::string area;
               
               do {
                  cli::def("in");
                  std::cin>>area;
                  cli::def("ln");
                  
                  if(area == "0") cli::def("ex");
                  else if(area == "-1") cli::def("cvtr");
                  else cli::def("uo", area);
               }
               while(area != "-1");
            }
            else if(cvtr == "3") {
               cli::def("volume");
               std::string volume;
               
               do {
                  cli::def("in");
                  std::cin>>volume;
                  cli::def("ln");
                  
                  if(volume == "0") cli::def("ex");
                  else if(volume == "-1") cli::def("cvtr");
                  else cli::def("uo", volume);
               }
               while(volume != "-1");
            }
            else if(cvtr == "4") {
               cli::def("weight");
               std::string weight;
               
               do {
                  cli::def("in");
                  std::cin>>weight;
                  cli::def("ln");
                  
                  if(weight == "0") cli::def("ex");
                  else if(weight == "-1") cli::def("cvtr");
                  else cli::def("uo", weight);
               }
               while(weight != "-1");
            }
            else if(cvtr == "5") {
               cli::def("temp");
               std::string temp;
               
               do {
                  cli::def("in");
                  std::cin>>temp;
                  cli::def("ln");
                  
                  if(temp == "0") cli::def("ex");
                  else if(temp == "-1") cli::def("cvtr");
                  else cli::def("uo", temp);
               }
               while(temp != "-1");
            }
            else if(cvtr == "6") {
               cli::def("speed");
               std::string speed;
               
               do {
                  cli::def("in");
                  std::cin>>speed;
                  cli::def("ln");
                  
                  if(speed == "0") cli::def("ex");
                  else if(speed == "-1") cli::def("cvtr");
                  else cli::def("uo", speed);
               }
               while(speed != "-1");
            }
            else if(cvtr == "7") {
               cli::def("press");
               std::string press;
               
               do {
                  cli::def("in");
                  std::cin>>press;
                  cli::def("ln");
                  
                  if(press == "0") cli::def("ex");
                  else if(press == "-1") cli::def("cvtr");
                  else cli::def("uo", press);
               }
               while(press != "-1");
            }
            else if(cvtr == "8") {
               cli::def("power");
               std::string power;
               
               do {
                  cli::def("in");
                  std::cin>>power;
                  cli::def("ln");
                  
                  if(power == "0") cli::def("ex");
                  else if(power == "-1") cli::def("cvtr");
                  else cli::def("uo", power);
               }
               while(power != "-1");
            }
            else if(cvtr == "9") {
               cli::def("data");
               std::string data;
               
               do {
                  cli::def("in");
                  std::cin>>data;
                  cli::def("ln");
                  
                  if(data == "0") cli::def("ex");
                  else if(data == "-1") cli::def("cvtr");
                  else cli::def("uo", data);
               }
               while(data != "-1");
            }
            else if(cvtr == "10") {
               cli::def("dttm");
               std::string dttm;
               
               do {
                  cli::def("in");
                  std::cin>>dttm;
                  cli::def("ln");
                  
                  if(dttm == "0") cli::def("ex");
                  else if(dttm == "-1") cli::def("cvtr");
                  else cli::def("uo", dttm);
               }
               while(dttm != "-1");
            }
            else if(cvtr == "0") cli::def("ex");
            else if(cvtr == "-1") cli::def("home");
            else cli::def("uo", cvtr);
         }
         while(cvtr != "-1");
      }
      else if(home == "2") {
         
      }
      else if(home == "3") {
         
      }
      else if(home == "4") {
         
      }
      else if(home == "5") {
         
      }
      else if(home == "6") {
         
      }
      else if(home == "0") cli::def("ex");
      else cli::def("uo", home);
   }
   while(home != "0");
}