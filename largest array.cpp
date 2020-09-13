#include<stdio.h>
int main()
{
	int a[100],i,num,largest;
	//int largest=a[0];
	printf("Enter the number of elements in the array");
	scanf("%d",&num);
	printf("Enter the array");
	for(i=0;i<=num-1;i++)
	{
		scanf("%d",&a[i]);
	}
	//for(i=0;i<=num-1;i++)
	//{
		largest=a[0];
	//}
	for(i=0;i<=num-1;i++)
	{
		if(largest<a[i])
		{
			largest=a[i];
		}
		
	}
	printf("The largest number in the array %d",largest);
	return 0;
}
