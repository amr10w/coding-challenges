#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include<deque>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> hp(n);
        for(int i=0; i<n; i++)
        {
            cin>>hp[i].second;
        }
        for(int i=0; i<n; i++)
        {
            cin>>hp[i].first;
        }
        sort(hp.begin(),hp.end());
        int i=0,damage=k;
        bool flag =1;
        while(true)
        {
            if(k<=0)
            {
                flag=0;
                break;
            }
            if(i==n)
            {
                flag=1;
                break;
            }
            if(hp[i].second<=damage)
            {
                i++;
                continue;
            }
            else
            {
                k-=hp[i].first;
                damage+=k;
            }

        }
        if(flag)
        {
            cout<<"YES"<<"\n";
        }

        else
        {
            cout<<"NO"<<"\n";
        }



    }

    return 0;
}

