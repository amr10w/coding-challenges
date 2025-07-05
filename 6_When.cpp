#include <iostream>
#include <stdio.h>
#include <cmath>

int main() {
   int k;
   std::cin>>k;
   if (k>=60)
   {
       if  (k>=60 && k<70)
        std::cout<<"22:0"<<k-60;
       else
        std::cout<<"22:"<<k-60;
   }
   else
   {
       if  (k>=0 && k<10)
        std::cout<<"21:0"<<k;
       else
        std::cout<<"21:"<<k;
   }


}
