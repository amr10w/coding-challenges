#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>

int main() {
     std::ios_base::sync_with_stdio(0);
 std::cin.tie(0);
 std::cout.tie(0);

 long long n;
 std::cin>>n;
 if(n==2||n==3)
 {
     std::cout<<"NO SOLUTION";
     return 0;
 }
 if(n==4)
 {
     std::cout<<"2 4 1 3";
     return 0;
 }
    if(n==1)
 {
     std::cout<<"1";
     return 0;
 }

 for(long long i=n;i>0;i--)
 {
     if(i%2==0)
        std::cout<< i<<" ";
 }
 for(long long i=n;i>0;i--)
 {
     if(i%2!=0)
        std::cout<< i<<" ";
 }


return 0;

}

