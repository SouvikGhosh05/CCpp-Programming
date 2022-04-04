#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
} *first = NULL;

void CreateDoublyLL(int A[],int n){

    struct node *t, *last;
    
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for (int i = 1; i < n;i++){
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

int CountDoublyLL(struct node *ptr){

    int count = 0;
    while(ptr){
        count += 1;
        ptr = ptr->next;
    }
    return count;
}

void InsertDoublyLL(struct node *ptr){

    int x, index;
    
    printf("\nEnter an index and data to insert respectively: ");
    scanf("%d%d", &index, &x);
    if(index < 0 || index > CountDoublyLL(ptr)){
        printf("\nInvalid index. Unable to insert.\n");
        return;    //function just do nothing under this condition
    }

    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->data = x;
    if(index == 0)
    {
        t->next=first;  // here, first is NULL pointer, global variable
        t->prev = NULL;
        first->prev = t;
        first=t;
    }
    
    else{
        for (int i = 0; i < index-1; i++){
            ptr=ptr->next;
        }
        t->next = ptr->next;
        t->prev = ptr;
        if(ptr->next){
            ptr->next->prev = t;
        }
        ptr->next = t;
    }
}

int DeleteDoublyLL(struct node *ptr)
{
    struct node *q=NULL;
    int x = 0, index;

    printf("\nEnter an index to delete: ");
    scanf("%d", &index);
    if (index < 0 || index >= CountDoublyLL(ptr)){
        printf("Invalid index. Unable to delete.\n");
        return 0;
    }
    if (index == 0)
    {
        q = first;
        x = first->data;
        first = first->next;
        if(first){
            first->prev = NULL;
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
        if(ptr->next){
            ptr->next->prev = q;
        }
        free(ptr);
        return x;
    }
}

void ReverseDoublyLL(struct node *ptr){

    struct node *temp;
    while(ptr){
        temp = ptr->next;     
        ptr->next = ptr->prev;      //next and prev links are swapped.
        ptr->prev = temp;   /*After swapping, prev links already became next which it was previously.
        So, in order to go next, we need to go prev of the swapped list. */
        
        ptr = ptr->prev;           
        if(ptr && ptr->next==NULL){  
            first = ptr;      
        }   //As already the links were swapped, it checks actually if the next of swapped list is NULL, so as to reverse it.
        
    }
}

void DisplayDoublyLL(struct node *ptr){

    while(ptr){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int main(){

    int A[] = {2, 8, 4, 3};
    int num = sizeof(A) / sizeof(A[0]);

    CreateDoublyLL(A, num);
    DisplayDoublyLL(first);
    InsertDoublyLL(first);
    DisplayDoublyLL(first);
    printf("\n%d is deleted.\n", DeleteDoublyLL(first));
    DisplayDoublyLL(first);
    printf("\n");
    ReverseDoublyLL(first);
    DisplayDoublyLL(first);
    return 0;
}
