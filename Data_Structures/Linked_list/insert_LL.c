#include <stdio.h>
#include <stdlib.h>
#include "headers/create_LL.h"

void InsertLL(struct node *ptr){

    int x, index;
    
    printf("Enter an index and data to insert respectively: ");
    scanf("%d%d", &index, &x);
    if(index < 0 || index > CountLL(ptr)){
        printf("Invalid index. Unable to insert.\n");
        return;    //function just do nothing under this condition
    }

    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->data = x;
    if(index == 0)
    {
        t->next=first;  // here, first is NULL pointer, global variable
        first=t;
    }
    
    else{
        for (int i = 0; i < index-1; i++){
            ptr=ptr->next;
        }
        t->next = ptr->next;
        ptr->next = t;
    }
}

int main(){

    int arr[] = {7, 5, 9, 2};
    int num = sizeof(arr) / sizeof(arr[0]);
    CreateLL(arr, num);
    InsertLL(first);
    DisplayLL(first);
    return 0;
}