//can't solve

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;


int main()
{
    map<int,string> mp;
    vector<pair<int,int>> indexes;
    string s;
    cin>>s;
    bool open=false;
    int num=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='<'&&!open)
        {
            open=true;
            num++;
        }
        if(open)
        {
            
            mp[num]+=s[i];
        }
        if(s[i]=='>')
        {
            open=false;
        }
        if(s[i]=='/')
        {
            string target="< >";
            target[1]=s[i+1];
            for (auto it : mp) {
                if (it.second == target) {
                    int num1=num;
                    int num2=it.first;
                    indexes.push_back({num1,num2});
                    
                    break;
                }
            }
        }

        
    }
    for(auto e:mp)
    {
        cout<<e.first<<" "<<e.second<<endl;
    }
    for(auto e:indexes)
    {
        cout<<e.first<<" "<<e.second<<endl;
    }

    for(auto it:mp)
    {
        bool flag=false;

        for(auto e:indexes)
        {
            if(it.first==e.first)
            {
                flag=true;
                for(int i=0;i<e.second -1;i++)
                {
                    cout<<"  ";
                }
                cout<<it.second;
                break;

            }
            
        
        }
        if(flag)
        {
            cout<<"\n";

            continue;
        }
        for(int i=0;i<it.first-1;i++)
        {
            cout<<"  ";
        }
        cout<<it.second;
        
        cout<<"\n";

    }
   
}