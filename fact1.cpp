#include<stdio.h>
#include<math.h>
int main()
{
	int i,x;
	int y=1;
	printf("Enter any integer: ");
	scanf("%d",&x);
	for(i=x;i>=1;i--)
	{
		y=y*i;
	}
	printf("The factorial of the integer is %d",y);
	return 0;
}
