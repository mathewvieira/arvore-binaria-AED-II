#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void randIntVector(int size, int *vector) {
  for (int i = 0; i < size; i++) {
    vector[i] = (rand() % 99) + 1;
  }
}

int randInt() { return (rand() % 99) + 1; }

void printIntVector(int size, int *vector) {
  for (int i = 0; i < size; i++) {
    printf("vector[%d] = %d \n", i, vector[i]);
  }
}

void generateTree(int n, int nivMax, int h, int vector) {
  nivMax = 0;
  h = nivMax + 1;

  int No, FilhoEsq, FilhoDir;

  if (n % 2 == 0) {
    for (int i = 0; i < n; i++) {
      No = i;
      FilhoEsq = i + 3;
      FilhoDir = i + 4;
    }
  }

  if (n % 2 != 0) {
    for (int i = 0; i < n; i++) {
    }
  }
}

int main() {
  int base = 2, power = 3;

  // Arvoré cheia
  int n = 1 + pow(base, power);

  int nivMax = -1;

  // Altura por padrão sempre -1
  int h = -1;

  int tree[n];

  generateTree(n, nivMax, h, tree);

  printIntVector(n, tree);

  // printIntVector(n, tree);

  printf("\n");

  // Inicializa a árvore, então a árvore
  // passa a ter nível 0 e altura 1 (nivMax + 1)

  // tree[0] = 99;
  // nivMax = 0;
  // h = nivMax + 1;

  return 0;
}