#include <stdio.h>
#include "headers/create_LL.h"
// 'CreateLL()' is defined inside 'create_LL.h' header file. 

int RCountLL(struct node *p){  //count using recursion

    if(p){
        return RCountLL(p->next) + 1;
    }
    else{
        return 0;
    }
    
}
int Sum(struct node *p)
{
    int s=0;
    while(p){
        s+=p->data;
        p=p->next;
    }
    return s;
}

int Rsum(struct node *p){  //sum using recursion

    if(p==NULL){
        return 0;
    }
    else{
        return Rsum(p->next) + p->data;
    }
}


int main(){
    
    int A[] = {2, 5, 9, 4, 10, 7, 12, -5};
    int num = sizeof(A) / sizeof(A[0]);
    CreateLL(A, num); 
    int count=CountLL(first);
    int rcount = RCountLL(first);
    int sum = Sum(first);
    int rsum = Rsum(first);
    
    printf("The number of nodes are: %d", count);
    printf("\nThe number of nodes are: %d", rcount);
    printf("\nThe sum of nodes are: %d", sum);
    printf("\nThe sum of nodes are: %d", rsum);
    
    return 0;
}