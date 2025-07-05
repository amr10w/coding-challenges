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
     int n;
     std::cin>>n;
     std::vector<long long> num1(n);
     std::vector<long long> num2(n);

     long long diff1=0,diff2=0;

     for(long long i=0;i<n;i++)
     {
         std::cin>>num1[i];

     }
     for(long long i=0;i<n;i++)
     {
         std::cin>>num2[i];
         if(num1[i]>num2[i])
         {
             diff1+=num1[i]-num2[i];
         }
         else
         {
             diff2+=(num2[i]-num1[i]);
         }

     }
     if(diff1==diff2)
     {
         std::cout<<diff1<<"\n";
     }
     else{
        std::cout<<-1<<"\n";
     }






 }


return 0;

}

