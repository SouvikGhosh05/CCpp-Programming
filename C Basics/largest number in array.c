#include<stdio.h>
int main()
{
	int a[20],i,num,largest;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&num);
	printf("Enter the array: ");
	for(i=0;i<=num-1;i++)
	{
		scanf("%d",&a[i]);
	}
		largest=a[0];

	for(i=0;i<=num-1;i++)
	{
		if(largest<a[i])
		{
			largest=a[i];
		}
		
	}
	printf("The largest number in the array: %d",largest);
	return 0;
}
