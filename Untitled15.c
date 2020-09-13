#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char g[10],s[10];
	printf("Enter the string");
	gets(g);
	//for(i=0;g[i]!=NULL;i++)
	i=0;
	while(g[i]!='/0')
	{
	
	  s[i]=g[i];
	  i++;
    }
    s[i]=NULL;
    printf("The copied string is %s",s[i]);
    return 0;
}
