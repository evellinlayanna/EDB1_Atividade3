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

  // Selection Sort
  for(i = 0; i < n-1; i++){ // Percorre o vetor
    aux = i; // Aux recebe o valor de i
    for(j = i+1; j < n; j++){ // Percorre o vetor auxiliar
      if(vetor[j] < vetor[aux]){ // Verifica se o valor do vetor auxiliar é menor que o valor do vetor
        aux = j; // Se for, aux recebe o valor de j
      }
    }
      }
    }
    
    if(aux != i){ // Verifica se o valor de aux é diferente de i
      temp = vetor[i]; // Se for, temp recebe o valor do vetor
      vetor[i] = vetor[aux]; // O valor do vetor recebe o valor do vetor auxiliar
      vetor[aux] = temp; // O valor do vetor auxiliar recebe o valor do vetor
    }
  }

      printf("Troca %d: ", i+1);
      for(int k = 0; k < n; k++){ // Imprime o vetor apos a troca
        printf("%d ", vetor[k]);
      }
      printf("\n");
    }
  }
  printf("Vetor ordenado: ");
  for(i = 0; i < n; i++){
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}