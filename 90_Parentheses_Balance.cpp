#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<unordered_set>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        stack<char> parentheses;
        string s;

        getline(cin,s);
        bool flag=true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='('&&s[i]!='['&&s[i]!=')'&&s[i]!=']')
            {
                continue;
            }
            else if(s[i]=='('||s[i]=='[')
            {

                parentheses.push(s[i]);
            }
            else if(!parentheses.empty()&&(s[i]-1==parentheses.top()||s[i]-2==parentheses.top()))
            {
                parentheses.pop();
            }
            else
            {
                flag=false;
                break;
            }

        }
        if(flag&&parentheses.empty())
        {
           cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }



    return 0;
}
