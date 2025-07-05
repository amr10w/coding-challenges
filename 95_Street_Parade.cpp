#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    while(true)
    {
        int n;
        cin>>n;
        stack<int> st;
        deque<int> d;
        if(n==0)
        {
            break;
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            d.push_back(x);
        }
        int order=1;


        while(!d.empty())
        {
            if(!st.empty()&&st.top()==order)
            {
                order++;
                st.pop();

            }
            else if(d.front()==order)
            {
                order++;
                d.pop_front();

            }
            else
            {
                st.push(d.front());
                d.pop_front();
            }



        }
        while(!st.empty()&&st.top()==order)
        {
            order++;
            st.pop();

        }
        if(order==n+1)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }

    }

    return 0;
}
