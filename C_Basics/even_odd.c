#include <stdio.h>
int main() {
  int i, num, a[20], Even[20], Odd[20];
  int j = 0, k = 0;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &num);
  printf("Put the numbers: ");
  for (i = 0; i < num; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < num; i++) {
    if (a[i] == 0) {
      continue;
    } else if (a[i] % 2 == 0) {
      Even[j] = a[i];
      j++;
    } else {
      Odd[k] = a[i];
      k++;
    }
  }
  for (i = 0; i < j; i++) {
    printf("Even= %d \n", Even[i]);
  }
  for (i = 0; i < k; i++) {
    printf("Odd= %d \n", Odd[i]);
  }
  return 0;
}
