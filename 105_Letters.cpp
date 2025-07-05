#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    vector<ll> pri(n);
    for(auto &e:v)
    {
        cin>>e;
    }
    pri[0]=v[0];
    for(ll i=1;i<n;i++)
    {
        pri[i]=pri[i-1]+v[i];
    }
    while(m--)
    {
        ll x;
        cin>>x;
        ll stage=lower_bound(pri.begin(),pri.end(),x)-pri.begin();
        ll room;
        if(stage==0)
        {
            room=x;
        }
        else{
            room=x-pri[stage-1];
        }
        cout<<stage+1<<" "<<room<<"\n";
    }

    return 0;
}
