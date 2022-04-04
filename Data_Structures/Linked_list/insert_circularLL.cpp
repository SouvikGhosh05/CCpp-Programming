#include "headers/create_circular_LLcpp.h"
#include <iostream>

node *linkedList::InsertCLL(struct node *ptr) {

  int x, index;
  std::cout << "Enter an index and data to insert respectively: ";
  std::cin >> index >> x;
  if (index < 0 || index > CountCLL(ptr)) {
    std::cout << "Invalid index. Unable to insert.\n";
    return ptr; // function just do nothing under this condition
  }
  node *t = new node(x);
  if (index == 0) {

    while (ptr->next != first) {
      ptr = ptr->next;
    }
    ptr->next = t;
    t->next = first;
    first = t;
  } else {
    for (int i = 0; i < index - 1; i++) {
      ptr = ptr->next;
    }
    t->next = ptr->next;
    ptr->next = t;
  }
  return first;
}
int main() {

  linkedList C_LL1, C_LL2;
  int A[] = {2, 5, 9, 4, 10, 7};
  int B[] = {7, 0, 3, 2};
  int num1 = sizeof(A) / sizeof(A[0]);
  int num2 = sizeof(B) / sizeof(B[0]);

  node *LL1 = C_LL1.CreateCLL(A, num1);
  node *LL2 = C_LL2.CreateCLL(B, num2);
  LL1 = C_LL1.InsertCLL(LL1);
  LL2 = C_LL2.InsertCLL(LL2);
  C_LL1.DisplayCLL(LL1);
  std::cout << std::endl;
  C_LL2.DisplayCLL(LL2);
  return 0;
}