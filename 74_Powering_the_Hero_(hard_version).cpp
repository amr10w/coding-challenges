#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include<deque>
//#include<priority_queue>
#include <algorithm>
#define int long long

using namespace std;
signed main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int t,n,a;
    cin>>t;
    while(t--)
    {
        priority_queue<int> pq;
        int power=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a!=0)
            {
               pq.push(a);

            }
            else
            {
                if(!pq.empty())
                {
                    power+=pq.top();
                    pq.pop();

                }
            }


        }

        cout<<power<<"\n";
    }



return 0;
}

