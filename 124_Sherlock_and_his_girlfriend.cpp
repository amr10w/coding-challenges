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
    ll n;
    cin>>n;
    vector<bool> prime(100002,true);
    prime[0]=prime[1]=false;
    for(ll i=2;i*i<100002;i++)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<100002;j+=i)
            {
                prime[j]=false;

            }
        }
    }


    if(n>2)
    cout<<2<<sp;
    else
    cout<<1<<sp;
    for(int i=2;i<=n+1;i++)
    {
        if(prime[i])
        cout<<1<<" ";
        else
        cout<<2<<" ";
    }


}
int main()
{
    Amr;
    //ll t; cin>>t;
    //while(t--){
    solve();
    // }

    return 0;
}
