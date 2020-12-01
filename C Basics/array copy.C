#include <stdio.h>
int main()
{
	int i,h,j=0,a[20],b[20];
	printf("Enter the elements of the array: ");
	scanf("%d",&h);
	printf("Enter the array: ");
	for(i=0;i<h;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<h;i++)
	{
		b[i]=a[i];
		j=j+2;
	}
	for(i=0;i<j/2;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\nIts number of elements are %d.",j/2);
	return 0;
}
