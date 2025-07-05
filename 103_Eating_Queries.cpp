#include<bits/stdc++.h>
#define ll long long
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
        vector<int> candies(n);
        for(auto &e:v)
        {
            cin>>e;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        candies[0]=v[0];
        for(int i=1;i<n;i++)
        {
            candies[i]=candies[i-1]+v[i];
        }
        while(q--)
        {
            int x;
            cin>>x;
            if(x>candies[n-1])
            {
                cout<<-1<<"\n";
                continue;
            }
            if(binary_search(v.begin(),v.end(),x))
            {
                cout<<1<<"\n";
                continue;
            }
            int min_ele=lower_bound(candies.begin(),candies.end(),x)-candies.begin()+1;
            cout<<min_ele<<"\n";

        }


    }

    return 0;
}
