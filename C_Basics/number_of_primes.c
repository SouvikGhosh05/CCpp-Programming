#include <stdio.h>
int main()
{
    int i, j, start, end, isPrime, len = 0;

    printf("Find number of all primes between a number from: ");
    scanf("%d", &start);
    printf("to: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {

        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                /* 'i' is not prime */
                isPrime = 0;
                break;
            }
        }
        if (i == 1)
        {
            /* Skip the loop for the input number is '1' */
            continue;
        }

        /*
         * If 'i' is Prime then add to sum
         */
        if (isPrime == 1)
        {
            len++;
        }
    }

    printf("Numbers of the prime numbers between %d to %d = %d", start, end, len);

    return 0;
}