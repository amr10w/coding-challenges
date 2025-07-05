#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,a,b,steps,x;
cin>>n>>a>>b;
steps =abs(b)%n;
if(b>=0)
{
    x=steps+a;
    if(x>n)
        x=x-n;
    cout <<x;
}
else {
    x=-steps+a+n;
    if(x>n)
        x=x-n;
    cout <<x;
}
}
