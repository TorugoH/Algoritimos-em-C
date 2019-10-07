#include<stdio.h>
#include<string.h>
/*Vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
    int i=0,j=0,l=0;
    char nome[50],ultimo_nome[50],aux[50];
    prirtf("Escreva seu nome completo");
    scanf("%[^\n]s",nome);
    for(i=strlen(nome)-1;nome[i]!=' ';i--){
        ultimo_nome[j]=nome[i];
        j++;
        }
     for(i=strlen(ultimo_nome)-1;i>=0;i--){
         aux[l]=ultimo_nome[i];
            l++;
        }
    printf("Seu ultimo nome e : %s\n",aux);
    return 0;
}