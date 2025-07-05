#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include<deque>
#include <algorithm>
#define int long long
using namespace std;
signed main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    cin>>n;
    vector<char> directions(n);
    vector<int> coordinate(n);
    queue<int> index;
    int minSecond=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>directions[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>coordinate[i];
    }
    for(int i=1;i<n;i++)
    {
        if(directions[i]=='L' && directions[i-1]=='R')
        {
            index.push(i);
        }
    }
    if(index.empty())
    {
        minSecond=-1;

    }
    while(index.size())
    {
        int num=coordinate[index.front()]-coordinate[index.front()-1];
        minSecond=std::min(minSecond,num/2);
        index.pop();

    }
    cout<<minSecond;

return 0;
}

