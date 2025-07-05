#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<unordered_set>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n,m;
    cin>>n>>m;
    map<string,int> mp;
    while(n--)
    {
        string s;
        int x;
        cin>>s>>x;
        mp[s]=x;
    }
    while(m--)
    {
        string s;
        int sum=0;
        cin>>s;
        while(s!=".")
        {
            if(mp.find(s)!=mp.end())
            {
                sum+=mp[s];
            }
            cin>>s;
        }
        cout<<sum<<"\n";

    }


    return 0;
}
