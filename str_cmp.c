#include<stdio.h>
int main()
{
	int i,j=0,size1=0,size2=0;
	char g[100],h[100];
	printf("Enter string 1: ");
	scanf("%s",g);
	printf("Enter string 2: ");
	scanf("%s",h);
	for(i=0;g[i]!=NULL;i++)
	{
		size1++;
	}
	for(i=0;h[i]!=NULL;i++)
	{
		size2++;
	}
	if(size1!=size2)
	{
		//if(size1<size2)
		//{
	//		min=size1;
		//}
		//else
		//{
	//		min=size2;
		//}
		printf("Two strings are not equal");
	}
	else
	{
		for(i=0;i<size1;i++)
		{
			if(g[i]==h[i])
			{
				j=j;
			}
			else
			{
				j++;
				
			}
		}
		
	}
	if(j!=0)
	{
		
		printf("Two strings are not equal");
	}
	else
	{
		printf("Two strings are equal");
    }
    //for(i=0;i<min;i++)
    //{
    //	if(g[i]!=h[i])
    //	{
    //		s=s;
	//	}
	//	else
	//	{
	//		s++;
	//		break;
	//	}
	//}
	//if(s==0)
	//{
		//printf("Two strings are not equal");
	//}
	//else if(s==1)
	//{
		//printf("Two strings are not equal");
	//}
	return 0;
}





