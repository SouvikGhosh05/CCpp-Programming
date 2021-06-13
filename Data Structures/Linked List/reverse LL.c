#include<stdio.h>
#include<stdlib.h>
#include"create_LL.h"

void ReverseLL(struct node *ptr){  //reversing linked list normally

    struct node *q = NULL;
    struct node *r = NULL;
    while(ptr){  //ptr is not NULL
    
        r = q;
        q = ptr;
        ptr = ptr->next;
        q->next = r;
    }
    first = q;
}

void RecurReverseLL(struct node *q, struct node *ptr){  //reversing linked list with recursion

    if(ptr){
        RecurReverseLL(ptr, ptr->next);
        ptr->next = q;
    }
    else{
        first = q;
    }

}
int main(){

    int arr[] = {5, 5, 7, -9, 0, 5, 2, 0};
    int num = sizeof(arr) / sizeof(arr[0]);
    CreateLL(arr, num);
    //ReverseLL(first);
    RecurReverseLL(NULL, first);
    DisplayLL(first);
    return 0;
}