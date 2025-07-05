#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include <algorithm>
#define int long long
signed main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,m;
    std::cin>>n>>m;
    std::vector<int> heights(n);
    std::vector<int> prifix(n+2,0);
    std::vector<int> suffix(n+2,0);
    for(int i=0;i<n;i++)
    {
        std::cin>>heights[i];
    }


    for(int i=1;i<n;i++)
    {
        if(heights[i-1]>heights[i])
        {
            prifix[i+1]+= (heights[i-1]-heights[i]);
        }
        if(heights[i]>heights[i-1])
        {
            suffix[i+1]+= (heights[i]-heights[i-1]);
        }


    }
    for(int i=1;i<=n;i++)
    {
        prifix[i]+=prifix[i-1];
        suffix[i]+=suffix[i-1];
    }

    while(m--)
    {
        int l,r;
        std::cin>>l>>r;
        if(l>r)
        {
            std::cout<<suffix[l]-suffix[r]<<"\n";
        }
        if(r>l)
        {
            std::cout<<prifix[r]-prifix[l]<<"\n";
        }
    }





return 0;

}

