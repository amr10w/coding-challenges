#include <iostream>

int main() {
	int t,x,y;
	std::cin>>t;
	while(t--)
	{
		std::cin>>y>>x;
		int a=y*100;
		float price=x+100;
		std::cout<<(int)(a/price)<<std::endl;
	}
	
}
