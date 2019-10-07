    #include<stdio.h>
#include<stdlib.h>
typedef struct lista{
    int numero;
    struct lista *proximo;
}LISTA;
LISTA*impar(int item, LISTA* lista_de_elemento){
     LISTA *lista_item,*final=NULL;
     lista_item=(LISTA*)malloc(sizeof(LISTA));
     if(lista_item==NULL){
         printf("erro");
       }
     lista_item->numero=item;
        if(lista_de_elemento==NULL){
            lista_de_elemento=lista_item;
            lista_item->proximo=NULL;
          }
        else{
            lista_item->proximo=lista_de_elemento;
            lista_de_elemento=lista_item;
     }
   return lista_de_elemento;
}
LISTA *par(int item, LISTA *lista_de_elemento){
    LISTA *lista_item;
    lista_item=(LISTA*)malloc(sizeof(LISTA));
            lista_item->numero=item;
            if(lista_de_elemento==NULL){
                lista_item->proximo=NULL;
                lista_de_elemento=lista_item;
            }
            else{
                 LISTA *referencia=lista_de_elemento;
                while(referencia->proximo!=NULL){
                    referencia=referencia->proximo;
                }
                lista_item->proximo=NULL;
                referencia->proximo=lista_item;
            }
           return lista_de_elemento;
}
void  imprimir(LISTA *lista_de_elemento){
    LISTA *impressao;
    impressao=lista_de_elemento;
    if(lista_de_elemento==NULL){
        printf("vazio\n");
    }
    while(impressao!=NULL){
        printf("%d ",impressao->numero);
        impressao=impressao->proximo;
     }
}
LISTA *remover_element(int item,LISTA* lista_de_elemento){
    LISTA*ant=lista_de_elemento;
    LISTA *atual=lista_de_elemento;
    while(atual!= NULL && atual->numero!= item) {
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
LISTA menu(LISTA *lista_de_elemento){
    LISTA *mostrar;
    mostrar=lista_de_elemento;
    int opc,item=0,i=0,item_remove=0;
    printf(" Seja bem-vindo!\n Para começar o teste do codigo informe os 8 numeros: ");
    for(i=0;i<8;i++){
        scanf("%d",&item);
      if(item%2==0){
          lista_de_elemento=par(item,lista_de_elemento);
        }
      else if(item%2!=0){
          lista_de_elemento=impar(item,lista_de_elemento);
         }
     }
    printf("\n");
    while(opc!=0){
        printf("\n");    
        printf("O que deseja fazer ?\n");
        printf("1_Mostrar a lista\n");
        printf("2_Excluir elemento da lista\n");
        printf("3_Inserir novo numero\n");
        printf("0_Sair\n");
        printf("\n");
        scanf("%d",&opc);
        printf("\n");
        switch (opc){
         case 1:
            printf("sua lista:\n");
            imprimir(lista_de_elemento);
            printf("\n");
            break;
         case 2:
            printf("qual numero voce deseja remover\n");
            scanf("%d",&item_remove);
            lista_de_elemento=remover_element(item_remove,lista_de_elemento);
            imprimir(lista_de_elemento);
            printf("\n");
            break;
         case 3:
            printf("informe o numero que vai ser inserido:\n");
            scanf("%d",&item);
            if(item%2==0){
                lista_de_elemento=par(item,lista_de_elemento);
              }
            else if(item%2!=0){
                lista_de_elemento=impar(item,lista_de_elemento);
              }
             printf("Elento %d inserido\n",item);
             printf("sua lista atualizada: ");
             imprimir(lista_de_elemento);
             printf("\n");
             break;
         } 
     }
}
void libera(LISTA **lista_de_elemento){
  LISTA *tmp;
  tmp = *lista_de_elemento;
  while (tmp != NULL) {
    *lista_de_elemento = (*lista_de_elemento)->proximo;
    free(tmp);
    tmp = *lista_de_elemento;
  }
}
int main(){
    LISTA *lista_de_elemento;
    lista_de_elemento=NULL;
    menu(lista_de_elemento);
    libera(&lista_de_elemento);
}