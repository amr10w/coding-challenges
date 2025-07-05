#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;
ll lcm(ll a,ll b)
{
    return a*b/(__gcd(a,b));
}

void solve()
{
    ll n;cin>>n;
    vector<int> nums(n+1,0);
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        if(a<=n) nums[a]++;
    }
    vector<int> freq(n+1,0);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            freq[j]+=nums[i];
        }
    }
    int maxu=0;
    for(auto &e:freq)
    {
        maxu=max(maxu,e);
    }
    cout<<maxu<<sp;
}
int main()
{
    Amr;
    ll t; cin>>t;
    while(t--){
    solve();
    }

    return 0;
}
