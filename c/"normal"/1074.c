#include<stdio.h>

int main(){
    int n=0,i=0;
        scanf("%d",&n);
    int vetor[n];
    for(i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<n;i++){
        if(vetor[i]%2==0 && vetor[i]<0){
            printf("EVEN NEGATIVE\n");
        }
        else if(vetor[i]%2==0 && vetor[i]>0){
                printf("EVEN POSITIVE\n");
        }
        if(vetor[i]%2!=0 && vetor[i]<0){
              printf("ODD NEGATIVE\n");
        }
        else if(vetor[i]%2!=0 && vetor[i]>0){
              printf("ODD POSITIVE\n");
        }
        if(vetor[i]==0){
            printf("NULL\n");
        }
    }
return 0;
}