#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    stack<int> st;
    cin>>n;

    while(n--)
    {
        int x;
        cin>>x;
        (x%2==0? x=0 :x=1);
        if(st.empty())
        {
            st.push(x);
        }
        else if(!st.empty()&&st.top()==x)
        {
            st.pop();
        }
        else
        {
            st.push(x);
        }
    }
    if(st.size()<2)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
}
