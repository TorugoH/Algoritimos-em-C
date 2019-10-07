#include<stdio.h>
/*vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/
int main(){
    int vetor[20],i=0,aux=0;
    
    for(i=0;i<20;i++){
        scanf("%d",&vetor[i]);
    }
        for(i=0;i<10;i++){//para ir ate a metade do vetor
            aux=vetor[i];
            vetor[i]=vetor[19-i];
            vetor[19-i]=aux;
        }
        for(i=0;i<20;i++){
            printf("N[%d] = %d\n",i,vetor[i]);
        }
    return 0;
}