#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define minimo 6
#define maximo 32
int main(){
    int i=0,tam=0,numero=0,j=0,prox=0,cont=0,maiusculo=0,minusculo=0;
    char senha[40];
    while(scanf("%[^\n]s", senha)!=EOF){

    /*conferindo o tamanho*/
    tam=strlen(senha);
        if(tam<minimo || tam>maximo){//invalido
            prox=1;
         }
        for(i=0;i<tam;i++){
            /*verificando se  tem espaço*/
            
        if(isalnum(senha[i])){
            if(isupper(senha[i])){
                maiusculo=1;
            }
       if(islower(senha[i])){
       minusculo=1;
       }
       if(isdigit(senha[i])){
           numero=1;
       }
       
      }
     }
        if(prox==1 || minusculo==0 || maiusculo==0||numero==0){
            printf("Senha invalida.\n");
         }
        else{
            printf("Senha valida.\n");
        }   
    getchar(); 
    tam=0;numero=0;prox=0;cont=0;maiusculo=0;minusculo=0;
    }   
            
   return 0;
    
    
}