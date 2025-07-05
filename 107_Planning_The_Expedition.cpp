#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    map<int,int> types;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        types[x]++;
    }
    if(n>m)
    {
        cout<<0;
        return 0;
    }
    int st=1,end=100,md;
    int max_num=-1;
    while(st<=end)
    {
        md=(st+end)/2;
        int sum=0;
        for(auto &e:types)
        {
            sum+= e.second/md;
        }
        if(sum<n)
        {
            end=md-1;

        }
        else
        {
            max_num=max(max_num,md);
            st=md+1;
        }

    }
    cout<<max_num;


    return 0;
}
