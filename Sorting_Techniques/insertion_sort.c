#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int A[], int n)
{
    int i, j, x;

    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
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
    InsertionSort(p, num);

    printf("\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", *(p + i));
    }
    free(p);
    return 0;
}