#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>

int main() {
     std::ios_base::sync_with_stdio(0);
 std::cin.tie(0);
 std::cout.tie(0);

   std::string s;
   std::cin>>s;
   int max1=0;
   int cnt=0;
   for(int i=1;i<s.length();i++)
   {
        if(s[i]==s[i-1])
        {
            cnt++;
            max1=std::max(max1,cnt);

        }
        else
        {
            cnt=0;
        }
   }
   std::cout<<max1+1;


return 0;

}

