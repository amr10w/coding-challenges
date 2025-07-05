#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    int gcd=0;
    for(auto& e:nums) {cin>>e;gcd=__gcd(gcd,e); }
    sort(nums.rbegin(),nums.rend());
    cout<<nums[0]/gcd<<sp;

}
int main()
{
    Amr;

    int t;cin>>t;while(t--){
        solve();
        }

    return 0;
}
