#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    set<int> se;
    queue<int> d;
    cin>>s;
    string number="";
    for(int i=0;i<s.length();i++)
    {
        if(i==s.length()-1)
        {
            number+=s[i];
        }
        if(s[i]==','||i==s.length()-1)
        {
            se.insert(stoi(number));
            number="";
        }
        else
        {
            number+=s[i];
        }

    }
    for(auto &e:se)
    {
        d.push(e);
    }
    int num=-1;
    int l,r=-1;
    int cnt=0;
    while(!d.empty())
    {
        if(num==-1)
        {
            num=d.front();
            l=d.front();
            d.pop();
        }
        else if(num!=-1&&d.front()==num+1)
        {
            num=d.front();
            r=d.front();
            d.pop();
        } else if(num!=-1)
        {
            num=-1;
            if(r!=-1)
            cout<<l<<"-"<<r<<",";
            else
            cout<<l<<",";
            r=-1;
            cnt++;

        }
    }
   if(num!=-1)
    {
        if(r!=-1)
        cout<<l<<"-"<<r;
        else
        cout<<l;

    }


    return 0;
}
