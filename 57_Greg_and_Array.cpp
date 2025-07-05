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

    int n,m,k;
    std::cin>>n>>m>>k;
    int a[n+1]={0};
    int partialSum[n+2]={0};
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    int opp[m][3];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<3;j++)
        {
            std::cin>>opp[i][j];
            if(j!=2)
            opp[i][j]--;
        }
    }

    int partialFreq[m+2]={0};

    while(k--)
    {
        int x,y;
        std::cin>>x>>y;
        x--;
        y--;
        partialFreq[x]++;
        partialFreq[y+1]--;

    }
    for(int i=1;i<=m;i++)
    {
      partialFreq[i]+=partialFreq[i-1];
    }

    for(int i=0;i<m;i++)
    {
      opp[i][2]*=partialFreq[i];
    }
    for(int i=0;i<m;i++)
    {
      partialSum[opp[i][0]]+=opp[i][2];
      partialSum[opp[i][1]+1]-=opp[i][2];
    }

    for(int i=1;i<n;i++)
    {
       partialSum[i]+=partialSum[i-1];
    }


    for(int i=0;i<n;i++)
    {
        a[i]+=partialSum[i];
        std::cout<<a[i]<<" ";
    }


return 0;

}

