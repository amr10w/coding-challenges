#include <iostream>
#include <string>
using namespace std;

bool check(string a, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != 'm' && a[i] != 'M' && a[i] != 'e' && a[i] != 'E' && a[i] != 'o' && a[i] != 'O' && a[i] != 'w' && a[i] != 'W')
            return false;
    }
    return true;
}
void tolo(string & s)
{
    for(int i=0 ;i<s.length();i++)
    {
        if(s[i]<90)
            s[i]=s[i]+32;
    }
}


int main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
      string s,s1="";
        cin >> s;

       tolo(s);
        bool a = false;
        bool w = check(s, n);
        for (int i = 0; i < n; i++) {
            if(s[i]!= s[i+1]) s1+=s[i];
        }
        if(s1.length()==4)
        {
            if(s1=="meow")
                a=1;
        }

        if (a && w) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
