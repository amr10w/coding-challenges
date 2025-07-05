#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include <algorithm>
 
int main() {
    int n;
    std::cin>>n;
    std::string s[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>s[i];
    }
    int cnt=0,ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(s[i]==s[j])
            {
                cnt++;
 
            }
        }
        ans=std::max(ans,cnt);
        cnt=0;
    }
    std::cout<<ans;
 
 
return 0;
 
}