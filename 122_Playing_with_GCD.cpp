#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;
ll lcm(ll a,ll b)
{
    return a*b/(__gcd(a,b));
}
int main()
{
    Amr;
    ll t; cin>>t;

    while(t--)
    {
        bool flag=true;
        int n; cin>>n;
        vector<int> nums(n);
        vector<int> ans(n+1);
        for(int i=0;i<n;i++){cin>>nums[i];}
        ans[0]=nums[0];
        ans[n]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            ans[i]=lcm(nums[i],nums[i-1]);
        }
        for(int i=1;i<n;i++)
        {
            if(__gcd(ans[i],ans[i-1])!=nums[i-1])
            {
                flag =false;
                break;
            }
        }
        if(!flag){cout<<"NO"<<sp;}
        else cout<<"YES"<<sp;


    }

    return 0;
}
