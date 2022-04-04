#include "headers/create_LLcpp.h"
#include <iostream>

void InsertLL(node *ptr) {

  int x, index;
  std::cout << "Enter an index and data to insert respectively: ";
  std::cin >> index >> x;
  if (index < 0 || index > CountLL(ptr)) {
    std::cout << "Invalid index. Unable to insert.\n";
    return; // function just do nothing under this condition
  }
  node *t = new node(x);
  if (index == 0) {
    t->next = ptr;
    ptr = t;
  }

  else {
    for (int i = 0; i < index - 1; i++) {
      ptr = ptr->next;
    }
    t->next = ptr->next;
    ptr->next = t;
  }
}
int main() {
  node *LL1, *LL2;
  int arr1[] = {7, -9, 0, 5, 2};
  int arr2[] = {9, 0, -7, 5};
  int num1 = sizeof(arr1) / sizeof(arr1[0]);
  int num2 = sizeof(arr2) / sizeof(arr2[0]);
  LL1 = CreateLL(arr1, num1);
  LL2 = CreateLL(arr2, num2);

  InsertLL(LL1);
  InsertLL(LL2);
  DisplayLL(LL1);
  std::cout << std::endl;
  DisplayLL(LL2);
  return 0;
}
