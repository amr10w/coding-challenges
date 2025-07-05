#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<map>
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
    map<string ,int> si;
    while(n--)
    {
        string worker;
        cin>>worker;
        if(si.find(worker)==si.end())
        {
            cout<<"OK"<<"\n";
            si[worker]++;
        }
        else
        {
            cout<<worker<<si[worker]<<"\n";
            si[worker]++;
        }

    }

    return 0;
}
