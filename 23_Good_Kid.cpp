#include <bits/stdc++.h>

using namespace std;
int main(){

int t,n,arr[101],min0,min1;
long long res;

cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    cin>>arr[0];
    min0=0;
    min1=arr[0];

    for(int j=1 ; j<n;j++)
    {
        cin>>arr[j];
        if(arr[j]<min1)
            {min1=arr[j];
            min0=j;}
    }

   arr[min0]+=1;
      res=arr[0];
   for(int k=1 ;k<n;k++)
    {
        res*=(long long)arr[k];
    }
   cout <<res<<endl;
}

}



