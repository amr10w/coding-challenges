#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include<queue>
#include<deque>
#include <algorithm>
#define int long long
using namespace std;
signed main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> postives;
    vector<int> negatives;
    vector<int> zeros;
    int postive=0,negative=0,zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
        if(nums[i]>0)
        {
            postive++;
            postives.push_back(nums[i]);
        }
        else if(nums[i]<0)
        {
            negative++;
            negatives.push_back(nums[i]);
        }
        else
        {
            zero++;
            zeros.push_back(nums[i]);
        }

    }
    if(!postive)
    {
        if(negative>2)
        {
            postive+=2;
            negative-=2;
            postives.push_back(negatives[negatives.size()-1]);
            postives.push_back(negatives[negatives.size()-2]);
            negatives.pop_back();
            negatives.pop_back();
        }
    }
    if(negative%2==0)
    {
        negative--;
        zeros.push_back(negatives[negatives.size()-1]);
        zero++;
        negatives.pop_back();

    }
    cout<<negative<<" ";
    for(int i=0;i<negatives.size();i++)
    {
        cout<<negatives[i]<<" ";
    }
    cout<<"\n";
    cout<<postive<<" ";
    for(int i=0;i<postives.size();i++)
    {
        cout<<postives[i]<<" ";
    }
    cout<<"\n";
    cout<<zero<<" ";
    for(int i=0;i<zeros.size();i++)
    {
        cout<<zeros[i]<<" ";
    }


return 0;
}

