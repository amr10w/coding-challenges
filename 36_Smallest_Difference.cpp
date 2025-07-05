#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include <algorithm>

int main() {
 std::ios_base::sync_with_stdio(0);
 std::cin.tie(0);
 std::cout.tie(0);

 int t;
 std::cin>>t;
 while(t--)
 {
     int n,a,maxu=INT_MIN;
     std::cin>>n;

     std::vector<int> freq(10001,0);
     for(int i=0;i<n;i++)
     {
       std::cin>>a;
       freq[a]++;
       if(a>maxu)
       {
           maxu=a;
       }
     }
     int ans=INT_MIN;
     for(int i=1;i<=maxu;i++)
     {
         if(freq[i]+freq[i-1]>ans)
         {
             ans=freq[i]+freq[i-1];
         }
     }
     std::cout<<ans<<"\n";

}

return 0;

}

