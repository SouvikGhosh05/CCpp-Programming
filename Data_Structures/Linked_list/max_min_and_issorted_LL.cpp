#include <iostream>
#include <climits>
#include "headers/create_LLcpp.h"

using std::cout;
using std::endl;

int MaxLL(node *ptr)
{

    int max = ptr->data;
    while (ptr)
    {

        if (max < ptr->data)
        {
            max = ptr->data;
        }
        ptr = ptr->next;
    }
    return max;
}
int MinLL(node *ptr)
{

    int min = ptr->data;
    while (ptr)
    {

        if (min > ptr->data)
        {
            min = ptr->data;
        }
        ptr = ptr->next;
    }
    return min;
}

bool isSorted(node *ptr)
{

    int x = INT_MIN;
    while (ptr != NULL)
    {
        if (ptr->data < x)
        {
            return false;
            break;
        }
        x = ptr->data;
        ptr = ptr->next;
    }
    return true;
}

int main()
{

    node *LList;
    int arr[] = {9, 10, 15, 17, 55};
    int num = sizeof(arr) / sizeof(arr[0]);
    LList = CreateLL(arr, num);
    int max = MaxLL(LList);
    int min = MinLL(LList);
    bool s = isSorted(LList);
    (s == true) ? cout << "Linked list is sorted.\n" : cout << "Linked list is not sorted.\n"; // conditional operator
    cout << "Maximum element is: " << max << endl;
    cout << "Minumum element is: " << min << endl;
    return 0;
}