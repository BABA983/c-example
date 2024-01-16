#include <stdio.h>

int main() {
  int pixel = 0xFFAACC11;
  // unsigned char only store 1byte = 8bit, rest of the value lost
  unsigned char r = (pixel >> 24);
  unsigned char g = (pixel >> 16);
  unsigned char b = (pixel >> 8);
  unsigned char a = (pixel >> 0);

  printf("sizeof int: %ld\n", sizeof(int));
  printf("sizeof char: %ld\n", sizeof(char));
  printf("sizeof unsigned char: %ld\n", sizeof(unsigned char));
  printf("%d\n", r);
  printf("%d\n", g);
  printf("%d\n", b);
  printf("%d\n", a);
  return 0;
}
