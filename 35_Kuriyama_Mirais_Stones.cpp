
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std ;

int main(){

long long n,m,l,r,type;
cin>>n;
long long a[n+5],arr1[n+5],arr2[n+5];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
arr1[0]=a[0];
for(int i=1;i<n;i++)

{
	arr1[i]=a[i]+arr1[i-1];
}
sort(a,a+n);
arr2[0]=a[0];
for(int i=1;i<n;i++)

{
	arr2[i]=a[i]+arr2[i-1];
}

cin>>m;
while(m--)
{
	cin>>type;
	cin>>l>>r;

	if(type==1)
	{
		if(l!=1)
		cout <<arr1[r-1]-arr1[l-2]<<endl;
		else
		cout <<arr1[r-1]<<endl;

	}
		if(type==2)
	{
		if(l!=1)
		cout <<arr2[r-1]-arr2[l-2]<<endl;
		else
		cout <<arr2[r-1]<<endl;

	}

}



}
