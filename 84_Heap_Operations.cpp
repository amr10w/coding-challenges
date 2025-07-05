#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include<deque>
#include <algorithm>
#define int long long
using namespace std;

signed main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    priority_queue<int> pq;
    vector<string> s;
    vector<int> nums;
    int n;
    cin>>n;
    while(n--)
    {
        string comment;
        cin>>comment;
        if(comment=="insert")
        {
            int a;
            cin>>a;
            pq.push(-a);
            s.push_back("insert ");
            nums.push_back(a);


        }
        if(comment=="removeMin")
        {
            if(!pq.empty())
            {
                pq.pop();
                s.push_back("removeMin");
            }else
            {
                s.push_back("insert ");
                nums.push_back(0);
                s.push_back("removeMin");
            }
        }
        if(comment=="getMin")
        {
            int x;
            cin>>x;
            while(true)
            {
                if(pq.empty()||x< -pq.top())
                {
                    pq.push(-x);
                    s.push_back("insert ");
                    nums.push_back(x);
                    s.push_back("getMin ");
                    nums.push_back(x);
                    break;

                }
                else if(!pq.empty()&&x==-pq.top())
                {
                    s.push_back("getMin ");
                    nums.push_back(x);
                    break;
                }
                else if(!pq.empty())
                {
                    pq.pop();
                    s.push_back("removeMin");
                }
            }


        }

    }
    cout<<s.size()<<"\n";
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=="getMin "||s[i]=="insert ")
        {
            cout<<s[i]<<nums[j];
            j++;
        }
        else
        {
            cout<<s[i];
        }
        cout<<"\n";
    }

    return 0;
}
