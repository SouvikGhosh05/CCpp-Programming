#include<stdio.h>
int main()
{
	int i,g[50],s[50],j=0,num;
	printf("Enter the number of elements of the array: ");
	scanf("%d",&num);
	printf("Enter any integer between 50 and 100 :");
	for(i=0;i<num;i++)
	{
		scanf("%d",&g[i]);
	}
	for(i=0;i<num;i++)
	{
		s[j]=g[i];
		j++;
	}
	printf("The copied array is: \n");
	for(i=0;i<j;i++)
	{
		printf("%d\t",s[i]);
	}
	
	
	for(i=0;i<j;i++)
	{
		if(s[i]>=50 && s[i]<=100)
		{
			printf("\nThe given integers is in the same range.");
		}
		else
		{
			printf("\nThe given integers is not in the same range.");
		}
	}
	return 0;
}
