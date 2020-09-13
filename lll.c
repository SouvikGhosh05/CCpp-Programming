#include<stdio.h>
int main()
{
	int i,num,largest,a[10];
	printf("Enter the number of elements");
	scanf("%d",&num);
	printf("Enter the numbers in the arrey");
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	largest=a[0];
	for(i=1;i<num;i++)
	{
	
	 if(largest<a[i])
	 largest=a[i];
    }
printf("\n largest element in given arrey:%d",largest);
return 0;
}


