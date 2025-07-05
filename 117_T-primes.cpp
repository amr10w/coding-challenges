#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;
const ll MAX = 1e6 + 1;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> vec(n);
    for(auto &e:vec) {cin>>e; }
    vector<bool> is_Prime(MAX,true);
    is_Prime[0]=0; is_Prime[1]=0;
    for(ll i=2;i*i<MAX;i++)
    {
        if(is_Prime[i])
            for(ll j=i*i;j<MAX;j+=i)
            {
                is_Prime[j]=false;
            }
    }
    for(int i=0;i<n;i++)
    {
        ll x=vec[i];
        double y=sqrt(double(x));
        ll w=sqrt(double(x));
        if(y==w&&is_Prime[w])
            cout<<"YES"<<sp;
        else
            cout<<"NO"<<sp;
    }


}
int main()
{   Amr;

    //int t;cin>>t;while(t--){
        solve();
        //}

    return 0;
}
