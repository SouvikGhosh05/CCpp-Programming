#include<stdio.h>

long long int fact(int x)
{
	if (x>=1)
        return x*fact(x-1);
    else
        return 1;
}
int main()
{
	int b,num;
	printf("Enter any integer: ");
	scanf("%d",&num);
	b=fact(num);
	printf("The factorial of the integer is %d",b);
	return 0;
}