#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>

int main() {
     std::ios_base::sync_with_stdio(0);
 std::cin.tie(0);
 std::cout.tie(0);

   int t;
   std::cin>>t;
   while(t--)
   {
       int a,b,num1,num2,sum,sumr;
       std::cin>>a>>b;
       num1=a%10;
       num2=b%10;

       while(a/=10)
       {
           num1 = num1*10 + (a%10);
       }
       while(b/=10)
       {
           num2 = num2*10 + (b%10);
       }
       sum =num1+num2;
       sumr=sum%10;
       while(sum/=10)
       {
           sumr = sumr*10 + (sum%10);
       }
       std::cout<<sumr<<"\n";
   }

return 0;

}

