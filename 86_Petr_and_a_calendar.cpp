#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;
ll lcm(ll a,ll b)
{
    return a*b/(__gcd(a,b));
}
vector<ll> getDivisors(ll n)
{
    vector<ll> divisor;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            divisor.push_back(i);
            if(n!=i*i)
            {
                divisor.push_back(n/i);
            }
        }
    }
    sort(divisor.begin(),divisor.end());
    return divisor;
}
void solve()
{
   int m,d; cin>>m>>d;
   if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
   {
       if(d>=1&&d<=5)
       {
           cout<<5;
       }else cout<<6;
   }
   else if(m==2)
   {
       if(d==1) cout<<4;
       else cout<<5;
   }
   else
   {
       if(d>=1&&d<=6)
       {
           cout<<5;
       }else cout<<6;
   }
}
int main()
{
    Amr;
    //ll t; cin>>t;
    //while(t--){
    solve();
    //}

    return 0;
}
