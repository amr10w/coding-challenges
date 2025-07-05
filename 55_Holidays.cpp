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
int  arr[102]={0};
  for(int i=0 ;i<m;i++)
  {
      int a,b;
      cin>>a>>b;
      arr[a]++;
      arr[b+1]--;
  }
  for(int i=1 ;i<=n;i++)
  {
      arr[i]+=arr[i-1];
  }
  int k=0,mi=0;
  bool flag=1;
  for(int i=1 ;i<=n;i++)
  {
      if(arr[i]!=1)
      {
          mi =i;
          k=arr[i];
          flag=0;
          break;
      }
  }
  if(flag)
    cout<<"OK";
  else
  cout<<mi <<" "<<k;

    return 0;
}
