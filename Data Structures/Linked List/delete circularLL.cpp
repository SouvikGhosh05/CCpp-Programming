#include<iostream>
#include"create circular_LLcpp.h"

node* linkedList:: DeleteCLL(struct node *ptr){

    node *q = NULL;
    int x = 0, index;
    std::cout << "Enter an index to delete: ";
    std::cin >> index;
    if(index < 0 || index >= CountCLL(ptr)){
        std::cout<<"Invalid index. Unable to delete.\n";
        return ptr;    //function just do nothing under this condition
    }
    if(index==0){
        
        while(ptr->next!=first){
            ptr = ptr->next;
        }
        q = first;
        x = first->data;
        ptr->next = first->next;
        first = first->next;
        delete q;
    }
    else{
        for (int i = 0; i < index; i++)
        {
            q = ptr;
            ptr = ptr->next;
        }
        q->next = ptr->next;
        x = ptr->data;
        delete ptr;
    }
    std::cout << "The deleted element is: " << x << std::endl;
    return first;
}
int main(){

    linkedList C_LL1, C_LL2;
    int A[] = {2, 5, 9, 4, 10, 7};
    int B[] = {7, 0, 3, 2};
    int num1 = sizeof(A) / sizeof(A[0]);
    int num2 = sizeof(B) / sizeof(B[0]);
    
    node *LL1 = C_LL1.CreateCLL(A, num1);
    node *LL2 = C_LL2.CreateCLL(B, num2);
    LL1=C_LL1.DeleteCLL(LL1);
    LL2=C_LL2.DeleteCLL(LL2);
    C_LL1.DisplayCLL(LL1);
    std::cout << std::endl;
    C_LL2.DisplayCLL(LL2);
    return 0;
}