#include <iostream>
#include <string>
#include <array>
#include <bits/stdc++.h>

//#define int long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);


int n,m,ma=0,ma2=0;
cin>>n>>m;
vector<int> v(n);
vector<int> res(n,0);
for(int i=0 ;i<n;i++)
{
    cin>>v[i];
   ma= max(ma,v[i]);

    if(v[i]>m){
    res[i]=v[i]/m;
    if(v[i]%m!=0)
        res[i]++;
   }
   ma2= max(ma2,res[i]);

}
if(ma<=m)
{
    cout<<n;
    return 0;
}
/*for(int i=n-1 ;i>=0;i--)
{
   cout<<res[i]<<" ";

}*/
for(int i=n-1 ;i>=0;i--)
{
   if(res[i]==ma2)
   {
       cout<<i+1;
       return 0;
   }

}


}
