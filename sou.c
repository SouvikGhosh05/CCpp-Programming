#include<stdio.h>
void rec(int x)
void main( )
{

	int a b;
	printf("Enter any integer");
	scanf("%d",&a);
	b=rec(a);
	printf("The factorial of %d is %d",a,b);
	return 0;
}

int rec(int x)
{
	int f;
	
	if(x==1)
	{
	
	return (1);
    }
	else
	f=x*rec(x-1);
	return (f);
}
