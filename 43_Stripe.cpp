#include <iostream>




using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
     cin.tie(0);
cout.tie(0);
int n;
cin>>n;
long long a[n] ,b[n];
cin>>a[0];

for(int i=1 ;i<n;i++)
{
    cin>>a[i];
    a[i]= a[i]+a[i-1];

}
int cou=0;
for(int i=0 ;i<n-1;i++)
{
    if(a[i]==a[n-1]-a[i])
        cou++;

}
cout<<cou;






}
