#include<stdio.h>
int main()
{
	int i,length=0;
	char g[100];
	printf("Enter the string: ");
	scanf("%s",g);
	for(i=0;g[i]!=NULL;i++)
	{
		length++;
	}
	for(i=0;g[i]!=NULL;i++)
	{
		if(g[i]=g[i+1])
		{
			printf("The string contains double characters");
			break;
		}
		else
		{
			printf("The string doesn't contain double characters");
			break;
    	}
	}
	printf("The string has length %d",length);
	return 0;
}
