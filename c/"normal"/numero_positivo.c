#include<stdio.h>
/*
vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/
int main(){
    int i=0,aux=0;
    float numero;
    for(i=0;i<6;i++){
        scanf("%f",&numero);
            if(numero>0){
                 aux++;
                 }
        }      
        printf("%d valores positivos\n",aux);
        return 0;
}