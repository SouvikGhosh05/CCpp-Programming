#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack
{
    int size; // it is size of the array.
    int top;  // it is top of the array.
    int *S;   // here *S is the pointer to the integer representing each elements of the array.
};

void CreateStack(struct stack *p)
{

    printf("Enter the size of the array: ");
    scanf("%d", &p->size);
    p->top = -1;                                 // initially when no data is present in the stack, top is -1.
    p->S = (int *)malloc(p->size * sizeof(int)); // it just creating an array dynamically of a given size.
}

void push(struct stack *p, int x)
{

    if (p->top == p->size - 1)
    {
        printf("Stack Overflow.\n");
    }
    else
    {
        p->S[++p->top] = x; // at first, to push, increment the top and store the value.
    }
}

int pop(struct stack *p)
{

    int x = -1;
    if (p->top == -1)
    {
        printf("Stack Underflow.\n");
    }
    else
    {
        x = p->S[p->top--]; // at first, to pop, take out the value and decrement the top.
    }
    return x;
}

void peek(struct stack p, int index)
{
    if (p.top - index + 1 < 0)
    {
        printf("\nInvalid index");
    }
    else
    {
        printf("%d", p.S[p.top - index + 1]);
    }
}

bool isEmpty(struct stack p)
{

    if (p.top == -1)
    {
        return true;
    }
    return false;
}
bool isFull(struct stack p)
{

    if (p.top == p.size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int stackTop(struct stack p)
{

    if (!isEmpty(p))
    {
        return p.S[p.top];
    }
    return -1;
}

void DisplayStack(struct stack p)
{

    for (int i = p.top; i >= 0; i--)
    {
        printf("%d\t", p.S[i]);
    }
}

int main()
{

    struct stack s1;
    CreateStack(&s1); // create a stack of a fixed array size.
    // Array size should be greater than the number of elements to be pushed in the stack.
    push(&s1, 9);
    push(&s1, 20);
    push(&s1, 7);
    push(&s1, 4);
    DisplayStack(s1);             // displays the stack from last.
    printf("\n%d", isFull(s1));   // returns true if it is full.
    printf("\n%d", isEmpty(s1));  // returns true if it is empty.
    printf("\n%d", stackTop(s1)); // returns the topmost element.
    pop(&s1);                     // pops the last element from the stack.
    printf("\n%d", stackTop(s1));
    printf("\n");
    DisplayStack(s1);
    peek(s1, 50); // returns the element at the given index.
    printf("\n");
    return 0;
}