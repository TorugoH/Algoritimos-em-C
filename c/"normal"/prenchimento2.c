#include<stdio.h>
/*vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/
int main(){
    int vetor[1000],i=0,aux=0,numero;
    scanf("%d",&numero);
    for(i=0;i<1000;i++){
        if(aux==numero)
            aux=0;
            vetor[i]=aux;
            printf("N[%d] = %d\n",i,vetor[i]);
            aux++;
    }
    return 0;
}