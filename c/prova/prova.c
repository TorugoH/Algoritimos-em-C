// Bruna Carvalho Peixoto Sanches - 201811130054
// Vitor HUgo Silva Ribeiro - 20181113321
// Eduardo Tapada - 201811130380
//Arthur Santana - 20192020378
//INF1A 2019
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct lista {
    char dado;
    struct lista*proximo;
} LISTA;
typedef struct impar{
    char dado;
    struct impar*proximo;
} IMPAR;
// Cabeçalho das funçoes
void libera(LISTA **lista);
void imprime(LISTA *lista);//imprime so o pares
void imprimeLetraImpa(IMPAR *imp);//imprime lista de impares
void ordena(LISTA *lista);//ordena par
void ordenaImpar(IMPAR *imp);//ordena impar
LISTA* InserirLetrapar(LISTA*lista, char item);//insere na ltsta so de pares
IMPAR* InseriLetraimpar(IMPAR *lista, char item);//inser na lista que e so dos impares
LISTA* remover(LISTA *lista,char item);
IMPAR* removeimpar(IMPAR *imp, char item);
// Função principal
int main () {
    LISTA *lista;
    IMPAR *impar;
    char numero,removido;
    int i;
    long int valor;
    char op[1]; 
    lista = NULL;
    impar=NULL;
    printf("Inseira 8 caracteres !\n");
    for (i=0;i<8;i++){
        scanf(" %c",&numero);
        if(numero%2==0){
            lista=InserirLetrapar(lista,numero);
        }
        else if(numero%2!=0){
           impar=InseriLetraimpar(impar,numero);
        }
     }
    ordena(lista);
    ordenaImpar(impar);
    imprime(lista);
    imprimeLetraImpa(impar);
    printf("\n");
    //MENU 
    while(op[0]!='s'){
    printf("Se desejar remover um elemento digite 'r', se desejar inserir digite 'i', se desejar sair digite 's': ");
    scanf(" %s", op);
    if(op[0]=='r'){
        printf("Digite o elemento remover: ");
        scanf(" %c",&removido);
        if(removido%2==0){
            lista=remover(lista,removido);
            imprime(lista);
            imprimeLetraImpa(impar);
         }
        else if(removido%2!=0){
           impar=removeimpar(impar,removido);
           imprime(lista);
           imprimeLetraImpa(impar);
         }
    }
    else if(op[0]=='i'){
        printf("Digite o elemento para inserir: ");
        scanf("%s",&numero);
        if(numero%2==0){
            lista=InserirLetrapar(lista,numero);
             ordena(lista);
            imprime(lista);
            imprimeLetraImpa(impar);
         }
        else if(numero%2!=0){
           impar=InseriLetraimpar(impar,numero);
           imprimeLetraImpa(impar);
            imprime(lista);
            imprimeLetraImpa(impar);
         }
      }
  }
}   
void imprime (LISTA * lista){
    struct lista *imprimeLista;
    imprimeLista = lista;
    printf("Lista de caracteres pares \n");
    while (imprimeLista != NULL) {
        printf("Valor: %c  \n ", imprimeLista->dado);
        imprimeLista = imprimeLista->proximo;
    }
}
void libera(LISTA **lista){
    LISTA *LiberaMem;
    LiberaMem = *lista;
    while (LiberaMem != NULL) {
        *lista = (*lista)->proximo;
        free(LiberaMem);
        LiberaMem = *lista;
    }
}
LISTA *remover(LISTA* lista,char item){
  LISTA*ant=lista;
  LISTA *atual=lista;
  while(atual!= NULL && atual->dado!= item) {
         ant=atual;
         atual=atual->proximo;
       }
  if(atual==NULL){ 
        return 0;
        }
  if(atual == lista) {
        lista=atual->proximo;
        free(atual);
        }    
  else{
        ant->proximo=atual->proximo;
        free(atual);
     }
     //return lista;   
    }
LISTA* InserirLetrapar(LISTA *lista, char item){
     LISTA *insereLista;
     insereLista = (struct lista*) malloc (sizeof(struct lista));
     if (insereLista) {
            insereLista->dado = item;
            insereLista->proximo = lista;
            lista = insereLista;
        }
        else printf("Erro de alocação de memória\n");
        return lista;
    }
IMPAR* InseriLetraimpar(IMPAR *imp, char item){
     IMPAR *iseririmpa;
     iseririmpa = (struct impar*) malloc (sizeof(struct impar));
     if (iseririmpa) {
            iseririmpa->dado = item;
            iseririmpa->proximo = imp;
            imp = iseririmpa;
        }
     else printf("Erro de alocação de memória\n");
        return imp;
    }   
void imprimeLetraImpa(IMPAR *imp){
    struct impar *imprimeLista;
    imprimeLista = imp;
    printf("Lista de caracteres impares: \n");
    while (imprimeLista != NULL) {
        printf("Valor: %c  \n ", imprimeLista->dado);
        imprimeLista = imprimeLista->proximo;
    }
}
IMPAR* removeimpar(IMPAR *imp, char item){
    IMPAR*ant=imp;
    IMPAR *atual=imp;
    while(atual!= NULL && atual->dado!= item) {
         ant=atual;
         atual=atual->proximo;
       }
    if(atual==NULL){ 
        return 0;
        }
    if(atual == imp) {
         imp=atual->proximo;
         free(atual);
    }    
    else{
        ant->proximo=atual->proximo;
        free(atual);
     }
     //return imp;
}
void ordena(LISTA *lista) {
    LISTA *aux = lista, *troca;
    if(lista == NULL || (lista)->proximo == NULL) return; //se for nulo(vazio), ou apenas 1 elemento
    char aramzenacaracter; //precisa de espacao suficiente para armazenar o nome
    while(aux != NULL) {
      troca = aux->proximo;
      while(troca != NULL) {
        if(aux->dado<troca->dado) { //se vir depois
            aramzenacaracter=aux->dado;
            aux->dado=troca->dado;
            troca->dado=aramzenacaracter;
        }
        troca = troca->proximo;
      }
      aux = aux->proximo;
    }
}
void ordenaImpar(IMPAR *imp) {
    IMPAR *aux = imp, *troca;
    if(imp == NULL || (imp)->proximo == NULL) return; //se for nulo(vazio), ou apenas 1 elemento
    char aramzenacaracter; //precisa de espacao suficiente para armazenar o nome
    while(aux != NULL) {
      troca = aux->proximo;
      while(troca != NULL) {
        if(aux->dado<troca->dado) { //se vir depois
            aramzenacaracter=aux->dado;
            aux->dado=troca->dado;
            troca->dado=aramzenacaracter;
        }
        troca = troca->proximo;
      }
      aux = aux->proximo;
    }
    
}