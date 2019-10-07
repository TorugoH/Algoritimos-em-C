#include<stdio.h>
#include<string.h>
/*vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/
int main(){
char nome1[55],nome2[55];
int n=0,i=0,j=0,tamanho1=0,tamanho2=0,maior=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %s",nome1,nome2);
        tamanho1=strlen(nome1);
        tamanho2=strlen(nome2);
        if(tamanho1<tamanho2){ 
            maior=tamanho2;
            }
        else {
            maior=tamanho1;
            }
        
        for(j=0;j<maior;j++){
            if(j<tamanho1){
                printf("%c",nome1[j]);
            }
            if(j<tamanho2){
                printf("%c",nome2[j]);
            }
        }
        printf("\n");
    }
}