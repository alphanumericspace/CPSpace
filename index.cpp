#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

int main() {
   std::vector<int> number = {
      12, 2, 20, 6
   };
   int mn, mx;
   mn = std::ranges::min(number);
   mx = std::ranges::max(number);
   
   std::cout<<"Smallest: "<<min<<std::endl;
   std::cout<<"Greatest: "<<max<<std::endl;
}