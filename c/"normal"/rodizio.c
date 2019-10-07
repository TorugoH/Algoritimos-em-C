#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
        char veiculo[9];
        int i=0,entrada=0;
        scanf("%d",&entrada);
        for(i=0;i<entrada;i++){
            gets(veiculo[i]);
            if(veiculo[9]==4){
                printf("segunda\n");
            }
        }


}