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
    ll n,x,y;
    cin>>n>>x>>y;
    ll num1=n/x;
    ll num2=n/y;
    ll cnt=n/lcm(x,y);
    ll sum=0;
    num1-=cnt;
    num2-=cnt;
    num1=n-num1;
    sum+=((n*(n+1))/2)-((num1*(num1+1))/2);
    sum-=(num2*(num2+1))/2;
    cout<<sum<<sp;

}
int main()
{
    Amr;
    ll t; cin>>t;
    while(t--){ solve(); }

    return 0;
}
