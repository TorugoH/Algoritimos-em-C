#include<stdio.h>

int main(){
    int n_entrada=0,i=0,entrada=0;
    scanf("%d",&n_entrada);
    printf("NAO TA PRONTO PORRA!\n");
    for(i=0;i<n_entrada;i++){
        scanf("%d",&entrada);
        if(entrada<0){
            printf("ODD NEGATIVE\n");
        }
        else if(entrada==0){
                printf("NULL\0")
        }
    }

}