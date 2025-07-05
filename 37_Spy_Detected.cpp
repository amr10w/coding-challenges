#include <iostream>
#include <cmath>

using namespace std ;

int main(){

int t,n;
cin>>t;
while(t--)
{
	cin>>n;
	int a[n+5],freq[1000]={0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		freq[a[i]]++;
	}
	int w;
	for(int i=0;i<1000;i++)
	{
		if(freq[i]==1)
		{w=i;
		break;
		}
		
	}
	for(int i=0;i<n;i++)
	{
			if(a[i]==w)
		{w=i;
		break;
	}}
	
	cout <<w+1<<endl;
	
	

}
}