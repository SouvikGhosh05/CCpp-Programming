#include<stdio.h>
int main()
{
	int i,j,num,a[100],s;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[j]<a[i])
			{
				s=a[j];
				a[j]=a[i];
			    a[i]=s;
			}
		}
		
	}
	printf("The ascending order is: ");
	for(i=0;i<num;i++)
	{
		printf("%d\t",a[i]);
	
	}
	return 0;
}
