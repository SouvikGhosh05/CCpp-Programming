#include<stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=10;i++)
   {
   	  for(j=i;j<=2*i+1;j++)
   	  {
   	  	 printf("%d\t",j);
	  }
   }
   return 0;
}
