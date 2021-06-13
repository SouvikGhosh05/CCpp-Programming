#include<iostream>
#include"create_LLcpp.h"

void AscendLL(node *p){

    node *q;
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

node* Merge(node *p,struct node *q)
{
    node *last = NULL;
    node *third = NULL;
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
return third;
}

int main(){

    node *LL1, *LL2, *LL3;
    int a[] = {2, 8, 10, 15};
    int b[] = {50, 40, 30, 10};
    int num1 = sizeof(a) / sizeof(a[0]);
    int num2 = sizeof(b) / sizeof(b[0]);

    LL1 = CreateLL(a, num1);
    LL2 = CreateLL(b, num2);
    AscendLL(LL1);
    AscendLL(LL2);
    LL3 = Merge(LL1, LL2);
    DisplayLL(LL3);
    return 0;
}
