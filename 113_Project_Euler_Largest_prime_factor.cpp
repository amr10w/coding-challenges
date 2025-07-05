#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> primes;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
                primes.push_back(i);
            }
        }
    }
    if(n>1) primes.push_back(n);
    cout<<primes[primes.size()-1]<<"\n";
}
int main()
{
    Amr;
    int t;cin>>t;while(t--){
        solve();
        }

    return 0;
}
