#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include <algorithm>

int main() {
int n;
std::cin>>n;
int a[n+1][n+1];

 for(int i=0;i<=n;i++)
  {
      for(int j =0;j<=n;j++)
      {
         a[i][j]=0;
      }
  }
for(int i=1;i<n+1;i++)
{
    for(int j=1;j<n+1;j++)
    {
        std::cin>>a[i][j];

    }
}

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        a[i][j]=a[i][j-1]+a[i][j];
    }

}

for(int i=1;i<n+1;i++)
{
    for(int j=1;j<n+1;j++)
    {
        a[j][i]=a[j-1][i]+a[j][i];
    }

}
int maxu= -1000000000;
int num=0;

for(int i=1;i<n+1;i++)
{
    for(int j=1;j<n+1;j++)
    {
        for(int k=i;k<n+1;k++)
        {
            for(int w=j;w<n+1;w++)
            {
                num =a[k][w]-a[k][j-1]-a[i-1][w]+a[i-1][j-1];
                maxu=std::max(maxu,num);
            }
        }
    }
}
std::cout<<maxu<<"\n";


return 0;

}

