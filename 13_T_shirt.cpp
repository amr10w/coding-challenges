#include <iostream>
#include <stdio.h>
#include <cmath>

int main() {

   double A,B,C,X;
   std::cin>>A>>B>>C>>X;
   //A=1 ,B=2 ,C =1 ,X=1;
   double ans;
   if(X<=A)
   {
       ans=1;
       printf("%.12lf",ans);
   }
   else if (X>A && X<=B)
   {
       ans= C /(B-A);
       printf("%.12lf",ans);
   }
   else if (X>B)
   {
       ans=0;
       printf("%.12lf",ans);
   }

return 0;

}
