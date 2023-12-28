#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

int main() {
   std::vector<int> number = {
      12, 2, 20, 6
   };
   int min, max;
   min = std::ranges::min(number);
   max = std::ranges::max(number);
   
   std::cout<<"Smallest: "<<min<<std::endl;
   std::cout<<"Greatest: "<<max<<std::endl;
}