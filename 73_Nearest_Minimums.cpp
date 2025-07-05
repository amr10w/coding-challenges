#include <iostream>
#include <string>
#include <array>
#include <queue>
//#include <bits/stdc++.h>
using namespace std;



int main(){
    int n,mi;
cin>>n;
vector<int> v(n);
vector<int> pos;
cin>>v[0];
mi=v[0];
for(int i=1;i<n;i++)
{
	cin>>v[i];
mi=min(mi,v[i]);

}
for(int i=0;i<n;i++)
{
    if(v[i]==mi)
    {
        pos.push_back(i);
    }
}
int dis=9999999;
for(int i=1;i<pos.size();i++)
{
   dis=min(dis,pos[i]-pos[i-1]);
}
cout<<dis;

}

