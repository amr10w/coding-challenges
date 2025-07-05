#include <iostream>

using namespace std;

char a[4][4];
bool test();
bool test_square(int i,int j);

int main()
{    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            char ch;
            cin>>ch;
            a[i][j]=ch;
        }
    }
    bool flag=test();
    if(flag==true)
    {
        cout<<"YES";
        return 0;
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
    
            if(a[i][j]=='#')
            {
                a[i][j]='.';
                bool flag=test();
                if(flag==true)
                {
                    cout<<"YES";
                    return 0;
                }
                a[i][j]='#';

            }
            else
            {
                a[i][j]='#';
                bool flag=test();
                if(flag==true)
                {
                    cout<<"YES";
                    return 0;
                }
                a[i][j]='.';
            }
        }
    }
    cout<<"NO";
}

bool test()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(test_square(i,j))
            {
                return true;
            }
        }
    }
    return false;

}

bool test_square(int i,int j)
{
    if (i+1==4 ||j+1==4)
    {
        return false;
    }
    return a[i][j+1]==a[i][j] && a[i+1][j]==a[i][j]&&a[i+1][j+1]==a[i][j];
}
