#include<stdio.h>
int main()
{
    int i,num,a[10],tofind;
	printf("Enter the number of elements");
	scanf("%d",&num);
	printf("Enter the numbers in the arrey");
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	printf("Find a number to search in the string");
	scanf("%d",&tofind);
	for(i=0;i<num;i++)
	{
	
	 if(tofind==a[i])
	 printf("The number %d is in the position %d.",tofind,i+1);
	 else
	 printf("The number %d is not in the array.");
    }
return 0;
}
