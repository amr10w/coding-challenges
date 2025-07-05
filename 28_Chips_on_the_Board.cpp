
#include <iostream>
#include <cmath>
#include<string>

using namespace std;
int main(){
long long t;
long long N,mina;
cin>>t;
for(int i=0;i<t;i++)
{
	cin>>N;
	long long a[N],b[N];
	cin>>a[0];
	mina=a[0];
	
	for(int j=1;j<N;j++)
	{
		cin>>a[j];
		if(a[j]<mina)
	{	mina=a[j];
	}
		
	}
	cin>>b[0];
long long	minb=b[0];

	for(int j=1;j<N;j++)
	{
		cin>>b[j];
		if(b[j]<minb)
	{	minb=b[j];
		}
	}
	long long totala=0,totalb=0;
	
	{for(int j=0;j<N;j++)
	{
		totala+= (minb+a[j]);
		
	}
	
		for(int j=0;j<N;j++)
	{
		totalb+= (mina+b[j]);
		
	}
	
	if(totala>totalb)
	cout<<totalb<<endl;
	else
	cout<<totala<<endl;
	
}


}}


