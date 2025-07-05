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
    int n;
    cin>>n;
    deque<int> o_dq1;
    deque<int> o_dq2;
    deque<int> dq1;
    deque<int> dq2;
    int k1,k2;
    cin>>k1;
    for(int i=0;i<k1;i++)
    {
        int a;
        cin>>a;
        o_dq1.push_back(a);
    }
    cin>>k2;
    for(int i=0;i<k2;i++)
    {
        int a;
        cin>>a;
        o_dq2.push_back(a);
    }
    dq1=o_dq1;
    dq2=o_dq2;
    int cnt=0;
    while(!dq1.empty()&&!dq2.empty())
    {
        if(dq1.front()>dq2.front())
        {
            dq1.push_back(dq2.front());
            dq2.pop_front();
            dq1.push_back(dq1.front());
            dq1.pop_front();
            cnt++;
        }
        else if(dq1.front()<dq2.front())
        {
            dq2.push_back(dq1.front());
            dq1.pop_front();
            dq2.push_back(dq2.front());
            dq2.pop_front();
            cnt++;
        }
        if((dq1==o_dq1&&dq2==o_dq2)||cnt>=10000)
        {
                cout<<-1;
                return 0;
        }
    }
    if(dq1.empty())
    {
       cout<<cnt<<" "<<2;
    }
    else if(dq2.empty())
    {
       cout<<cnt<<" "<<1;
    }




    return 0;
}
