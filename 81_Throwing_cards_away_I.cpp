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
    while(n)
    {
        queue<int> q;
        queue<int> q1;
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        int i=1;
        while(q.size()>1)
        {
           if(i%2!=0)
           {
               q1.push(q.front());
               q.pop();
           }
           if(i%2==0)
           {
              q.push(q.front());
              q.pop();
           }
           i++;
        }
        if(n==1)
        {
            cout<<"Discarded cards:";
            cout<<"\nRemaining card: "<<1<<"\n";
            cin>>n;
            continue;
        }
        else
        {
            cout<<"Discarded cards: "<<q1.front();
            q1.pop();
        }

        for(int i=1;i<n-1;i++)
        {
            cout<<", "<<q1.front();
            q1.pop();

        }
        cout<<"\nRemaining card: "<<q.front()<<"\n";
        cin>>n;
    }


    return 0;
}
