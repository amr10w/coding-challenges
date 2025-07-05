#include <iostream>

#include <bits/stdc++.h>


using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
     cin.tie(0);
cout.tie(0);
string s;
int q;
cin>>s;
cin>>q;
//...##.
int p[s.length()];
p[0]=0;
for(int i=1 ;i<s.length();i++)
    {  if(s[i]==s[i-1])
    p[i]=1+p[i-1];
    else
        p[i]=p[i-1];
    }
while(q--)
{
    int l,r;
    cin>>l>>r;
    l--; r--;

    cout <<p[r]-p[l]<<"\n";


}
}


