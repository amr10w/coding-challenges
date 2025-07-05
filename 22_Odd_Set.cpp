#include <bits/stdc++.h>

using namespace std;
int main(){

int t,n,a;

cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    int o=0,e=0;
    for(int j=0 ; j<2*n;j++)
    {
        cin>>a;
        if(a%2==0)
            e++;
        else
            o++;
    }
    (o==e)? cout<<"Yes"<<endl : cout<<"No"<<endl;

}

}