#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int to_decm(string s)
{
    int sum=0;
    for(int i=1;i<7;i++)
    {
        if(i%2!=0)
        {
            if(s[i]<'A')
            {
                sum+=((s[i]-'0')*16);
                
            }
            else{
             
                sum+=((s[i]-'A'+10)*16);
                
            }
        }
        else
        {
            if(s[i]<'A')
            {
                sum+=((s[i]-'0'));
                

            }
            else{
                sum+=((s[i]-'A'+10));
                

            }
        }
    }
    return sum;
}

int main()
{
    std::ios_base::sync_with_stdio();
    std::cin.tie(0);
    std::cout.tie(0);
    
    int a,b;
    cin>>a>>b;
    string s;
    int sum=0;
    int s1[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>s;
            sum=to_decm(s);
            s1[i][j]=round(sum/3.);
        }
        
        

    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<s1[i][j]<<" ";
        }
        cout<<"\n";
        
        

    }
    
}