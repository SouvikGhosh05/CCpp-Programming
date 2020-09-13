#include<stdio.h>
int main()
{
	int i,g[100],s[100],j=0,num;
	printf("Enter the elements of the array: ");
	scanf("%d",&num);
	printf("Enter any integer between 100 and 10000 :");
	for(i=0;i<num;i++)
	{
		scanf("%d",&g[i]);
	}
	for(i=0;i<num;i++)
	{
		s[j]=g[i];
		j++;
	}
	printf("The copied array is \n");
	for(i=0;i<j;i++)
	{
		printf("%d\t",s[i]);
	}
	//printf("Enter the integer to search in the array");
	//scanf("%d",&search);
	
	for(i=0;i<j;i++)
	{
		if(s[i]>=100 && s[i]<=10000)
		{
			printf("The given integers is in the same range\n");
		}
		else
		{
			printf("The given integers is not in the same range\n");
		}
	}
	return 0;
}
