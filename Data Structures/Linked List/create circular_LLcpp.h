#ifndef CREATE_CircularCPPLL_H // include guard - not required, but good practice.
#define CREATE_CircularCPPLL_H // Keeps the contents of the file from being processed more than once in a translation unit
#include<iostream>

class node{
    public:
    int data;
    node *next;
    node(int x){
        data = x;
    }
};

class linkedList{
    public:
    node *first = NULL;
    node *CreateCLL(int A[], int n);
    void DisplayCLL(node *p);
    int CountCLL(node *p);
    node *InsertCLL(node *ptr);
    node *DeleteCLL(node *ptr);
};

node* linkedList :: CreateCLL(int A[],int n){
    
    node *t=NULL, *last=NULL;
    first= new node(A[0]);
    first->next = first;
    last = first;

    for (int i = 1; i < n;i++){
        t = new node(A[i]);
        t->next = last->next;
        last->next = t;
        last = t;
    }
    return first;
}

void linkedList:: DisplayCLL(node *p){
    
    do
    {
        std::cout << p->data << "\t";
        p = p->next;
    } while (p != first);
}
int linkedList:: CountCLL(node *p){

    int count = 0;
    do{
        count += 1;
        p = p->next;
    } while (p != first);
    return count;
}

#endif