#include <stdio.h>
#include "funcao.h"	// inclusão da biblioteca das funções principais
#define MAX 6	// definição do tamanho da variável

/*===========================================*/

void insere(int V[MAX], int aux, int a){
	V[aux] = a;
}

/*===========================================*/

int compara(int V[MAX], int i, int a){
	for(int j = 0; j<i; j++){
		if(V[j] == a){
			return 0;
		}
	}
	return 1;
}

/*===========================================*/

void imprime(int V[MAX], int TAM){
	printf("\t\t======================\n");
	printf("\t\t| Numeros Sorteados: |\n\t\t|  ");
	for(int i=0; i<TAM; i++){
		printf("%d ", V[i]);
	}
	printf(" |\n");
	printf("\t\t======================\n");
}

/*===========================================*/
