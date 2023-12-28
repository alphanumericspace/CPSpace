#include <iostream>
#include <string>
#include <vector>

int main() {
   std::vector<char> inits = {
      'N', 'M', 'P', 'S'
   };
   for(char& init : inits) {
      if(init=='P') continue;
      std::cout<<init<<' ';
   }
}