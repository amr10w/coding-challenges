#include <iostream>
#include <stdio.h>

int main() {
   int w;
   std::cin>>w;

   std::cout<< (w%2==0&& w!=2 ? "YES":"NO") ;
}
