#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    cin>>n;
    vector<int> pile(n);
    cin>>pile[0];
    for(int i=1; i<n; i++)
    {
        cin>>pile[i];
        pile[i]+=pile[i-1];
    }
    int m;
    cin>>m;
    int sz=pile.size();
    while(m--)
    {
        int st=0,end=sz-1,md,target;
        cin>>target;
        while(st<=end)
        {
            md=(st+end)/2;
            if(md==0&&target<pile[0])
            {
                cout<<md+1<<"\n";
                break;
            }
            else if(target==pile[md])
            {
                cout<<md+1<<"\n";
                break;
            }
            else if(target<pile[md]&&target>pile[md-1])
            {
                cout<<md+1<<"\n";
                break;
            }
            else if(pile[md]>target)
            {
                end=md-1;
            }
            else if(pile[md]<target)
            {
                st=md+1;
            }
        }
    }


    return 0;
}
