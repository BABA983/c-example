#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} node_h;

node_h getNode() {
  node_h node;
  node.x = 1;
  node.y = 2;
  printf("getNode node address is %p\n", &node);
  return node;
}

int main() {

  int n = 42;
  int *p = &n;

  printf("n is %d %d\n", n, *(&n));
  printf("n address is %p\n", &n);
  printf("*p value is an address %p\n", p);
  printf("*p actual value is %d %d\n", *p, *(p));
  printf("%p\n", &p);

  int *array = malloc(sizeof(int) * 2);

  printf("array heap memory is %p\n", array);
  printf("array stack local memory is %p\n", &array);

  free(array);

  node_h node = getNode();
  // node.x = 1;
  // node.y = 2;

  printf("node.x is %d, node.y is %d\n", node.x, node.y);
  printf("node.x is %d, node.y is %d\n", (&node)->x, (&node)->y);
  printf("ndoe address is %p\n", &node);

  return 0;
}
