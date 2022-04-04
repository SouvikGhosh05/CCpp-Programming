#include <stdio.h>
int main() {
  int i, m, n, sum = 0;
  printf("Enter first integer: ");
  scanf("%d", &m);
  printf("Enter second integer: ");
  scanf("%d", &n);
  for (i = m; i <= n; i++) {
    sum = sum + i;
  }
  printf("The sum is %d", sum);
}
