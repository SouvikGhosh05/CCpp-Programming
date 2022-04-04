#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[], int l, int h)
{
    int pivot = A[h];
    int i = l - 1;

    for (int j = l; j < h; j++)
    {
        if (A[j] <= pivot)
        {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[h]);
    return (i + 1);
}

void QuickSort(int A[], int l, int h)
{
    int j;

    if (l < h)
    {
        j = partition(A, l, h);
        QuickSort(A, l, j - 1);
        QuickSort(A, j + 1, h);
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
    QuickSort(p, 0, num - 1);

    printf("\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", *(p + i));
    }
    free(p);
    return 0;
}