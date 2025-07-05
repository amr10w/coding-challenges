#include <iostream>
#include <string>
//#define int long long
using namespace std;

bool check(string a)
{
    bool ret ;
    if(a[0]=='1')
        ret=1;
    else return 0;
    for(int i=1;i<a.length();i++)
    {
        if(a[i]!='0')
            return 0;
    }

    return 1;
}

signed main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
  int n;
  cin>>n;
  string s;
  string no="1";
  int zero=0;
for(int i=0;i<n;i++){
     cin>>s;
     if(s[0]=='0')
     {
         cout<<0;
         return 0;
     }
     if(check(s))
     {
         zero+=(s.length()-1);
     }
    else if(s!="1")  no=s;


 }
 cout<<no;
 for(int i=0;i<zero;i++)
    cout<<"0";


    return 0;
}
