/*
+----------------------------------------------------+
|                                                    |
| ----------------- DRAW ALGORITHM ----------------- |
|                                                    |
| AUTHOR: Matheus N. Silva                           |
| OS.: Ubuntu 20.04 LTS                              |
| IDE: VsCode 1.75.1                                 |
|                                                    |
+----------------------------------------------------+
*/

#include <stdio.h>
#include <stdlib.h>	
#include "linkedlist.h"
#include "funcao.h"	// inclusão da biblioteca das funções principais


int main(){
	
	int a, b;	// declaração de variáveis

	List *V = create_list();
	do{
		system("clear");
		printf("+------------ SORTEIO LOTERIA ------------+\n"
			"| 					  |\n"
			"| 1 - SENA				  |\n"
			"| 2 - QUINA 				  |\n"
			"| 3 - LOTOFACIL		 		  |\n"
			"| 4 - LOTOMANIA				  |\n"
			"| 					  |\n"
			"| 0 - SAIR				  |\n"
			"+-----------------------------------------+");
		printf("\nDIGITE SUA ESCOLHA: ");
		scanf("%d", &a);
		switch (a){
			case 1:
				mega(V);
				system("clear");
				printf("+----------------- SENA ------------------+\n\n");
				print_list(V);
				printf("\n\n+-----------------------------------------+\n");
				printf("DESEJA VOLTAR AO MENU PRINCIPAL? (0 - NÃO | 1 - SIM): ");
				scanf("%d", &b);
				if(b == 1){
					clean_list(V);
				}
				break;

			case 2:
				quina(V);
				system("clear");
				printf("+----------------- QUINA -----------------+\n\n");
				print_list(V);
				printf("\n\n+-----------------------------------------+\n");
				printf("DESEJA VOLTAR AO MENU PRINCIPAL? (0 - NÃO | 1 - SIM): ");
				scanf("%d", &b);
				break;
			
			case 3:
				lotofacil(V);
				system("clear");
				printf("+--------------- LOTOFACIL ---------------+\n\n");
				print_list(V);
				printf("\n\n+-----------------------------------------+\n");
				printf("DESEJA VOLTAR AO MENU PRINCIPAL? (0 - NÃO | 1 - SIM): ");
				scanf("%d", &b);
				break;
			
			case 4:
				lotomania(V);
				system("clear");
				printf("+--------------- LOTOMANIA ---------------+\n\n");
				print_list(V);
				printf("\n\n+-----------------------------------------+\n");
				printf("DESEJA VOLTAR AO MENU PRINCIPAL? (0 - NÃO | 1 - SIM): ");
				scanf("%d", &b);
				break;
			
			case 0:
				b=0;
				break;

			default:
				break;
		}
	} while(b != 0);
	
	system("clear");
	free_list(V);

	return 0;
}