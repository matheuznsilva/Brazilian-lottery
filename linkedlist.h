
#define MAX 100 

// STRUCT ONDE SERÃO ARMAZENADOS OS DADOS
struct data{		
	int num;				
};

typedef struct element* List; // padronização do nome do ponteiro tipo lista

List* create_list();	// criação da lista
int size_list(List* LI);	
void free_list(List* LI);		// função de destruição da lista
void clean_list(List* LI);
int search_list_num(List* LI, int num);		// função de busca do elemento pela matricula
int insert_end_list(List* LI, int num);		//  inserção ao final da lista
int insert_sorted_list(List* LI, int num);		// função de inserção de forma ordenada
void print_list(List* LI);		// função que imprime a lista
