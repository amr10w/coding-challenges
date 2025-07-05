#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(!st.empty()&&st.top()==s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if(st.empty())
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"NO\n";
    }


    return 0;
}
