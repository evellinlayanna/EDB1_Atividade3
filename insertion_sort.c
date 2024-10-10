// Para a entrada <8 5 2 10 3> faça o teste de mesa para os três métodos de ordenação estudados: Bubble Sort, Selection Sort e Insertion Sort
// A principal difeça entre os três métodos é que o Bubble Sort é um método de ordenação que é muito rápido, mas não é muito eficiente. Já o Selection Sort é um método de ordenação que é muito eficiente, mas não é muito rápido. Já o Insertion Sort é um método de ordenação que é muito eficiente e rápido.

#include <stdio.h>

int main(){
  int vetor[] = {8, 5, 2, 10, 3};
  int n = sizeof(vetor)/sizeof(vetor[0]);
  int i, j, aux, temp;

  printf("Vetor original: ");
  for(i = 0; i < n; i++){
    printf("%d ", vetor[i]);
  }
  printf("\n");

  // Insertion Sort
  for(i = 1; i < n; i++){ // Percorre o vetor
    aux = vetor[i]; // Aux recebe o valor do vetor
    j = i - 1; // J recebe o valor de i - 1

    while(j >= 0 && vetor[j] > aux){ // Enquanto j for maior ou igual a 0 e o valor do vetor for maior que o valor do vetor auxiliar
      vetor[j+1] = vetor[j]; // O valor do vetor recebe o valor do vetor auxiliar
      j = j - 1; // J recebe o valor de j - 1
    }

    vetor[j+1] = aux; // O valor do vetor recebe o valor do vetor auxiliar
  }

    printf("Troca %d: ", i);
    for(int k = 0; k < n; k++){ // Imprime o vetor apos a troca
      printf("%d ", vetor[k]);
    }
    printf("\n");
  }

  printf("Vetor ordenado: ");
  for(i = 0; i < n; i++){
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}
