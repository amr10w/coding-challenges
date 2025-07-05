#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        set<int> se;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            se.insert(i);
        }
        while(q--)
        {
            int in;
            cin>>in;
            if(in==1)
            {
                int l,r;
                cin>>l>>r;
                l--;
                r--;
                int last =l;
                while(!se.empty())
                {
                    auto it=se.lower_bound(last);
                    if(it==se.end()||*it>r)
                    {
                        break;
                    }
                    auto &x=v[*it];
                    int sum_digits=0;
                    while(x)
                    {
                        sum_digits+=v[*it]%10;
                        v[*it]/=10;
                    }
                    v[*it]=sum_digits;
                    int temp=*it;
                    if(v[*it]<10)
                    {
                        se.erase(it);
                    }
                    last=temp+1;
                }

            }

            else if(in==2)
            {
                int x;
                cin>>x;
                x--;
                cout<<v[x]<<"\n";

            }
        }
    }
    return 0;
}
