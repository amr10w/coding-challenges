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

    int t,a;
    cin>>t;
    queue<int> q;
    while(t--)
    {
        cin>>a;
        if(a==1)
        {
            std::cin>>a;
           q.push(a);
        }
        else if(a==2)
        {
            if(!q.empty())
            {
                q.pop();
            }

        }
        else if(a==3)
        {
            if(!q.empty())
            {
                std::cout<<q.front()<<"\n";
            }
            else
            {
                std::cout<<"Empty!\n";
            }

        }


    }






return 0;

}

