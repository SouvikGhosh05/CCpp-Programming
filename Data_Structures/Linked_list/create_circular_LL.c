#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} *first = NULL;

void createCircularLL(int A[], int n){

    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = first;
    last = first;

    for (int i = 1; i < n;i++){
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = last->next;  //for each new allocation, every last new node points to the first node
        last->next = t;
        last = t;
    }
}

void DisplayCircularLL(struct node *ptr){

    do
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    } while (ptr != first);
}

void CountCircularLL(struct node *ptr){

    int count = 0;
    do{
        count += 1;
        ptr = ptr->next;
    } while (ptr != first);
    
    printf("\nThe number of nodes are %d.", count);
}

int main(){

    int arr[] = {8, 7, 3, 4, 0};
    int num = sizeof(arr) / sizeof(arr[0]);
    createCircularLL(arr, num);
    DisplayCircularLL(first);
    CountCircularLL(first);
    return 0;
}


