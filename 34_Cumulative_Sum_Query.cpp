#include <iostream>
#include <stdio.h>
#include <cmath>
#include<vector>

int main() {
 std::ios_base::sync_with_stdio(0);
 std::cin.tie(0);
 std::cout.tie(0);

int n;
std::cin>>n;

std::vector<int> nums(n);
std::vector<int> psum(n);
std::cin>>nums[0];
psum[0]=nums[0];
for(int i=1;i<n;i++)
{
    std::cin>>nums[i];
    psum[i]=psum[i-1]+nums[i];
}
int q,l,r;
std::cin>>q;
while(q--)
{
    std::cin>>l>>r;
    if(l!=0)
    std::cout<<psum[r] -psum[l-1]<<"\n";
    else
    {
        std::cout<<psum[r]<<"\n";
    }
}



return 0;

}

