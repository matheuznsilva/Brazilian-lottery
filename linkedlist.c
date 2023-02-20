#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h" //inclui os prototipos 

//Definição do tipo lista

struct element{
	struct data DATA;		// campo do tipo aluno que recebe o dado a ser armazenado
	struct element *next;		// ponteiro do tipo elemento que indica o proximo elemento 
};

typedef struct element Elem;		// definição de um nome padrão para a struct elemento
// ==========================================================

// FUNÇÃO DE CRIAÇÃO DA LISTA

List* create_list(){
	List *LI = (List*) malloc(sizeof(List));		// alocação de memoria para a Lista
	
	if(LI != NULL){		// confere se a lista foi criada
		*LI = NULL;	// caso criada faz o ponteiro apontar para null
		printf("\nLISTA CRIADA\n"); // confirmação q a lista foi criada
	}
	return LI;		// retorna o ponteiro li;
}
// ==========================================================

// FUNAÇÃO QUE RETORNA O TAMANHO DA LISTA

int size_list(List* LI){	
	if(LI == NULL){		// confere se a lista existe
		return 0;		// caso não exista retorna -1 informando o erro
	}
	int count = 0;		// declaração de variável local(contador) para armazenar a quantidade de elementos presentes na lista
	Elem* NO = *LI;		// declaração e atribuição do ponteiro auxiliar para percorrer a lista
	while(NO != NULL){		// loop para percorrer a lista com condição de para ser o final da lista
		count++;		// incremento do contador
		NO = NO->next;		// ponteiro auxiliar recebe a proxima posição da lista
	}
	return count;		// retorna o contador
}
// ==========================================================

// FUNÇÃO QUE DESTROI A LISTA

void free_list(List* LI){
	if(LI!= NULL){		// verifica se a lista existe
		Elem* NO;		// declaração de um ponteiro auxiliar
		while((*LI)!=NULL){		// loop para percorrer a lista com condição de para ser o final da lista
			NO = *LI;		// ponteiro auxiliar recebe a posição atual do ponteiro li
			*LI = (*LI)->next;		// li recebe a posição do proximo elemento 
			free(NO);		// apaga o nó(elemento) da lista
		}
		free(LI);	// libera o ponteiro	
	}	
}

void clean_list(List* LI){
	if(LI!= NULL){		// verifica se a lista existe
		Elem* NO;		// declaração de um ponteiro auxiliar
		while((*LI)!=NULL){		// loop para percorrer a lista com condição de para ser o final da lista
			NO = *LI;		// ponteiro auxiliar recebe a posição atual do ponteiro li
			*LI = (*LI)->next;		// li recebe a posição do proximo elemento 
			free(NO);		// apaga o nó(elemento) da lista
		}
	}	
}
// ==========================================================

// FUNÇÕES DE INSERÇÃO

int insert_sorted_list(List* LI, int num){		//  inserção ordenada
	if(LI == NULL){		// confere se a lista existe
		return 0;		// caso não exista não ocorre a inserção
	}
	Elem* NO;		// delcaração de um ponteiro auxiliar
	NO = (Elem*) malloc(sizeof(Elem));		// alocação de memoria para um novo elemento
	if(NO == NULL){		// confere se ocorreu a alocação
		return 0;		// caso não tenha ocorrido retorna 0
	}
	NO->DATA.num = num;		// o campo dados do novo elemento recebe os dados digitados pelo usuário
	if((*LI) == NULL){		// confere se é uma lista vazia
		NO->next == NULL;	// caso seja o ponteiro prox do novo elemento passa a apontar para null
		*LI = NO;		// atribui o novo elemento ao inicio da lista
		return 1;
	} else{		// se não for uma lista vazia, iremos percorre a lista até encontrar um numero de matricula maior que o cadastrado pelo usuário
		Elem *prev, *current = *LI;		// declaração de ponteiros auxiliares e atribuição do ponteiro atual recebendo a primeira posição da lista
		while(current != NULL && current->DATA.num < num){		// loop para percorrer a lista tendo como ponto de parada o final da lista e a matricula do elemento presente na lista ser maior que a do elemento a ser inserido 
			prev = current;		// atribui ao ponteiro ant a posição do elemento apontado por atual
			current = current->next;		// atual recebe a posição do proximo elemento da lista
		}
		if(current == *LI){		// confere se a posição apontada por atual foi a primeira posição da lista 
			NO->next = (*LI);		// caso seja o ponteiro prox do novo elemento passa a apontar para o antigo primeiro elemento da lista
			*LI = NO;		// li passa agora a apontar para o novo elemento
		} else{		// caso não seja o ponteiro executa os comando a baixo
			NO->next = current;		// o ponteiro prox do novo elemento passa a apontar para a posição do atual(elemento que o ponteiro atual aponta)
			prev->next = NO;		// o ponteiro prox do elemento apontado por ant passa a apontar para a posição do novo elemento
		}
		return 1;
	}
}
// ==========================================================

// FUNÇÕES DE BUSCA

int search_list_num(List* LI, int num){		// busca de acordo com a matricula
	if(LI == NULL){		// confere se a lista existe
		return 0;
	}
	Elem *NO = *LI;		// declaração e atribuição do ponteiro no apontando para o primeiro elemento da lista
	while(NO != NULL && NO->DATA.num != num){		// loop para percorrer a lista tendo como condição de parada o fim da lista ou ter encontrado a matricula procurada
		NO = NO->next;		// ponteiro no recebe a posição do proximo elemento da lista		
	}
	if(NO == NULL){		// caso a matricula desejada não seja encontrada
		return 0;
	}
	return 1;
}
// ==========================================================

// FUNÇÃO DE IMPRESSÃO DA LISTA

void print_list(List* LI){
	if(LI == NULL){		// confere se a lista existe
		printf("\nLISTA NÃO EXISTENTE\n");		// caso não exista informa que a operação não pode ser processada
	}
	Elem *NO = *LI;		// declaração e atribuição do ponteiro no apontando para o primeiro elemento da lista
	printf("NUMEROS SORTEADOS:\n");		// imprime a matricula do aluno
	while(NO != NULL){		// loop para deslocamento na lista 
		printf("%d ", NO->DATA.num);		// imprime a matricula do aluno
		NO = NO->next;		// ponteiro no recebe a posição do proximo elemento da lista
	}
	printf("\n");		// quebra de linha
}