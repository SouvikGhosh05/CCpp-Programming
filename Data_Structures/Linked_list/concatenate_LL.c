#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first = NULL, *second=NULL, *third=NULL;

void CreateLL1(int A[], int n){

    struct node *new_node, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for (int i = 1; i < n; i++){
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = A[i];
        new_node->next = NULL;
        last->next = new_node;
        last = new_node;
    }
}
void CreateLL2(int B[], int n){

    struct node *new_node, *last;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = B[0];
    second->next = NULL;
    last = second;
    
    for (int i = 1; i < n; i++){
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = B[i];
        new_node->next = NULL;
        last->next = new_node;
        last = new_node;
    }
}

void DisplayLL(struct node *ptr){  //display the linked list

    while(ptr){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

void Concatenate(struct node *p, struct node *q){

    third = p;
    while(p->next){
        p = p->next;
    }
    p->next = q;
    q = NULL;
}

int main(){

    int a[] = {7, 6, 5, 9, 1};
    int b[] = {0, 6, 4, 3, 8, 10};
    int num1 = sizeof(a) / sizeof(a[0]);
    int num2 = sizeof(b) / sizeof(b[0]);
    
    CreateLL1(a, num1);
    CreateLL2(b, num2);
    Concatenate(first, second);
    DisplayLL(third);
    printf("\n");
    return 0;
}