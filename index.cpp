#include <iostream>
#include <string>
#include <vector>

int main() {
   std::vector<char> inits = {
      'N', 'M', 'P', 'S'
   };
   for(char& init : inits) {
      if(init=='M') continue;
      if(init=='S') std::cout<<'S'<<std::endl;
      std::cout<<init<<' ';
   }
}