
#include <iostream>
#include <cmath>
#include<string>

using namespace std;
int main(){
int n,s,one=0,two=0,three=0,four=0,res=0;
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>s;
	if(s==1)
	one++;
	if(s==2)
	two++;
	if(s==3)
	three++;
	if(s==4)
	four++;
}
res+=four;
while(three!=0 && one !=0)
{
	res++;
	three--;
	one--;
}
if(three!=0)
{res+=three ;
three=0;}
res+=two/2;
if(two%2==0)
two-=two;
else two-=two-1;

if(two!=0 && one<=2)
{res++;
one=0;
two=0;}
 else if(two!=0)
 {
 	res++;
 	one-=2;
 	two=0;
 }
while(one>4&&one>0)
{res++;
one-=4;
}
if(one!=0&&one>0)
res++;

cout <<res;

}


