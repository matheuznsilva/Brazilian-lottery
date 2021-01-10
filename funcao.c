#include <stdio.h>
#include "funcao.h"	// inclusão da biblioteca das funções principais

/*===========================================*/

void insere(int V[], int aux, int a){
	V[aux] = a;
}

/*===========================================*/

int compara(int V[], int i, int a){
	for(int j = 0; j<i; j++){
		if(V[j] == a){
			return 0;
		}
	}
	return 1;
}

/*===========================================*/

void imprime(int V[], int TAM){
	printf("\t\t======================\n");
	printf("\t\t| Numeros Sorteados: |\n\t\t|  ");
	for(int i=0; i<TAM; i++){
		printf("%d ", V[i]);
	}
	printf(" |\n");
	printf("\t\t======================\n");
}

/*===========================================*/
