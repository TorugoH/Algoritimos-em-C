#include <stdio.h>
#include <stdlib.h>
#include<string.h> 
char mostrar(FILE **descritor,char arquivo[],char escrita[]){
    char nome[15];
    int i=0;
    unsigned int codigos;
    *descritor=fopen(arquivo,escrita);
    if(descritor==NULL){
        printf("Erro no arquivo\n");
        return 1;
     }
    else{
       printf("arquivo aberto\n");
          while((fscanf(*descritor,"%s %u",nome,&codigos)!=EOF)){
            if(codigos>=100){
              printf("Sr.(a) %s tem o codigo superior ou igual %u\n\n",nome,codigos);
            }
            i++;
          }
          fclose(*descritor);
          return 0;
         }
    }
int main(int argc, char *argv[]){
  FILE *fin, *fout;
  int ch;
    mostrar(&fin,argv[1],"r");
}