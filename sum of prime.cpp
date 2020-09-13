#include<stdio.h>
int main()
{
	int i,j,n,start,sum=0;
	printf("Find the sum of prime numbers ranging from :");
	scanf("%d%d",&start,&n);
	for(i=start;i<=n;i++)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j!=0)
			{
				sum=sum+i;
			}
		}
	}
	printf("The sum of the prime numbers within %d to %d is %d",start,n,sum);
	return 0;
}
