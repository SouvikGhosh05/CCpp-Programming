#include<stdio.h>

long int fact(int x)
{
	int i;
	int y=1;
	for(i=x;i>=1;i--)	
	{
		y=y*i;
	}
	return y;
}

int main()
{
	int num,b;
	printf("Enter any integer: ");
	scanf("%d",&num);
	b=fact(num);
	printf("The factorial of the integer is: %d",b);
	return 0;
}
