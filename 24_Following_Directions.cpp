#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>

int main() {
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        std::string s;
        std::cin>>s;
        int x=0,y=0;
        bool flag =0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='U')
            {
                y++;
            }
            if(s[i]=='D')
            {
                y--;
            }
            if(s[i]=='R')
            {
                x++;
            }
            if(s[i]=='L')
            {
                x--;
            }
            if(x==1 &&y==1)
            {
                flag=1;
                break;
            }
        }
        std::cout<<(flag ? "YES\n":"NO\n");
    }


return 0;

}
