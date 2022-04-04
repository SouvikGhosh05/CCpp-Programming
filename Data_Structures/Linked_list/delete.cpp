#include "headers/create_LLcpp.h"
#include <iostream>
int DeleteLL(node *ptr) {
  node *q = NULL;
  int x = 0, index;

  std::cout << "Enter an index to delete: ";
  std::cin >> index;
  if (index < 0 || index >= CountLL(ptr)) {
    std::cout << "Invalid index. Unable to delete." << std::endl;
    return 0;
  }
  if (index == 0) {
    q = ptr;
    x = ptr->data;
    ptr = ptr->next;
    delete q;
    return x;
  } else {
    for (int i = 0; i < index; i++) {
      q = ptr;
      ptr = ptr->next;
    }
    q->next = ptr->next;
    x = ptr->data;
    delete ptr;
    return x;
  }
}
int main() {

  node *LL1, *LL2;
  int arr1[] = {5, 5, 7, -9, 0, 5, 2, 0};
  int arr2[] = {9, 9, 2, 0, 4};
  int num1 = sizeof(arr1) / sizeof(arr1[0]);
  int num2 = sizeof(arr2) / sizeof(arr2[0]);
  LL1 = CreateLL(arr1, num1);
  LL2 = CreateLL(arr2, num2);
  int x1 = DeleteLL(LL1);
  int x2 = DeleteLL(LL2);
  std::cout << x1 << " is deleted." << std::endl;
  std::cout << x2 << " is deleted." << std::endl;
  DisplayLL(LL1);
  std::cout << std::endl;
  DisplayLL(LL2);
  return 0;
}