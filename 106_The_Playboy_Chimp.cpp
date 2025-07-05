#include<bits/stdc++.h>
#define ll long long
#define sp "\n"
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    sort(v.begin(),v.end());
    int m;
    cin>>m;
    while(m--)
    {
        int x;
        cin>>x;
        int shorter,taller;
        bool bigger=false;
        char a='X';
        if(x>=v[n-1])
        {
            bigger=true;
        }
        shorter=lower_bound(v.begin(),v.end(),x)-v.begin()-1;
        if(!bigger)
        {
            if(binary_search(v.begin(),v.end(),x))
                taller=upper_bound(v.begin(),v.end(),x)-v.begin();
            else
            taller=lower_bound(v.begin(),v.end(),x)-v.begin();

        }
        if(bigger) cout<<v[shorter]<<" "<<a<<sp;
        else if(shorter==-1) cout<<a<<" "<<v[taller]<<sp;
        else cout<<v[shorter]<<" "<<v[taller]<<sp;
    }
    return 0;
}
