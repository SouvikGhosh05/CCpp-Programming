#include<stdio.h>
//#include<math.h>
int main()
{
	int i,num,a[100],search;
	printf("Enter the number of elements of the array");
	scanf("%d",num);
	printf("Enter the array");
	for(i=0;i<=num-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search: ");
	scanf("%d",&search);
	for(i=0;i<=num-1;i++)
	{
		search=a[i];
	}
	if(search==a[i])
	{
		printf("The number exists in the array and its position %d",i+1);
	}
	else
	{
		printf("The number doesn't exist in the array");
	}
	return 0;
}
