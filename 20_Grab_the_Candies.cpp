#include <iostream>
#include <cmath>

using namespace std;
int main(){
 int t,n;
 cin>>t;
 
 for(int i=0;i<t;i++)
 {
 	int f1=0,f2=0;
 	cin>>n;
 	for(int j=0;j<n;j++){
 		int a[n];
 		cin>>a[j];
 		if(a[j]%2==0)
 		f1+=a[j];
 		else 
 		f2+=a[j];
 	}
 	if(f1>f2)
 	cout<<"Yes"<<endl;
 	else 
 	cout<<"No"<<endl;
 	}
}
