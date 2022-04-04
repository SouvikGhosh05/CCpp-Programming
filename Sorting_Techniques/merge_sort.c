#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[50];

    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        }

        else
        {
            B[k++] = A[j++];
        }
    }
    for (; i <= mid; i++)
    {
        B[k++] = A[i];
    }
    for (; j <= h; j++)
    {
        B[k++] = A[j];
    }
    for (i = l; i <= h; i++)
    {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        MergeSort(A, l, mid);
        MergeSort(A, mid + 1, h);
        Merge(A, l, mid, h);
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
    MergeSort(p, 0, num - 1);

    printf("\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", *(p + i));
    }
    free(p);
    return 0;
}