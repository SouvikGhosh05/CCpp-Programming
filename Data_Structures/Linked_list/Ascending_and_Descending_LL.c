#include <stdio.h>
#include "headers/create_LL.h"

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

void DescendLL(struct node *p){

    struct node *q;
    int temp;
    while(p->next){  
        q = p->next;  //when q becomes NULL, then it ensures q to bring back just on the p's next.
        while(q){
            if (p->data < q->data)
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

int main(){

    int a[] = {9, 0, 9, 1, 5};
    int num = sizeof(a) / sizeof(a[0]);
    
    CreateLL(a, num);
    AscendLL(first);
    DisplayLL(first);
    printf("\n");
    DescendLL(first);
    DisplayLL(first);
    printf("\n");
    return 0;
}