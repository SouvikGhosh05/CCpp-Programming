#include<stdio.h>
#include<math.h>
void fact(int)
void main()
{
	int x
	printf("Enter any integer: ");
	scanf("%d",&x);
	printf("The factorial is %d",fact(x));
}
int fact(int s)
{
	int i,y=1;
	for(i=s;i>=1;i++)
	{
        y=y*i;		
	}
	return y;
}
