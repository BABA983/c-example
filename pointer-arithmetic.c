#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};

  printf("sizeof int is: %lu\n", sizeof(int));
  for (int i = 0; i < 6; i++) {
    printf("%d\n", *(arr + i));
    printf("%p\n", (arr + i));
  }

  return 0;
}
