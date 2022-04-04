#include<stdio.h>
int main()
{
	int i,j,sum=0;
	printf("Enter an integer: ");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		sum=sum+i;
	}
	printf("The sum from 1 to %d is %d",j,sum);
	return 0;
}
