#ifndef CREATE_CircularLL_H // include guard - not required, but good practice.
#define CREATE_CircularLL_H // Keeps the contents of the file from being processed more than once in a translation unit
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} *first = NULL;

void CreateCircularLL(int A[], int n){

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
    } while (ptr!=first);
    
}

int CountCircularLL(struct node *ptr){

    int count = 0;
    do{
        count += 1;
        ptr = ptr->next;
    } while (ptr != first);
    return count;
}
#endif