#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
 long long n,m,x;
 cin>>n>>m;
if(n==1) x=1;

 if(m<ceil(n*1.0/2))
 {
     x=m+1;
 }else if (m>ceil(n*1.0/2))
 {
     x=m-1;
 }
 else if(m==ceil(n*1.0/2)&&n!=1)
 {
   if(n%2==0)  {x=m+1;}
   else {x=m-1;}
 }

 cout <<x;


}
