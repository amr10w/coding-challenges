#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;

void solve(int& counter)
{
    map<char,int> mp;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(mp.find(s[i])==mp.end()){mp[s[i]]=1;}
        else mp[s[i]]++;
    }
    vector<bool> is_prime(2001,true);
    is_prime[0]=is_prime[1]=0;
    for(ll i=2;i*i<2001;i++)
    {
        if(is_prime[i])
        {
            for(ll j=i*i;j<2001;j+=i)
            {
                is_prime[j]=false;
            }
        }
    }
    vector<char> ans;
    for(auto &e:mp)
    {
        if(is_prime[e.second])
        {
            ans.push_back(e.first);
        }
    }
    if(ans.size()!=0)
    {
        sort(ans.begin(),ans.end());
        cout<<"Case "<<counter<<": ";
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
    }
    else{
        cout<<"Case "<<counter<<": empty";
    }
    cout<<sp;
    counter++;

}
int main()
{
    Amr;
    int counter=1;
    int t;cin>>t;while(t--){
        solve(counter);
        }

    return 0;
}
