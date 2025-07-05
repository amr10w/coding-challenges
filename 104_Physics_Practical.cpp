#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int min_num=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int num=n-(upper_bound(vec.begin(),vec.end(),vec[i]*2)-vec.begin())+i;
        min_num=min(min_num,num);
    }
    cout<<min_num;

    return 0;
}
