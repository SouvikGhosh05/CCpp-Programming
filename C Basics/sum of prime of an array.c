#include <stdio.h>

int main()
{
    int i, j, num, a[50], isPrime, sum=0;

	printf("Enter the number of elements: ");
	scanf("%d",&num);
	printf("Enter the numbers in the array: ");
	
    for(i=0; i<=num-1; i++)
    {
	  scanf("%d",&a[i]);
    }


    for(i=0; i<=num-1; i++)
    {

        isPrime = 1;
        for(j=2; j<=a[i]/2 ;j++)
        {
            if(a[i]%j==0)
            {
                /* 'i' is not prime */
                isPrime = 0;
                break;
            }
        }
            if(a[i]==1)
            {
                /* Skip the loop for the input number is '1' */
                continue;
            }

        /*
         * If 'i' is Prime then add to sum
         */
        if(isPrime==1)
        {
            sum += a[i];
        }
    }

    printf("Sum of all prime numbers of the array = %d",sum);

    return 0;
}