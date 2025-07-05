#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	
	vector< long long > v(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
sort(v.begin(),v.end());

	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	
}
