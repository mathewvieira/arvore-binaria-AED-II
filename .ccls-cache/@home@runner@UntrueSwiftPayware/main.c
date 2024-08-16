#include <stdio.h>

int main() {
  printf("Hello World\n");

  int nivMax = -1;
  // Altura por padrão sempre -1
  int h = -1;

  int tree[10];

  // Inicializa a árvore, então a árvore
  // passa a ter nível 0 e altura 1 (nivMax + 1)
  tree[0] = 99;
  nivMax = 0;
  h = nivMax + 1;

  return 0;
}