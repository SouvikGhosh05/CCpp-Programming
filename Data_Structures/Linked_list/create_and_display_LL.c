#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first = NULL;

void CreateLL(int A[], int n){

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

void DisplayLL(struct node *ptr){  //display the linked list

    while(ptr){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
void RecurDisplayLL(struct node *ptr){  //display with recursion

    if(ptr){
        printf("%d\t", ptr->data);
        RecurDisplayLL(ptr->next);
    }
}
void RevDisplayLL(struct node *ptr){  //display in reverse

    if(ptr){
        RevDisplayLL(ptr->next);
        printf("%d\t", ptr->data); 
    }
}


int main(){
    
    int A[] = {2, 5, 9, 4, 10, 7};
    int num = sizeof(A) / sizeof(A[0]);

    CreateLL(A, num);
    DisplayLL(first);
    printf("\n");
    RecurDisplayLL(first);
    printf("\n");
    RevDisplayLL(first);
    return 0;
}



