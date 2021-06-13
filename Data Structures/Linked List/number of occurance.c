#include<stdio.h>
#include"create_LL.h"

void AscendLL(struct node *p){

    struct node *q;
    int temp, count;
    while(p->next){  
        q = p->next;  //when q becomes NULL, then it ensures q to bring back just on the p's next.
        count = 0;
        while(q){
            if (q->data == p->data)
            {
                count += 1;
            }
            q = q->next;   //while on checking, q keeps moving until it becomes NULL.
        }
        printf("The occurance of %d is %d times.\n", p->data, count);
        p = p->next; //after each full checks, p keeps moving to check further elements until it's next become NULL.
    }
}

int main(){

    int a[] = {0,0,4,6,6,7};
    int num = sizeof(a) / sizeof(a[0]);
    
    CreateLL(a, num);
    AscendLL(first);
    DisplayLL(first);
    return 0;
}