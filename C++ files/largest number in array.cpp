#include<iostream>
using namespace std;
int main()
{
	int i,num,g[20],largest;
	cout<<"Enter the number of elements in the array: ";
	cin>>num;
	cout<<"Enter the integers: ";
	for(i=0;i<num;i++)
	{
		cin>>g[i];
	}
	largest=g[0];
	for(i=1;i<num;i++)
	{
		if(largest<g[i])
		{
			largest=g[i];
		}
	}
	cout<<"largest is "<<largest;
	return 0;
}
