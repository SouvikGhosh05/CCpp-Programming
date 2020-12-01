#include <iostream>
int main()
{
	int a,b,max,min;
	std::cout<<"Enter two integers: ";
	std::cin>>a>>b;
	if(a>b)
	{
	max=a;
	min=b;
	}
	else
	{
    max=b;
    min=a;
	}
    std::cout<<"maximum= "<<max<<std::endl;
    std::cout<<"minimum="<<min<<std::endl;
	return 0;
}
