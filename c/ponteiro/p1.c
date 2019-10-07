#include<stdio.h>

int main(){
    int total=0,*ponteiro_inicia,*ponteiro_final,vetor[5]={0,1,2,3,4};

        ponteiro_inicia=&vetor[0];
        ponteiro_final=&vetor[4];
        total=*ponteiro_final-*ponteiro_inicia-1;
        printf("vetor de 5 posição\n");
        printf("\n");
        printf("NUMERO DE ELEMENTOS ENTRE P1 E P2: %d\n",total);
                 
}