#include<stdio.h>
#include<stdlib.h>
#include"create circular_LL.h"

int DeleteCircularLL(struct node *ptr)
{
    struct node *q=NULL;
    int x = 0, index;

    printf("Enter an index to delete: ");
    scanf("%d", &index);
    if (index < 0 || index >= CountCircularLL(ptr)){
        printf("Invalid index. Unable to delete.\n");
        return 0;
    }
    if (index == 0)
    {
        while (ptr->next != first){
            ptr = ptr->next;
        }
        q = first;
        x = first->data;
        ptr->next = first->next;
        first = first->next;
        free(q);
        return x;
    }
    else{
        for (int i = 0; i < index; i++)
        {
            q = ptr;
            ptr = ptr->next;
        }
        q->next = ptr->next;
        x = ptr->data;
        free(ptr);
        return x;
    }
}
int main(){

    int arr[] = {2, 3, 7, 1, 4};
    int num = sizeof(arr) / sizeof(arr[0]);
    CreateCircularLL(arr, num);
    DeleteCircularLL(first);
    DisplayCircularLL(first);
    return 0;
}
