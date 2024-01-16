#include <stdio.h>

typedef struct {
  float x, y, z, w, o;
} vec4_t;

typedef union {
  float elements[16];
  vec4_t rows[5];
} matrix_t;

int main() {
  printf("%ld\n", sizeof(matrix_t));
  matrix_t matrix;
  for (int i = 0; i < 16; i++) {
    matrix.elements[i] = i;
  }
  printf("%f\n", matrix.rows[1].x);
  printf("%f\n", matrix.rows[0].y);
  printf("%f\n", matrix.rows[0].z);
  printf("%f\n", matrix.rows[0].w);
  printf("%f\n", matrix.rows[4].x);
  return 0;
}
