#include <iostream>

class node {
public:
  int data;
  node *next;
  node(int x) {
    data = x;
    next = NULL;
  }
};

class linkedList {
public:
  node *first = NULL;
};

node *CreateLL(int A[], int n) {

  node *new_node = NULL, *last = NULL;
  linkedList Linked_list;
  Linked_list.first = new node(A[0]);
  last = Linked_list.first;

  for (int i = 1; i < n; i++) {
    new_node = new node(A[i]);
    last->next = new_node;
    last = new_node;
  }
  return Linked_list.first;
}
void DisplayLL(node *ptr) {

  while (ptr) {
    std::cout << ptr->data << "\t";
    ptr = ptr->next;
  }
}
int main() {

  node *LL1, *LL2;
  int A[] = {2, 5, 9, 4, 10, 7};
  int B[] = {7, 0, 3, 2};
  int num1 = sizeof(A) / sizeof(A[0]);
  int num2 = sizeof(B) / sizeof(B[0]);

  LL1 = CreateLL(A, num1);
  LL2 = CreateLL(B, num2);
  DisplayLL(LL1);
  std::cout << std::endl;
  DisplayLL(LL2);
  return 0;
}