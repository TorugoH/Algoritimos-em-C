#include<stdio.h>
#include<string.h>
/*
    vitor hugo silva ribeiro
    201811130321
    INF 1A
*/
int main(){
    char entrada[100],comapracao[6]="zelda",comaparacao2[6]="Zelda";
    scanf("%s",entrada);
    if(strstr(entrada,comapracao)!=NULL || strstr(entrada,comaparacao2)!=NULL){
         printf("Link Bolado\n") ;
    }
    else{
    printf("Link Tranquilo\n");
    }
  return 0;
}