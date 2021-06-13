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

int main(){

    linkedList C_LL1, C_LL2;
    int A[] = {2, 5, 9, 4, 10, 7};
    int B[] = {7, 0, 3, 2};
    int num1 = sizeof(A) / sizeof(A[0]);
    int num2 = sizeof(B) / sizeof(B[0]);
    
    node *LL1 = C_LL1.CreateCLL(A, num1);
    node *LL2 = C_LL2.CreateCLL(B, num2);
    C_LL1.DisplayCLL(LL1);
    std::cout << std::endl;
    C_LL2.DisplayCLL(LL2);
    return 0;
}