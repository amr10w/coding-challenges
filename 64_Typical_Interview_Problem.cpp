#include <iostream>
#include <string>
using namespace std;



int main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    string s="FBFFBFFBFBFFBFFBF";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1;
        cin>>s1;
        if(s.find(s1)!=-1)
            cout<<"YES\n";

        else
             cout<<"NO\n";
             
    }

    return 0;
}
