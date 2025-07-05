
#include <iostream>
#include <string>
using namespace std ;
int main(){
	int n;
	cin>>n;
string s;
cin>>s;
int a[100]={0};
for(int i =0;i<s.length();i++)
{
if( s[i]>90)
{
	a[s[i]-32]++;
}
else a[s[i]]++;
}
 bool ans=1;
for(int i =65;i<91;i++)
{
if (a[i]==0)
{ans=0;
break;}
}
if(ans)
cout<<"YES";
else 
cout<<"NO";


}



