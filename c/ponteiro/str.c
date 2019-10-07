#include<stdio.h>
#include<string.h>
char ultima(char ch[]){
    int i=0,aux=0,t;
    while (i=strlen(ch)){
        aux=i;
        i--;
    }
    
    //for(i=strlen(ch);i==' '-1;i++){
    //}
    printf("%d\n",aux);
    printf("%ld\n",strlen(ch));
}
int main(){
    char nome[50],resultado;
   scanf("%s",nome);
    ultima(nome);
    
}