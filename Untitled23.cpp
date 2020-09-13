#include<stdio.h>
int main()
{
	char s[10],g[10];
	int i;
	printf("Enter string");
	scanf("%s",g);
	for(i=0;g[i]!=NULL;i++)
	{
		s[i]=g[i];
	}
	s[i]=NULL;
	printf("Copied string is %s",s);
	return 0;
}
