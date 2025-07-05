#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    //std::ios_base::sync_with_stdio(0);
    //std::cin.tie(0);
    //std::cout.tie(0);
    int n;
    cin>>n;
    bool is_right =true;
    string s;
    cin>>s;
     char a,b;
     a=s[0];
     b=s[1];
     if(a==b)
     {
         is_right =false;
     }
    for(int i=0;i<n;i++)
    {
        if(i>0)
        {
            cin>>s;
        }


        for(int j=0;j<n;j++)
        {
            if(j==i||j==n-1-i)
            {
                if(s[i]!=a||s[n-1-i]!=a)
                {
                    is_right=false;
                    break;

                }

            }
            else if(s[j]!=b)
            {
                is_right=false;

                break;
            }
        }



    }
    if(is_right)
    {
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }



    return 0;
}
