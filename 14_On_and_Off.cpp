#include <iostream>
#include <stdio.h>
#include <cmath>

int main() {

   int S,T,X;
   std::cin>>S>>T>>X;
   if(T>=S)
   {
       std::cout<<(X+.5>=S && X+.5<= T ? "Yes" :"No");

   }
   else
   {
       if(X>=S)
       {
           std::cout<<"Yes";
           return 0;
       }
       if(X<T)
       {
            std::cout<<"Yes";
           return 0;
       }
       std::cout<<"No";

   }
return 0;

}
