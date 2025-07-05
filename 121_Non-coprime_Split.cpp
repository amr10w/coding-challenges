#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;

ll lcm(int &a,int &b)
{
    return a*b/(__gcd(a,b));
}
bool is_prime(ll x)
{
    for(ll i=2; i*i<=x;i++)
    {
        if(x%i==0) return 0;
    }
    return 1;
}

void solve(){
ll l,r;
cin>>l>>r;
if(l==r)
{
    if(is_prime(l))
    {
        cout<<-1<<sp;
    }
    else
    {
        for(ll i =2;i*i<=l;i++)
        {
            if(l%i==0)
            {
                cout<<i<<" "<<l-i<<sp;
                break;
            }
        }

    }
}
else if(r<=3)
{
    cout<<-1<<sp;
}
else if(r%2==0)
{
    cout<<2<<" "<<r-2<<sp;
}
else
{
    cout<<2<<" "<<r-3<<sp;
}
}

int main()
{
    Amr;
    ll t;cin>>t;while(t--){
    solve();
    }

    return 0;
}
