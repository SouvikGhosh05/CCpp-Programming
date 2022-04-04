#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int A[], int n)
{
    int i, j, flag;

    for (i = 0; i < n - 1; i++)
    {
        flag = 0;

        for (j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int *p, num, i;

    printf("Enter the number of elements to sort: ");
    scanf("%d", &num);

    p = (int *)malloc(num * sizeof(int));
    printf("\nPut the numbers: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", (p + i));
    }
    BubbleSort(p, num);

    printf("\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", *(p + i));
    }
    free(p);
    return 0;
}