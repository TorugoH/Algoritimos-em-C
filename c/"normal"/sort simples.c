#include<stdio.h>
int main(){
    int vetor[3],tmp=0,ordenado[3],i=0,aux=0;
    for(i=0;i<3;i++){
        scanf("%d",&vetor[i]);
        ordenado[i]=vetor[i];
    }
    for(i=0;i<3-1;i++){
        for(tmp=i;tmp<3;tmp++){
        if(ordenado[tmp]<ordenado[i]){
            aux=ordenado[i];
            ordenado[i]=ordenado[tmp];
            ordenado[tmp]=aux;
        }
    }
}
    for(i=0;i<3;i++){
        printf("%d\n",ordenado[i]);
    }
        printf("\n");
    for(i=0;i<3;i++){
        printf("%d\n",vetor[i]); 
    }
}