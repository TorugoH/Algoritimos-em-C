#include<stdio.h>
#define n 5
int main(){
    int vetor[n],cont=0,i=0;
    for(i=0;i<n;i++){
        scanf("%d",&vetor[i]);
        if(vetor[i]%2==0){
            cont++;
        }
    }
printf("%d valores pares\n",cont);
return 0;
}