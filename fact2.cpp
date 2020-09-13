#include<stdio.h>
#include<math.h>
int main()
{
	int b,num;
	printf("Enter any integer: ");
	scanf("%d",&num);
	b=fact(num);
	printf("The factorial of the integer is %d",b);
	return 0;
}
int fact(int x)
{
	int f;
	if(x==1)
	return 1;
	else
	f=x*fact(x-1);
	return f;
}
