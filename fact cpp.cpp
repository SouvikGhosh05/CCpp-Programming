#include<iostream>
using namespace std;
int main()
{
	double a,b=1,i;
	cout<<"Enter an integer";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	cout<<"The factorial is "<<b;
}
