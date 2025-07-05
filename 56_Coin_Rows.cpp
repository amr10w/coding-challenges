
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

    int t;
    std::cin>>t;
    while(t--)
    {
        int m;
        std::cin>>m;
        int a[3][m+1];
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=m;j++)
            {
                a[i][j]=0;
            }
        }
        for(int i=1;i<=2;i++)
        {
            for(int j=1;j<=m;j++)
            {
                std::cin>>a[i][j];
            }
        }

        for(int i=1;i<=2;i++)
        {
            for(int j=1;j<=m;j++)
            {
                a[i][j]+=a[i][j-1];
            }
        }
        for(int i=1;i<=2;i++)
        {
            for(int j=1;j<=m;j++)
            {
                a[i][j]+=a[i-1][j];
            }
        }
        int min=INT_MAX;
        for(int i=1;i<=m;i++)
        {

            if(i==1)
            {
                min=std::min(min,a[1][m]-a[1][i]);
                continue;
            }
            if(i==m)
            {
                min=std::min(min,a[2][m-1]-a[1][m-1]);
                continue;
            }


            int num1;
            int num2;
            for(int j=1;j<=2;j++)
            {
                if(j==1)
                {
                    num1=a[j][m]-a[j][i];
                }
                else
                {
                     num2=a[j][i-1]-a[j-1][i-1];
                }
            }
            int max =std::max(num1,num2);
            min=std::min(min,max);
        }
        std::cout<<min<<"\n";


    }



return 0;

}

