#include<stdio.h>
int main()
{
	int i,s=0,num,g[20],reverse_g[20];
	printf("Enter the elements in the array: ");
	scanf("%d",&num);
	printf("Put the numbers below: \n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&g[i]);
	}
	for(i=num-1;i>=0;i--)
	{
		reverse_g[num-1-i]=g[i];
	}
	for(i=0;i<num;i++)
	{
		if(reverse_g[i]!=g[i])
		{
			s++;
		}
		else
		{
			s=s;
		}
	}
	if(s!=0)
	{
		printf("The array is not palindrome");
	}
	else
	{
		printf("The array is palindrome");
	}
	return 0;
}







