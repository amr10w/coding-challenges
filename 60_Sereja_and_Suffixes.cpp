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
    std::vector<int> nums(n);
    std::vector<int> suffix(n,0);
    std::vector<int> freq(100001,0);

     for(int i=0;i<n;i++)
    {
        std::cin>>nums[i];
    }

    for(int i=n-1;i>=0;i--)
    {

        if(freq[nums[i]]==0)
        {
            suffix[i]++;
            freq[nums[i]]++;
        }

    }

    for(int i=n-2;i>=0;i--)
    {
        suffix[i]+=suffix[i+1];
    }


    while(m--)
    {
        int l;
        std::cin>>l;
        l--;
        std::cout<<suffix[l]<<"\n";
    }







return 0;

}

