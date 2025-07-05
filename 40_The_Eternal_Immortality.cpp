#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int main(){

long long a,b,total=1;

cin>>a>>b;
for(long long i=a+1;i<=b;i++)
{
	total=(total*(i%10) %10);
	if(!total)
	break;
}
cout<<total;

}