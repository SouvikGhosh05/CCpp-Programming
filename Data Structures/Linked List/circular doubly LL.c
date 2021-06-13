#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
} *first = NULL;

void CreateCirDoublyLL(int A[],int n){

    struct node *t, *last;
    
    first = (struct node *)malloc(n * sizeof(struct node));
    first->data = A[0];
    first->prev = first;
    first->next = first;
    last = first;

    for (int i = 1; i < n;i++){
        t = (struct node *)malloc(n * sizeof(struct node));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        first->prev = t;
        last->next = t;
        last = t;
    }
}

int CountCirDoublyLL(struct node *ptr){

    int count = 0;
    do{
        count += 1;
        ptr = ptr->next;
    } while (ptr != first);
    return count;
}
void InsertCirDoublyLL(struct node *ptr){

    int x, index;
    
    printf("Enter an index and data to insert respectively: ");
    scanf("%d%d", &index, &x);
    if(index < 0 || index > CountCirDoublyLL(ptr)){
        printf("\nInvalid index. Unable to insert.\n");
        return;    //function just do nothing under this condition
    }

    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->data = x;
    if(index == 0)
    {
        t->next=first;  // here, first is NULL pointer, global variable
        t->prev = first->prev;
        t->prev->next = t;
        first->prev = t;
        first=t;
    }
    
    else{
        for (int i = 0; i < index-1; i++){
            ptr=ptr->next;
        }
        t->next = ptr->next;
        t->prev = ptr;
        ptr->next->prev = t;
        ptr->next = t;
    }
}
int DeleteCirDoublyLL(struct node *ptr)
{
    struct node *q=NULL;
    int x = 0, index;

    printf("\nEnter an index to delete: ");
    scanf("%d", &index);
    if (index < 0 || index >= CountCirDoublyLL(ptr)){
        printf("Invalid index. Unable to delete.\n");
        return 0;
    }
    if (index == 0)
    {
        q = first;
        x = first->data;
        first->prev->next = first->next;
        first->next->prev = first->prev;
        if (first->next == first){
            first = NULL;
        }
        else{
            first = first->next;
        }
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
        ptr->next->prev = q;
        free(ptr);
        return x;
    }
}

void DisplayCirDoublyLL(struct node *ptr){

    do{
        if(first){
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
        else{
            return;
        }
    } while (ptr != first);
}
int main(){

    int A[] = {2, 8, 0};
    int num = sizeof(A) / sizeof(A[0]);

    CreateCirDoublyLL(A, num);
    DeleteCirDoublyLL(first);
    //InsertCirDoublyLL(first);
    DisplayCirDoublyLL(first);
    //printf("\nThe number of node are: %d", CountCirDoublyLL(first));
    return 0;
}