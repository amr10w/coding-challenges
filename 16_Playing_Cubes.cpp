#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
 int n,m,x;
 cin>>n>>m;
 if(n<m){
    x=n+m-1-n;
 cout<<x<<" "<< n;}
 else {
    x=n+m-1-m;
 cout<<x<<" "<< m;}

}