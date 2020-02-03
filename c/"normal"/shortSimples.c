#include<stdio.h>
#define tam 3
int main(){
    int i=0,vetor[tam],aux[3],numero,cont=0;

    for(i=0;i<tam;i++){
            scanf("%d",&numero);
            vetor[i]=numero;
            aux[i]=numero;
    }
    for(i=0;i<tam;i++){
        if(vetor[i]<vetor[i-1]){
            cont=vetor[i-1];
            vetor[i-1]=vetor[i];
            vetor[i]=cont;
        }
    }
    for(i=0;i<tam;i++){
        printf("%d\n",vetor[i]);
    }
}