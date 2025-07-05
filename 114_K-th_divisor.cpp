#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> divisors;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            divisors.push_back(i);
            if(sqrt(n)!=i)
            {
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());
    k--;
    if(k<divisors.size())
    cout<<divisors[k];
    else
    cout<<-1;
}
int main()
{
    Amr;
    //int t;cin>>t;while(t--){
        solve();
    //    }

    return 0;
}
