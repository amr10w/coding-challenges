
#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include <algorithm>
//#define int long long

signed main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n,k,q;
    std::cin>>n>>k>>q;
    std::vector<int> PartialSum(200001,0);
    int max=INT_MIN,min=INT_MAX;
    while(n--)
    {
        int l,r;
        std::cin>>l>>r;
        max=std::max(max,r);
        min=std::min(min,l);
        PartialSum[l]++;
        PartialSum[r+1]--;
    }
    for(int i=1;i<=200001;i++)
    {
        PartialSum[i]+= PartialSum[i-1];
    }

    for(int i=1;i<=200001;i++)
    {
        if(PartialSum[i]>=k)
        {
            PartialSum[i]=1;
        }
        else
        {
            PartialSum[i]=0;
        }
    }


    for(int i=1;i<=200001;i++)
    {
        PartialSum[i]+= PartialSum[i-1];
    }

    while(q--)
    {
        int a,b;
        std::cin>>a>>b;
        std::cout<< PartialSum[b] -PartialSum[a-1]<<"\n";


    }


return 0;

}

