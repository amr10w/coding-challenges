#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
const int MOD = 1e9 + 7;

long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
int main()
{
    // std::ios_base::sync_with_stdio();
    // std::cin.tie(0);
    // std::cout.tie(0);
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> s(150,0);
        long long sum=0;
        while(n--)
        {
            char a;
            cin>>a;
            //cout<<a<<" "<<int(a-'a')<<"\n";
            s[int(a-'a')]++;
           
        }
        
        for(int i=0;i<s.size();i++)
        {
            
             if (s[i] > 0)
                sum = (sum + power(2, s[i], MOD) - 1 + MOD) % MOD;

        }
        cout<<sum<<"\n";
    }
}