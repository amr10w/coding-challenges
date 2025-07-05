#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include <algorithm>
#define int long long
using namespace std;
signed main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n,a,d;
    queue<int> q;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        q.push(a);
    }
    while(d--)
    {
        q.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }


return 0;
}

