#include <stdio.h>
#include <stdlib.h>
#include <time.h>	// inclusão da biblioteca time utilizada pela função srand
#include "linkedlist.h"
#include "funcao.h"	// inclusão da biblioteca das funções principais

void mega(List* LI){

	srand(time(NULL));

	int a, b, i = 0, num, aux;
	do{
		system("clear");
		printf("+--------------- MEGA SENA ---------------+\n"
			   "| 					  |\n"
			   "| Escolha quantos números deseja sortear  |\n" 
			   "| (de 6 a 15) 	                          |\n"
			   "| (Digite 0 para voltar ao menu anterior) |\n"
			   "| 					  |\n"
			   "+-----------------------------------------+");
		printf("\nDIGITE SUA ESCOLHA: ");
		scanf("%d", &a);

		if(a > 5 && a < 16){
			while (i < a){		//
				num = rand()%61;	// sorteio de numeros 
				if(num != 0){		// compara se o numero sorteado é diferente de zero
					if(i == 0){		// compara se é a primeira posição do vertor
						insert_sorted_list(LI, num);	// caso seja chama a função de insereção
						i++;	// incrementa o contador
					} else{		// se não seja a primeira posição do vetor 
						aux = search_list_num(LI, num);	// função compara é chamada para verificar se o numero sorteado ja está presente no vetor
						if(aux == 0){	// se aux for igual a 1 significa que o numero não esta presente no vetor			
							insert_sorted_list(LI, num);	// caso seja chama a função de insereção
							i++;	// incrementa o contador
						}
					}
				}
			}
			b = 0;
		} else if (a == 0){
			b = 0;
		}
	} while(b != 0);
}

void quina(List* LI){

	srand(time(NULL));

	int a, i = 0, num, aux;
	do{
		system("clear");
		printf("+----------------- QUINA -----------------+\n"
			   "| 					  |\n"
			   "| Escolha quantos números deseja sortear  |\n" 
			   "| (de 5 a 15) 	                          |\n"
			   "| (Digite 0 para voltar ao menu anterior) |\n"
			   "| 					  |\n"
			   "+-----------------------------------------+");
		printf("\nDIGITE SUA ESCOLHA: ");
		scanf("%d", &a);

		if(a > 4 && a < 16){
			while (i<a){		//
				num = rand()%81;	// sorteio de numeros 
				if(num != 0){		// compara se o numero sorteado é diferente de zero
					if(i == 0){		// compara se é a primeira posição do vertor
						insert_sorted_list(LI, num);	// caso seja chama a função de insereção
						i++;	// incrementa o contador
					} else{		// se não seja a primeira posição do vetor 
						aux = search_list_num(LI, num);	// função compara é chamada para verificar se o numero sorteado ja está presente no vetor
						if(aux == 0){	// se aux for igual a 1 significa que o numero não esta presente no vetor			
							insert_sorted_list(LI, num);	// caso seja chama a função de insereção
							i++;	// incrementa o contador
						}
					}
				}
			}
			a = 0;
		}
	}while (a != 0);
}

void lotofacil(List* LI){
	
	srand(time(NULL));
	
	int a, i = 0, num, aux;
	do{
		system("clear");
		printf("+--------------- LOTOFACIL ---------------+\n"
			   "| 					  |\n"
			   "| Escolha quantos números deseja sortear  |\n" 
			   "| (de 15 a 20) 	                          |\n"
			   "| (Digite 0 para voltar ao menu anterior) |\n"
			   "| 					  |\n"
			   "+-----------------------------------------+");
		printf("\nDIGITE SUA ESCOLHA: ");
		scanf("%d", &a);

		if(a > 14 && a < 21){
			while (i<a){		//
				num = rand()%26;	// sorteio de numeros 
				if(num != 0){		// compara se o numero sorteado é diferente de zero
					if(i == 0){		// compara se é a primeira posição do vertor
						insert_sorted_list(LI, num);	// caso seja chama a função de insereção
						i++;	// incrementa o contador
					} else{		// se não seja a primeira posição do vetor 
						aux = search_list_num(LI, num);	// função compara é chamada para verificar se o numero sorteado ja está presente no vetor
						if(aux == 0){	// se aux for igual a 1 significa que o numero não esta presente no vetor			
							insert_sorted_list(LI, num);	// caso seja chama a função de insereção
							i++;	// incrementa o contador
						}
					}
				}
			}
			a = 0;
		}
	}while (a != 0);
}

void lotomania(List* LI){

	srand(time(NULL));

	int i = 0, num, aux;
	while (i < 50){		//
		num = rand()%101;	// sorteio de numeros 
		if(num != 0){		// compara se o numero sorteado é diferente de zero
			if(i == 0){		// compara se é a primeira posição do vertor
				insert_sorted_list(LI, num);	// caso seja chama a função de insereção
				i++;	// incrementa o contador
			} else{		// se não seja a primeira posição do vetor 
				aux = search_list_num(LI, num);	// função compara é chamada para verificar se o numero sorteado ja está presente no vetor
				if(aux == 0){	// se aux for igual a 1 significa que o numero não esta presente no vetor			
					insert_sorted_list(LI, num);	// caso seja chama a função de insereção
					i++;	// incrementa o contador
				}
			}
		}
	}
}