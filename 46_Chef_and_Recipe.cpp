#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include <algorithm>

int main() {

int t;
std::cin>>t;
while(t--)
{
   int n;
   bool flag=1;
   std::cin>>n;
   std::vector<int> freq(1001,0);
   int a[n];
   std::cin>>a[0];
   freq[a[0]]++;
   for(int i=1;i<n;i++)
   {
       std::cin>>a[i];
       if(freq[a[i]]==0)
       {
           freq[a[i]]++;
       }
       else if(a[i]==a[i-1])
       {
            freq[a[i]]++;
       }
       else
       {

          flag=0;
       }
   }
    std::sort(freq.begin(),freq.end());
    std::reverse(freq.begin(),freq.end());
   for(int i=1;i<1001;i++)
   {
       if(freq[i]==freq[i-1])
       {
           flag=0;
           break;
       }
       if(!freq[i])
       {
           break;
       }
   }
   if(flag)
   std::cout<<"YES\n";
   else
    std::cout<<"NO\n";

}


return 0;

}

