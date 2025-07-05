#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(auto &e:v)
    {
        cin>>e;
    }
    sort(v.begin(),v.end());
    while(m--)
    {
        int x;
        cin>>x;
        cout<<upper_bound(v.begin(),v.end(),x)-v.begin()<<" ";
    }

    return 0;
}

