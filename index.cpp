#include <iostream>
#include <string>
#include <vector>

int main() {
   std::vector<int> numbers = {
      12, 2, 20, 6
   };
   for(int& number : numbers) {
      number*=2;
      std::cout<<number<<std::endl;
   }
}