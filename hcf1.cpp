#include<stdio.h>
int main()
{
	int i,num1,num2,hcf,small;
	printf("Enter two integers: ");
	scanf("%d %d",&num1,&num2);
	
	if(num1>num2)
	{
		small=num2;
	}
	else
	{
		small=num1;
	}
	for(i=1;i<=small;++i)
	{
		if(num1%i==0 && num2%i==0)
		{
		   hcf=i;
	    }
		
    }
	    printf("HCF =%d",hcf);
	    
	return 0;	
		
}
	
