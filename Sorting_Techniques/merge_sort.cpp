#include <iostream>

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

    std::cout << "Enter the number of elements to sort: ";
    std::cin >> num;
    p = new int[num];
    std::cout << "\nPut the numbers: ";
    for (i = 0; i < num; i++)
    {
        std::cin >> *(p + i);
    }
    MergeSort(p, 0, num - 1);

    std::cout << std::endl;
    for (i = 0; i < num; i++)
    {
        std::cout << *(p + i) << "\t";
    }
    delete[] p;
    return 0;
}