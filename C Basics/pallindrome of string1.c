#include<stdio.h>
#include<string.h>
int main()
{
	int i,size,flag=0;
	char g[20],reverse_g[20];
	printf("Enter the string: ");
	scanf("%s",g);
	for(i=0;g[i]!='\0';i++)
	{
		size++;
	}
	for(i=size-1;i>=0;i--)
	{
		reverse_g[size-1-i]=g[i];
	}
	reverse_g[i]='\0';
	for(i=0;i<size;i++)
	{
		if(reverse_g[i]!=g[i])
		{
			flag++;
		}
		else
		{
			flag=flag;
		}
	}
	if(flag=0)
	{
		printf("The entered integer is pallindrome");
	}
	else
	{
		printf("The entered number is not pallindrome");
	}
	return 0;
}
