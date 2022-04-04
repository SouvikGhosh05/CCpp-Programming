// Radix Sort

#include <bits/stdc++.h>

int CountMaxDig(std::vector<int> &A)
{
    int largest = A.at(0);
    int count = 0;

    for (unsigned int i = 0; i < A.size(); i++)
    {
        if (largest < A.at(i))
        {
            largest = A.at(i);
        }
    }
    while (largest != 0)
    {
        largest /= 10;
        count += 1;
    }
    return count;
}

std::vector<int> RadixSort(std::vector<int> &A)
{
    int power = 1; // Units/Tens/Hundreds - used to determine which digit
    int digit = CountMaxDig(A);

    for (int i = 0; i < digit; i++) // Step 3, 4, 5: Arrange the numbers on the basis of digits
    {

        std::vector<int> new_array(A.size()); // Holds the updated array

        std::array<int, 10> count; // Counting Sort Array - required for arranging digits [0-9]
        count.fill({});

        for (unsigned int j = 0; j < A.size(); j++)
        {
            int num = (A.at(j) / power) % 10; // The digit under consideration in this iteration

            count.at(num)++;
        }

        for (int j = 1; j < 10; j++) // Cumulative frequency of count array
        {
            count.at(j) += count.at(j - 1);
        }

        for (int k = A.size() - 1; k >= 0; k--) // Designating new positions in the updated array
        {
            int num = (A.at(k) / power) % 10;
            new_array.at(count.at(num) - 1) = A.at(k);
            count.at(num)--;
        }

        for (unsigned int j = 0; j < A.size(); j++) // Updating the original array using new array
            A.at(j) = new_array.at(j);

        power *= 10; // Updating the digit to be considered next iteration
    }
    return A;
}

int main()
{

    std::vector<int> v = {9, 5, 3, 1, 7, 2, 4, 6, 8, 500, 325};
    std::cout << "\nPut the numbers: ";
    /*for (i = 0; i < num; i++)
    {
        cin >> v.at(i);
    }*/

    /*while (cin >> num)
    {
        v.push_back(num);
    }
    */
    std::vector<int> new_v = RadixSort(v);
    std::cout << std::endl;

    for (unsigned int i = 0; i < new_v.size(); i++)
    {
        std::cout << new_v.at(i) << "\t";
    }
    printf("\n");
    return 0;
}