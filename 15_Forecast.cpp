#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
 double a,b,c;
 cin>>a>>b>>c;
 double x1=(-b+sqrt(b*b-4*a*c))/(2*a);
 double x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  cout<<fixed<<setprecision(12)<<max(x1,x2)<<endl<<min(x1,x2);
}