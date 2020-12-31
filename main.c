
/************************************************
*                                               *
* Autor: Matheus Nascimento e Silva             *
* Ambiente..: Ubuntu 20.04                      *
* Compilador: GCC 9.3.0                         *
* Objetivo..: Programa que sorteia numeros da   *
* Mega Sena.                                    *
*                                               *
* ------- TODOS OS DIREITOS RESERVADOS -------- *
*                                               *
*************************************************/

#include <stdio.h>
#include <stdlib.h>	
#include <time.h>	// inclusão da biblioteca time utilizada pela função srand
#include "funcao.h"	// inclusão da biblioteca das funções principais
#include "selectionSort.h"	// inclusão da biblioteca da função de ordenação
#define TAM 6	// definição do tamanho da variável

int main(){
	
	srand(time(NULL));

	int num, i, aux, *V;	// declaração de variáveis

	V = (int *) malloc(TAM*sizeof(int));	// alocação de memoria para o vetor

	for(i=0; i<TAM;){		//
		num = rand()%61;	// sorteio de numeros 
		if(num != 0){		// compara se o numero sorteado é diferente de zero
			if(i == 0){		// compara se é a primeira posição do vertor
				insere(V, i, num);	// caso seja chama a função de insereção
				i++;	// incrementa o contador
			} else{		// se não seja a primeira posição do vetor 
				aux = compara(V, i, num);	// função compara é chamada para verificar se o numero sorteado ja está presente no vetor
				if(aux == 1){	// se aux for igual a 1 significa que o numero não esta presente no vetor			
					insere(V, i, num);	// chamada da função de inserção 	
					i++;	// incrementa o contador
				}
			}
		}
	}

	selectionSort(V, TAM);	// chamada da função de ordenação

	imprime(V, TAM);	// chamada da função que imprime o vertor na tela

	return 0;
}