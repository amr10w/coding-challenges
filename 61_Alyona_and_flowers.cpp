#include <iostream>
#include <string>
//#define int long long
using namespace std;



signed main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
  int n,m;
  cin>>n>>m;
  int arr[n+2]={0};
 for(int i=1;i<=n;i++)
 {
     cin>>arr[i];
 }
  for(int i=1;i<=n+1;i++)
 {
    arr[i]+=arr[i-1];
 }
 int ma=0;
 for(int i=0;i<m;i++)
 {int l,r;
    cin>>l>>r;
    if(arr[r]-arr[l-1]>0)
        ma+=arr[r]-arr[l-1];
 }
 cout<<ma;


    return 0;
}
