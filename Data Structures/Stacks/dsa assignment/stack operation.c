#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size; // it is size of the array.
    int top;  // it is top of the array.
    int *S;   // here *S is the pointer to the integer representing each elements of the array.
};

void CreateStack(struct stack *p){

    printf("Enter the size of the array: ");
    scanf("%d", &p->size);
    p->top = -1;                 // initially when no data is present in the stack, top is -1.
    p->S = (int *)malloc(p->size * sizeof(int));   //it just creating an array dynamically of a given size.
}

void push(struct stack *p, int x){

    if (p->top == p->size - 1){
        printf("Stack Overflow.\n");
    }
    else{
        p->S[++p->top] = x;    // at first, to push, increment the top and store the value. 
    }
}

int pop(struct stack *p){

    int x = -1;
    if (p->top == -1){
        printf("Stack Underflow.\n");
    }
    else{
        x = p->S[p->top--];   // at first, to pop, take out the value and decrement the top.
    }
    return x;
}

void DisplayStack(struct stack p){

    for (int i = 0; i <= p.top; i++){
        printf("%d\t", p.S[i]);
    }
}
int main(){

    struct stack s1;
    CreateStack(&s1);                  // create a stack of a fixed array size.
    push(&s1, 4);
    push(&s1, 7);
    push(&s1, 8);         
    DisplayStack(s1);                  // displays the stack from first.
    pop(&s1);                          // pops the last element from the stack.
    printf("\n");
    DisplayStack(s1);
    return 0;
}