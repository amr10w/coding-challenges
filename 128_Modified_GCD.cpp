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
   ll a,b; cin>>a>>b;
   ll n; cin>>n;
   ll gcd=__gcd(a,b);
   vector<ll> div= getDivisors(gcd);


   while(n--)
   {
       ll low ,high; cin>>low>>high;
       if(low>gcd)
       {
           cout<<-1<<sp;
           continue;
       }
       ll ans=upper_bound(div.begin(),div.end(),high)-div.begin()-1;
       if(div[ans]<=high&&div[ans]>=low)
        cout<<div[ans]<<sp;
       else cout<<-1<<sp;
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
