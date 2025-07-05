#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include<deque>
#include <algorithm>
#define int long long
using namespace std;
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}
signed main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    priority_queue<pair<int,int>> customers;
    vector<bool> v;
    int q;
    cin>>q;
    int num=0,index=0;
    while(q--)
    {
        int m;
        cin>>m;
        if(m==1)
        {
            int money;
            cin>>money;
            num++;
            customers.push({money,-num});
            v.push_back(0);

        }
        if(m==2)
        {
            while(v[index])
            {
                index++;
            }
            v[index]=true;
            cout<<index+1<<" ";


        }
        if(m==3)
        {
            while (v[-customers.top().second - 1]) {
                customers.pop();
            }

            cout<<-customers.top().second<<" ";
            v[-customers.top().second-1]=true;
            customers.pop();
        }
    }


    return 0;
}
