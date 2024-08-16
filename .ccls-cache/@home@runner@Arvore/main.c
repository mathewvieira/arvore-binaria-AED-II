#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void randIntVector(int size, int *vector) {
  for (int i = 0; i < size; i++) {
    vector[i] = rand() % 100;
  }
}

void printIntVector(int size, int *vector) {
  for (int i = 0; i < size; i++) {
    printf("vector[%d] = %d \n", i, vector[i]);
  }
}

int main() {
  printf("Hello World\n");

  int base = 2, power = 3;

  int n = pow(base, power);

  int nivMax = -1;

  // Altura por padrão sempre -1
  int h = -1;

  int tree[n];

  randIntVector(n, tree);

  printIntVector(n, tree);

  printf("\n");

  // Inicializa a árvore, então a árvore
  // passa a ter nível 0 e altura 1 (nivMax + 1)

  // tree[0] = 99;
  // nivMax = 0;
  // h = nivMax + 1;

  return 0;
}