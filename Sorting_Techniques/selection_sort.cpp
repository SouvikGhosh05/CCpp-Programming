#include <iostream>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void SelectionSort(int A[], int n)
{
    int i, j, k;

    for (i = 0; i < n - 1; i++)
    {

        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        swap(&A[i], &A[k]);
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
    SelectionSort(p, num);

    std::cout << std::endl;
    for (i = 0; i < num; i++)
    {
        std::cout << *(p + i) << "\t";
    }
    delete[] p;
    return 0;
}