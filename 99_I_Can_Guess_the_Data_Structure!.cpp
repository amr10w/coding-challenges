#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int q;
    cin>>q;
    deque<int> d;
    multiset<int> ms;
    while(q--)
    {
        int na;
        cin>>na;

        if(na==1)
        {
            int x;
            cin>>x;
           d.push_back(x);
        }
        else if(na==2)
        {
            if(!ms.empty())
            {
                cout<<*ms.begin()<<"\n";
                ms.erase(ms.begin());
            }
            else
            {
                cout<<d.front()<<"\n";
                d.pop_front();
            }
        }
        else
        {
            for(auto& e:d)
            {
                ms.insert(e);
            }
            d.clear();
        }
    }

    return 0;
}
