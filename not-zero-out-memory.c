#include <stdio.h>

int main() {
  {
    char str1[6];
    str1[0] = 'h';
    str1[1] = 'e';
    str1[2] = 'l';
    str1[3] = 'l';
    str1[4] = 'o';
    str1[5] = '!';

    printf("%s\n", str1);
  }

  char str2[2];
  str2[0] = 'h';
  str2[1] = 'i';

  printf("%s\n", str2);

  return 0;
}
