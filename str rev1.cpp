#include<stdio.h>
int main()
{
	int i,s=0,num;
	char g[100];
	printf("Enter the string: ");
	scanf("%s",g);
	for(i=0;g[i]!=NULL;i++)
	{
		num++;
	}
	for(i=num-1;i>=0;i--)
	{
		printf("%s \n",g);
	}
	return 0;
}
