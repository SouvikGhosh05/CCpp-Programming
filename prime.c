#include<stdio.h>
#include<math.h>
int main()
{
	int i,num;
	printf("Enter any integer");
	scanf("%d",&num);
	
	for (i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			printf("The integer is not prime");
			break;
		}
		else
		{
			printf("The integer is prime");
			break;
		}
	}
	return 0;
}
