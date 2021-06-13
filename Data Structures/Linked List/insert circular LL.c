#include<stdio.h>
#include<stdlib.h>
#include"create circular_LL.h"

void InsertCircularLL(struct node *ptr){

    int x, index;
    
    printf("Enter an index and data to insert respectively: ");
    scanf("%d%d", &index, &x);
    if(index < 0 || index > CountCircularLL(ptr)){
        printf("Invalid index. Unable to insert.\n");
        return;    //function just do nothing under this condition
    }

    if(index==0){
        struct node *t=(struct node *)malloc(sizeof(struct node));
        t->data = x;
        while(ptr->next!=first){
            ptr = ptr->next;
        }
        ptr->next = t;
        t->next = first;
        first = t;
    }
    else{
        struct node *t=(struct node *)malloc(sizeof(struct node));
        t->data = x;
        for (int i = 0; i < index - 1; i++){
            ptr = ptr->next;
        }
        t->next = ptr->next;
        ptr->next = t;
    }
}

int main(){

    int arr[] = {2, 3, 7, 1, 4};
    int num = sizeof(arr) / sizeof(arr[0]);
    CreateCircularLL(arr, num);
    InsertCircularLL(first);
    DisplayCircularLL(first);
    return 0;
}