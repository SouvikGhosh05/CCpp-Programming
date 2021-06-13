#include<iostream>
#include"create_LLcpp.h"

node* Concatenate(node *p, node *q){

    node *third = p;
    while(p->next){
        p = p->next;
    }
    p->next = q;
    q = NULL;
    return third;
}

int main(){

    node *LL1, *LL2, *LL3;
    int a[] = {7, 6, 5, 9, 1};
    int b[] = {0, 6, 4, 3, 8, 10};
    int num1 = sizeof(a) / sizeof(a[0]);
    int num2 = sizeof(b) / sizeof(b[0]);

    LL1 = CreateLL(a, num1);
    LL2 = CreateLL(b, num2);
    LL3 = Concatenate(LL1, LL2);
    DisplayLL(LL3);
    return 0;
}