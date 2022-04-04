#ifndef CREATE_LL_CPP_H // include guard - not required, but good practice.
#define CREATE_LL_CPP_H // Keeps the contents of the file from being processed
                        // more than once in a translation unit
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
int CountLL(node *ptr) { // counting the nodes

  int l = 0;
  while (ptr) {
    l += 1;
    ptr = ptr->next;
  }
  return l;
}

#endif