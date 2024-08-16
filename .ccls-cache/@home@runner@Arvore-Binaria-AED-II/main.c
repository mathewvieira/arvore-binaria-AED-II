#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int randInt() { return (rand() % 99) + 1; }

void randIntVector(int tamanho, int vetor[]) {
  for (int i = 0; i < tamanho; i++) {
    vetor[i] = randInt();
  }
}

void printIntVector(int tamanho, int vetor[]) {
  for (int i = 0; i < tamanho; i++) {
    printf("vetor[%d] = %d \n", i, vetor[i]);
  }
}

void printLineIntVector(int tamanho, int vetor[], bool somentePosicoes) {
  printf("[");

  for (int i = 0; i < tamanho; i++) {
    printf("%0.2d", somentePosicoes ? i : vetor[i]);

    if (i + 1 < tamanho) {
      printf("|");
    } else {
      printf("]");
    }
  }
}

void printPreOrder(int tamanho, int vetor[]) {

}

void insertPreOrder(int tamanho, int vetor[]) {

}

void printTree(int tamanho, int vetor[]) {
  int posEsquerdo, posDireito;

  for (int i = 0; i < tamanho; i++) {
    posEsquerdo = (i * 2) + 1;
    posDireito = (i * 2) + 2;

    if (posDireito > tamanho) {
      break;
    }

    printf("Nó Pai: %0.2d  |  ", vetor[i]);
    printf("Filho Esq.: %0.2d  |  ", vetor[posEsquerdo]);
    printf("Filho Dir.: %0.2d\n", vetor[posDireito]);
  }
}

void printGraphicTree(int tamanho, int vetor[], bool exibirZeros,
                      bool somentePosicoes) {
  int qtdProxLinha = 0, numeroEspacos = tamanho;

  for (int j = 1; j <= numeroEspacos; j++) {
    printf(" ");
  }

  for (int i = 0; i < tamanho; i++) {
    if ((vetor[i] == 0) && (!exibirZeros) && (!somentePosicoes)) {
      printf("   ");
    } else {
      printf(" %0.2d ", somentePosicoes ? i : vetor[i]);
    }

    if (i == qtdProxLinha) {
      qtdProxLinha = i * 2 + 2;
      printf("\n\n");

      numeroEspacos = numeroEspacos - (qtdProxLinha * 0.55);
      for (int j = 1; j <= numeroEspacos; j++) {
        printf(" ");
      }
    }
  }
}

void calculateNivMaxAndHeight(int tamanho, int *nivMax, int *altura) {
  int qtdNosRestantes, qtdNosEsperadosNaLinha;

  qtdNosRestantes = tamanho;

  printf("------|   Nós totais: %d   |------\n\n", qtdNosRestantes);
  printf("( Rest. ) - ( Esper.) = ( Rest. )\n");

  for (int i = 0; i < qtdNosRestantes; i++) {
    qtdNosEsperadosNaLinha = pow(2, i);

    if (qtdNosEsperadosNaLinha > qtdNosRestantes) {
      break;
    }

    printf("( %5d )", qtdNosRestantes);

    *nivMax = i;
    *altura = *nivMax + 1; // h(T) = NívelMax + 1

    qtdNosRestantes = qtdNosRestantes - qtdNosEsperadosNaLinha;

    printf(" - ( %5d ) = ( %5d )", qtdNosEsperadosNaLinha, qtdNosRestantes);

    printf("  [NivMax: %d | Altura: %d]\n", *nivMax, *altura);
  }

  printf("\n");

  if (qtdNosRestantes > 0) {
    printf("----|   Nós restantes = %d   |----\n", qtdNosRestantes);
    *nivMax = *nivMax + 1;
    *altura = *nivMax + 1;
  }

  printf("----| NivMax: %d | Altura: %d |----\n", *nivMax, *altura);
}

void generateTree(int qtdNos, int nivMax, int altura, int vetor[]) {

  if (qtdNos % 2 == 0) {
    for (int i = 0; i < qtdNos; i++) {
    }
  }

  if (qtdNos % 2 != 0) {
    for (int i = 0; i < qtdNos; i++) {
    }
  }
}

int main() {

  const bool EXIBIR_ZEROS = true, SOMENTE_POSICOES = true;

  // QUANTIDADE DE NÓS
  //
  // Ao invés de definir 2^3 = 8 - 1 = 7,
  // também pode-se passar o tamanho do vetor;
  //
  // Exemplo para arvoré cheia:
  //
  const int base = 2, exponente = 4;

  int qtdNos = pow(base, exponente) - 1;
  //

  if (qtdNos <= 0) {
    printf("Árvore vazia");
    return 0;
  }

  // Quando se tem uma árvore vazia, por padrão o NÍVEL MÁXIMO é -1
  // pois se o nível máximo = 0, então a árvore tem um nó raiz
  int nivMax = -1;

  //  Quando se tem uma árvore vazia, por padrão a ALTURA é -1
  int altura = -1;

  int arvore[qtdNos];

  // .~--------------------------------------~.

  // Preenche-se a árvore com valores aleatórios e então imprime
  randIntVector(qtdNos, arvore);
  // printIntVector(qtdNos, arvore);
  printLineIntVector(qtdNos, arvore, false);

  printf("\n\n");

  printLineIntVector(qtdNos, arvore, true);

  printf("\n\n");

  printTree(qtdNos, arvore);

  printf("\n\n");

  printGraphicTree(qtdNos, arvore, EXIBIR_ZEROS, !SOMENTE_POSICOES);

  // printf("\n");

  printGraphicTree(qtdNos, arvore, EXIBIR_ZEROS, SOMENTE_POSICOES);

  // printf("\n\n");
  
  // printPreOrder(qtdNos, arvore);
  
  // calculateNivMaxAndHeight(qtdNos, &nivMax, &altura);

  // Se a QUANTIDADES DE NÓS > 0, inicializa-se por padrão a árvore com
  // NÍVEL MÁXIMO = 0 e ALTURA = 1 (altura = nivMax + 1)
  // generateTree(qtdNos, nivMax, altura, arvore);

  // .~--------------------------------------~.

  return 0;
}