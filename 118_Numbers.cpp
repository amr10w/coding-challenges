#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;

void solve(){
    int n,l;
    cin>>n;
    int sum=0;
    int gcd=0;
    for(int j=2;j<n;j++)
    {
        l=n;
        while(l)
        {
            sum+=l%j;
            l/=j;
        }
    }
    gcd=__gcd(sum,n-2);
    cout<<sum/gcd<<"/"<<(n-2)/gcd;

}
int main()
{
    Amr;
    //int t;cin>>t;while(t--){
    solve();
    //}

    return 0;
}
