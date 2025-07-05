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
    int q;
    deque<int> d;
    cin>>q;
    bool reversed=0;
    while(q--)
    {
        string s;
        cin>>s;
        if(!reversed)
        {
            if(s=="back")
            {
                if(!d.empty())
                {
                    cout<<d.back()<<"\n";
                    d.pop_back();
                }
                else
                {
                    cout<<"No job for Ada?\n";
                }
            }
            if(s=="front")
            {
                if(!d.empty())
                {
                    cout<<d.front()<<"\n";
                    d.pop_front();
                }
                else
                {
                    cout<<"No job for Ada?\n";
                }
            }
            if(s=="reverse")
            {
                reversed=!reversed;
            }
            if(s=="push_back")
            {
                int a;
                cin>>a;
                d.push_back(a);
            }
            if(s=="toFront")
            {
                int a;
                cin>>a;
                d.push_front(a);
            }
        }
        else
        {
            if(s=="back")
            {
                if(!d.empty())
                {
                    cout<<d.front()<<"\n";
                    d.pop_front();
                }
                else
                {
                    cout<<"No job for Ada?\n";
                }
            }
            if(s=="front")
            {
                if(!d.empty())
                {
                    cout<<d.back()<<"\n";
                    d.pop_back();
                }
                else
                {
                    cout<<"No job for Ada?\n";
                }
            }
            if(s=="reverse")
            {
                reversed=!reversed;
            }
            if(s=="push_back")
            {
                int a;
                cin>>a;
                d.push_front(a);
            }
            if(s=="toFront")
            {
                int a;
                cin>>a;
                d.push_back(a);
            }
        }

    }

    return 0;
}

