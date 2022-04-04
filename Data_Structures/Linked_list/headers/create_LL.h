#ifndef CREATE_LL_H // include guard - not required, but good practice.
#define CREATE_LL_H // Keeps the contents of the file from being processed more
                    // than once in a translation unit

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
} *first = NULL;

// only need the type of the argument in a declaration
void CreateLL(int A[], int n) {

  struct node *new_node, *last;
  first = (struct node *)malloc(sizeof(struct node));
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (int i = 1; i < n; i++) {
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = A[i];
    new_node->next = NULL;
    last->next = new_node;
    last = new_node;
  }
}

void DisplayLL(struct node *ptr) {

  while (ptr) {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
  }
}

int CountLL(struct node *ptr) { // counting the nodes

  int l = 0;
  while (ptr) {
    l += 1;
    ptr = ptr->next;
  }
  return l;
}

#endif /*CREATE_LL_H*/
