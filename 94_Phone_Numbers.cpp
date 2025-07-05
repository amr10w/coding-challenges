#include<bits/stdc++.h>
#include<set>
#define ll long long
using namespace std;
int main()
{
    int n;

    unordered_map<string,int> max_mp;
    multimap<string,pair<int,string>> answer;
    max_mp["taxi"]=0;
    max_mp["pizza"]=0;
    max_mp["girls"]=0;
    cin>>n;
    while(n--)
    {
        int q;
        string s;
        unordered_map<string,int> mp;
        mp["taxi"]=0;
        mp["pizza"]=0;
        mp["girls"]=0;
        cin>>q>>s;
        while(q--)
        {
            string number;
            cin>>number;
            vector<int> digits;
            set<int> numbers;
            for (int i = 0; i < number.length(); i++)
            {
                if (number[i] != '-')
                {
                    digits.push_back(number[i] - '0');
                    numbers.insert(number[i] - '0');

                }
            }
            if(numbers.size()==1)
            {
                mp["taxi"]++;
                continue;
            }
            else if(numbers.size()==6)
            {
                bool isPizza = true;
                for (int i = 1; i < digits.size(); i++)
                {
                    if (digits[i] > digits[i - 1])
                    {
                        isPizza = false;

                        break;

                    }
                }
                if (isPizza)
                {
                    mp["pizza"]++;
                }
                else
                {
                    mp["girls"]++;
                }
            }
            else
            {
                mp["girls"]++;

            }



        }
        if(mp["taxi"]>=max_mp["taxi"])
        {
            max_mp["taxi"]=mp["taxi"];
            answer.insert({"taxi",{max_mp["taxi"],s}});
        }
        if(mp["pizza"]>=max_mp["pizza"])
        {
            max_mp["pizza"]=mp["pizza"];
            answer.insert({"pizza",{max_mp["pizza"],s}});
        }
        if(mp["girls"]>=max_mp["girls"])
        {
            max_mp["girls"]=mp["girls"];
            answer.insert({"girls",{max_mp["girls"],s}});
        }
    }
    cout << "If you want to call a taxi, you should call: ";
    int out1=0;
    for (const auto& e : answer)
    {
        if (e.first=="taxi"&&e.second.first == max_mp["taxi"])
        {
            if(out1>0)
            {
                cout<<", ";
            }
            cout << e.second.second;
            out1++;

        }

    }
    cout<<".\n";
    cout << "If you want to order a pizza, you should call: ";
    int out2=0;
    for (const auto& e : answer)
    {
        if (e.first=="pizza"&&e.second.first == max_mp["pizza"])
        {
            if(out2>0)
            {
                cout<<", ";
            }
            cout  << e.second.second ;
            out2++;

        }
    }
    cout<<".\n";
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    int out3=0;
    for (const auto& e : answer)
    {
        if (e.first=="girls"&&e.second.first == max_mp["girls"])
        {
            if(out3>0)
            {
                cout<<", ";
            }
            cout << e.second.second ;
            out3++;

        }
    }
    cout<<".\n";





    return 0;
}
