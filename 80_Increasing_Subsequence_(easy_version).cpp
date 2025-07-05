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

    int n;
    cin>>n;
    deque<int> dq;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        dq.push_back(a);
    }
    if(n==1)
    {
        cout<<1<<"\nR";
        return 0;
    }
    int cnt=0,num;
    string s="";
    if(dq.front()>dq.back())
    {
        num=dq.back();
        dq.pop_back();
        s+="R";
        cnt++;
    }
    else if(dq.front()<dq.back())
    {
        num=dq.front();
        dq.pop_front();
        s+="L";
        cnt++;
    }
    while(true)
    {
        if(num<dq.back()&&(dq.back()<dq.front()||num>dq.front()))
        {
            num=dq.back();
            dq.pop_back();
            s+="R";
            cnt++;
        }
        else if(num<dq.front())
        {
            num=dq.front();
            dq.pop_front();
            s+="L";
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt<<"\n"<<s;



    return 0;
}
