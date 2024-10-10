// Para a entrada <8 5 2 10 3> faça o teste de mesa para os três métodos de ordenação estudados: Bubble Sort, Selection Sort e Insertion Sort
// A principal difeça entre os três métodos é que o Bubble Sort é um método de ordenação que é muito rápido, mas não é muito eficiente. Já o Selection Sort é um método de ordenação que é muito eficiente, mas não é muito rápido. Já o Insertion Sort é um método de ordenação que é muito eficiente e rápido.

#include <stdio.h>

int main(){
  int vetor[] = {8, 5, 2, 10, 3};
  int n = sizeof(vetor)/sizeof(vetor[0]);
  int i, j, aux; // Variaveis auxiliares, i é o indice do vetor, j é o indice do vetor auxiliar, aux é a variavel que auxilia na troca de valores
  int troca =1; // Variavel para contar as trocas

  printf("Vetor original: ");
  for(i = 0; i < n; i++){
    printf("%d ", vetor[i]);
  }
  printf("\n");

  // Bubble Sort
  for(i = 0; i < n-1; i++){ // Percorre o vetor
    for(j = 0; j < n-i-1; j++){ // Percorre o vetor auxiliar
      if(vetor[j] > vetor[j+1]){ // Verifica se o valor do vetor é maior que o valor do vetor auxiliar
        aux = vetor[j]; // Se for, aux recebe o valor do vetor
        vetor[j] = vetor[j+1]; // O valor do vetor recebe o valor do vetor auxiliar
        vetor[j+1] = aux; // O valor do vetor auxiliar recebe o valor do vetor

        printf("Troca %d: ", troca);
        for(int k = 0; k < n; k++){
          printf("%d ", vetor[k]); // Imprime o vetor apos a troca
        }
        troca = troca + 1;
        printf("\n");
      }
    }
  }
  printf("Vetor ordenado: ");
  for(i = 0; i < n; i++){
    printf(" %d", vetor[i]);
  }
  printf("\n");

  return 0;
}