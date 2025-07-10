//can't solve


#include <iostream>
#include <vector>
#include <string>
using namespace std;


string Convert_toBin(long long num)
{
string bin_no;

while(num>0)
{
    if(num%2==0)
    {
        bin_no+='0';
    }
    else
    {
        bin_no+='1';
    }
    num/=2;

}
return bin_no;

}

int main()
{
    long long X;
    cin>>X;
   
   
    bool flag = true ;
    long long ans=X;
    
    while(X>0)
    {
        string Y = Convert_toBin(X);
        for(long long i=0;i<(Y.length())/2;i++)
        {

            if(Y[i]!=Y[Y.length()-i-1])
            {
                flag=false;
                break;
            }
            else
            {
                flag=true;
            }


        }
        if(flag)
        {
            ans=X;
            break;
        }
        X--;
    }

    
    cout<<ans;
    




    return 0;
}