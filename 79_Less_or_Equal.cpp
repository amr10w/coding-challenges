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

    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(n>1)
    {
        if(k==0&&v[0]==1)
        {
            cout<<-1;
            return 0;
        }
        else if(k==0){
            cout<<v[0]-1;
            return 0;
        }
        int num=v[k]-v[k-1];
        if(!num)
        {
            cout<<-1;
        }
        else
        {
            cout<<v[k-1];
        }
    }
    if(n==1)
    {
        if(k==0&&v[0]<2)
            cout<<-1;
        else if(k==0)
            cout<<1;
        else if(k==1)
            cout<<v[0];
    }


    return 0;
}

