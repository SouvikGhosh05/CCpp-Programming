#include<stdio.h>
#include<string.h>
int main()
{
	int i,size=0,flag=0;
	char g[100],reverse_g[100];
	printf("Enter the string: ");
	scanf("%s",g);
	for(i=0;g[i]!=NULL;i++)
	{
		size++;
	}
	for(i=size-1;i>=0;i--)
	{
		reverse_g[size-1-i]=g[i];
	}
	reverse_g[i]=NULL;
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
	if(flag!=0)
	{
		printf("The entered string is not palindrome");
	}
	else
	{
		printf("The entered string is palindrome");
	}
	return 0;
}
