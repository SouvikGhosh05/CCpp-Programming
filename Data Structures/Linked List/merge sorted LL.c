#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL, *second = NULL, *third = NULL;

void CreateLL1(int A[],int n)
{
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void CreateLL2(int B[],int n)
{
    int i;
    struct node *t,*last;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = B[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = B[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void AscendLL(struct node *p){

    struct node *q;
    int temp;
    while(p->next){  
        q = p->next;  //when q becomes NULL, then it ensures q to bring back just on the p's next.
        while(q){
            if (q->data < p->data)
            {
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
            q = q->next;   //while on checking, q keeps moving until it becomes NULL.
        }
        p = p->next; //after each full checks, p keeps moving to check further elements until it's next become NULL.
    }
}

void Merge(struct node *p,struct node *q)
{
    struct node *last;
    if (p->data < q->data){   //it ensures to link with the smallest element first for merging. 
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else{
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while(p && q){
        
        if(p->data < q->data){   //on checking two elements each time, it ensures to link with the smallest one first.
        last->next = p;
        last = p;
        p = p->next;
        last->next = NULL;
    }
    else{
        last->next = q;
        last = q;
        q = q->next;
        last->next = NULL;
    }
}
if(p)
    last->next = p;
if(q)
    last->next = q;
}

void DisplayLL(struct node *p)
{
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->next;
    }
}

int main(){

    int a[] = {2, 8, 10, 15};
    int b[] = {50, 40, 30, 10};
    int num1 = sizeof(a) / sizeof(a[0]);
    int num2 = sizeof(b) / sizeof(b[0]);
    
    CreateLL1(a, num1);
    CreateLL2(b, num2);
    AscendLL(first);
    AscendLL(second);
    Merge(first, second);
    DisplayLL(third);
    return 0;
}
