# include<iostream>
using namespace std;
int main()
{
	int a,b,max,min;
	cout<<"enter a and b";
	cin>>a>>b;
	if(a>b)
	{
	max=a;
	min=b;
	cout<<"maximum="<<max;
	cout<<"minimum="<<min;
	}
	else
    max=b;
    min=a;
    cout<<"maximum= "<<max;
    cout<<"minimum="<<min;
}
