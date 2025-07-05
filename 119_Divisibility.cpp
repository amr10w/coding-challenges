#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;

ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a,b);
}

void solve(){
    ll LCM=2;
    for(ll i=3;i<=10;i++)
    {
        LCM=lcm(LCM,i);
    }
    ll n;
    cin>>n;
    cout<<n/LCM;
}
int main()
{
    Amr;
    //int t;cin>>t;while(t--){
    solve();
    //}

    return 0;
}
