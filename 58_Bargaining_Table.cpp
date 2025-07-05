#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include <algorithm>
 
int main() {
int n,m;
char c;
std::cin>>n>>m;
int a[26][26];
 
 for(int i=0;i<=n;i++)
  {
      for(int j =0;j<=m;j++)
      {
         a[i][j]=0;
      }
  }
for(int i=1;i<=n;i++)
{
    for(int j=1;j<m+1;j++)
    {
        std::cin>>c;
        if(c=='1')
        {
            a[i][j]=1;
        }
        else if(c=='0')
        {
             a[i][j]=0;
        }
 
    }
}
 
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {
        a[i][j]=a[i][j-1]+a[i][j];
    }
 
}
 
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {
        a[i][j]=a[i-1][j]+a[i][j];
    }
 
}
 
 
int maxu= -10;
 
 
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {
        for(int k=i;k<=n;k++)
        {
            for(int w=j;w<=m;w++)
            {
                int num =a[k][w]-a[k][j-1]-a[i-1][w]+a[i-1][j-1];
 
                if(num == 0)
                {
                    int length=k-i+1;
                    int width =w-j+1;
                    int x=length+width;
                    maxu=std::max(maxu,2*x);
                }
            }
 
        }
    }
}
std::cout<<maxu<<"\n";
 
 
return 0;
 
}
 