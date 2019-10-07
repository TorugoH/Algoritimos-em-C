#include<stdio.h>
#include<stdlib.h>
#define N 10

typedef struct Nodo {
 int dado;
 struct Nodo *proximo;//criando uma variavel tipo struct dentro da struct
} NODO;


void insere(int i, NODO **lista);
void imprime(NODO *lista);
/*NODO *remover_element(int item,NODO* lista_de_elemento){
    NODO*ant=lista_de_elemento;
    NODO *atual=lista_de_elemento;
    while(atual!= NULL && atual->dado!= item) {
         ant=atual;
         atual=atual->proximo;
       }
    if(atual==NULL){ 
        return 0;
        }
    if(atual == lista_de_elemento) {
        lista_de_elemento=atual->proximo;
        free(atual);
        }    
    else{
        ant->proximo=atual->proximo;
        free(atual);
     }
     return lista_de_elemento;   
    }
*/

void libera(NODO **lista);
int main () {
    NODO *lista;
    int item=0,opc=0;
    lista = NULL;
    int i;
    for (i = 1; i <= N; i++){
      insere(i, &lista);
      printf ("insere %d em %p \n",i,lista);
  }
   imprime(lista);
   /*  printf(" Deseja remover algum elemento ? \n Digite 1 para continuar e 0 para sair.\n\n");
    scanf("%d",&opc);
   while(opc!=0){
     printf("qual vc quer remover?\n");
      scanf("%d",&item);
      lista=remover_element(item,lista);
      
      imprime(lista);
    printf("Deseja remover mais algum elemento ?\n Digite 1 para continuar e 0 para sair.\n\n ");
    scanf("%d",&opc);

  }*/
    libera(&lista);
}

void insere(int i, NODO **lista){
    NODO *pi;
    pi = (NODO *) malloc (sizeof(NODO));
    if (pi) {
     pi->dado = i;//adicona o valor dentro da struct
     pi->proximo = *lista;//aponta oara a lista passada na posição onde ela esta vazia
     *lista = pi;//adiciona a struct criada
  }
  else printf("Erro de alocação de memória\n");
}

void imprime (NODO * lista){
    NODO *tmp;
    tmp = lista;
    printf("impressao da lista\n");
    while (tmp != NULL) {
      printf("%d %p", tmp->dado,tmp);
      tmp = tmp->proximo;
   }
  printf("\nFim da lista\n");
}

void libera(NODO **lista){
  NODO *tmp;
  tmp = *lista;
  while (tmp != NULL) {
    *lista = (*lista)->proximo;
    free(tmp);
    tmp = *lista;
  }

}
