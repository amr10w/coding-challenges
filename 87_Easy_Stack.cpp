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
    stack<int> st;
    while(t--)
    {
       int n;
       cin>>n;
       if(n==1)
       {
           int x;
           cin>>x;
           st.push(x);

       }
       else if(n==2)
       {
           if(!st.empty())
           {
               st.pop();
           }
       }else
       {
           if(!st.empty())
           {
               cout<<st.top()<<"\n";
           }else{cout<<"Empty!\n";}
       }
    }
    return 0;
}
