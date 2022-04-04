#include "headers/create_LLcpp.h"
#include <iostream>
// 'CreateLL()' is defined inside 'create_LL.h' header file.

int CountLL(node *ptr);

int RCountLL(node *p) { // count using recursion

  if (p) {
    return RCountLL(p->next) + 1;
  } else {
    return 0;
  }
}
int Sum(node *p) {
  int s = 0;
  while (p) {
    s += p->data;
    p = p->next;
  }
  return s;
}

int Rsum(node *p) { // sum using recursion

  if (p == NULL) {
    return 0;
  } else {
    return Rsum(p->next) + p->data;
  }
}

int main() {

  // node *LList;
  int A[] = {2, 5, 9, 4, 10, 7, 12, -5};

  int num = sizeof(A) / sizeof(A[0]);
  node *first_node = CreateLL(A, num);
  int count = CountLL(first_node);
  int rcount = RCountLL(first_node);
  int sum = Sum(first_node);
  int rsum = Rsum(first_node);

  std::cout << "The number of nodes are: " << count << std::endl;
  std::cout << "The number of nodes are: " << rcount << std::endl;
  std::cout << "The sum of nodes are: " << sum << std::endl;
  std::cout << "The sum of nodes are: " << rsum << std::endl;

  return 0;
}