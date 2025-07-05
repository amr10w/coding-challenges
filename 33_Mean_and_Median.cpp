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
     int mean,med;
     std::cin>>mean>>med;
     int x = 3 *mean -2*med;
     if(x>med)
     {
         std::cout<<med<<" "<<med<<" "<<x<<"\n";
     }
     else{
        std::cout<<x<<" "<<med<<" "<<med<<"\n";
     }
 }



return 0;

}

