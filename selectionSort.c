#include <stdio.h>
#include <stdlib.h>
#include "selectionSort.h"

void selectionSort(int *V, int N){
  
    int i, j, menor, troca;     // declaração de variáveis locais
    for(i = 0; i < N-1; i++){       // loop tendo como ponto de parada i ser menor que N-1, onde N é o numero de elementos do vetor
        menor = i;      // o valor de i é atribuido à variável menor
        for(j = i+1; j < N; j++){       // loop tendo como ponto de parada j ser menor que N, onde N é o numero de elementos do vetor
            if(V[j] < V[menor])     // comparação de elementos presentes no vetor
                menor = j;      // se o elemento na posição j for menor que o elemento na posição menor, menor recebe o valor de j
        }
        if(i != menor){     // comparação, se o valor de i for diferente de menor
            troca = V[i];       // a variável troca recebe o elemento da posição i do vetor
            V[i] = V[menor];        // o vetor na posição i recebe o elemento que está na posição menor 
            V[menor] = troca;       // o p vetor na posição menor recebe o elemento salvo na variável troca
        }
    }
}