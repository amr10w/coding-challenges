#include <iostream>
#include <stdio.h>
#include <cmath>

int main() {
   long long n,m,c;
   std::cin>>n>>m>>c;
   long long x= ceil((double)n/c);
   long long y = ceil((double)m/c);

   std::cout<< x*y ;
}
