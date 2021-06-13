#include<stdio.h>
#include<stdbool.h>
#include"create_LL.h"

int MaxLL(struct node *ptr){

    int max = ptr->data;
    while(ptr){

        if(max<ptr->data){
            max = ptr->data;
        }
        ptr = ptr->next;
    }
    return max;
}
int MinLL(struct node *ptr){

    int min = ptr->data;
    while(ptr){

        if(min>ptr->data){
            min = ptr->data;
        }
        ptr = ptr->next;
    }
    return min;
}

bool isSorted(struct node *ptr){

    int x = INT_MIN;
    while(ptr!=NULL){
        if(ptr->data<x){
            return false;
            break;
        }
        x = ptr->data;
        ptr = ptr->next;
    }
    return true;
}

int main(){

    int arr[] = {55, 9, 10, 15, 17};
    int num = sizeof(arr) / sizeof(arr[0]);
    CreateLL(arr, num);
    int max = MaxLL(first);
    int min = MinLL(first);
    bool s = isSorted(first);
    (s == true) ? printf("Linked list is sorted.\n") : printf("Linked list is not sorted.\n"); //condotional operator
    printf("Maximum element is: %d\n", max);
    printf("Minumum element is: %d", min);
    return 0;
}