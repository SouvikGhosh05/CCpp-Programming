#include<stdio.h>
int main()
{
	int i,num,a[10],even[10],odd[10],j,k;
	printf("Enter the number of elements");
	scanf("%d",&num);
	printf("Enter the numbers in the arrey");
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	for(i=0;i<num;i++)
	 {
	 	if(a[i]%2==0)
	 	{
	 		even[j]=a[i];
	 		j++;
		 }
	 }
	 for(i=0;i<num;i++)
	 {
	 	if(a[i]%2!=0)
	 	{
	 		odd[k]=a[i];
	 		k++;
		}
	 }
	 for(i=0;i<k;i++)
	 {
	 	printf("The odd id %d",odd[k]);
	 }
	 for(i=0;i<j;i++)
	 {
	    printf("The even id %d",even[j]);
     }
}
