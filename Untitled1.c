#include<stdio.h>
int displ(int x)
int main()
{
	int a,b;
	printf("Enter any integer");
	scanf("%d",&a);
	b=displ(a);
	printf("The return value is %d",b);
	return 0;
}
int displ(int x)
{
	int i;
	
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		printf("The number is not prime");
		return 0;
		else 
		printf("The number is prime");
		return 1;
	}
}
