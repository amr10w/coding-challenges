#include <iostream>
#include <stdio.h>
#include <cmath>

int main() {
   int n,m;
   std::cin>>n>>m;

   if(m>n)
   {
       std::cout<<-1;
       return 0;
   }
   int l_steps =ceil(float(n)/2);
   if(l_steps%m>0)
    std::cout<< l_steps+m-(l_steps%m);
   else
    std::cout<< l_steps;

return 0;

}
