#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>
#include <algorithm>

int main() {

int t;
std::cin>>t;
while(t--)
{
    long long n;
    std::cin>>n;
    std::vector<long long> pri(n);
    long long a[n];
    std::cin>>a[0];
    pri[0]=a[0];
    for(long long i=1;i<n;i++)
    {
        std::cin>>a[i];
        pri[i]=a[i]+pri[i-1];
    }
    long long ans=0;
    for(long long i=0;i<n;i++)
    {
        ans+=(pri[n-1]-pri[i])*a[i];
    }
    std::cout<<ans<<"\n";
}


return 0;

}

