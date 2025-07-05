#include <bits/stdc++.h>


using namespace std ;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
cout.tie(0);

int t,nq,n;
cin>>t;

while(t--)
{

   cin>> n>>nq;
   long long a[n+5]={0},arr[n+5]={0};
    cin>>a[0];
    arr[0]=a[0];
   for(int i=1 ;i<n;i++)
   {
       cin>>a[i];
       arr[i]=a[i]+arr[i-1];
   }
   while(nq--)
   {
      int l,r,k,sum;
       cin>>l>>r>>k;
       l--;
       r--;
       if(l!=0)
       sum=(arr[n-1]-(arr[r]-arr[l-1]))+(r-l+1)*k;
       else
          sum=(arr[n-1]-(arr[r]))+(r-l+1)*k;
     //cout <<sum<<endl;
      if(sum%2==0)
        cout <<"NO\n";
       else
         cout <<"YES\n";
   }

}

}
