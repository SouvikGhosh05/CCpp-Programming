#include <stdio.h>
#include <stdlib.h>
#include "headers/create_LL.h"

int DeleteLL(struct node *ptr)
{
    struct node *q=NULL;
    int x = 0, index;

    printf("Enter an index to delete: ");
    scanf("%d", &index);
    if (index < 0 || index >= CountLL(ptr)){
        printf("Invalid index. Unable to delete.\n");
        return 0;
    }
    if (index == 0)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
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

void RemoveDuplicate(struct node *ptr){  //it removes side to side duplicate values
    
    struct node *q = ptr->next;
    while(q!= NULL){
        if(ptr->data!=q->data){
            ptr = q;
            q = q->next;
        }
        else{
            ptr->next = q->next;
            free(q);
            q = ptr->next;
        }
    }
}
int main(){

    int arr[] = {7, 5, 9, 2};
    int num = sizeof(arr) / sizeof(arr[0]);
    CreateLL(arr, num);
    DeleteLL(first);
    //RemoveDuplicate(first);
    DisplayLL(first);
    printf("\nThe number of nodes are: %d", CountLL(first));
    return 0;
}