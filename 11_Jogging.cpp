#include <iostream>
#include <stdio.h>
#include <cmath>

int main() {

    int A,B,C,D,E,F,X;
    std::cin>>A>>B>>C>>D>>E>>F>>X;
    //A=4,B= 3 ,C=3, D=6, E=2, F=5 ,X=10;

    int going_T = A*(X/(A+C)) + std::min(A,(X%(A+C)));
    int going_A = D*(X/(D+F)) +   std::min(A,(X%(D+F)));

   if(going_T*B>going_A*E)
   {
       std::cout<<"Takahashi"<<"\n";
   }
   else if(going_T*B<going_A*E)
    {
        std::cout<<"Aoki"<<"\n";
    }
    else
    {
         std::cout<<"Draw"<<"\n";
    }

return 0;

}
