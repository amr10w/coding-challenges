#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main(){
string s;
int n=0;
cin>>s;
for(int i=0 ;i<s.length();i++)
{
if(s[i]=='Q')	
{
for(int j=i;j<s.length();j++)
{
	if(s[j]=='A')
{	for(int k=j;k<s.length();k++)
{
	if(s[k]=='Q')
	n++;
	
	
}
}
	
}
}

	
}
cout<<n;
}