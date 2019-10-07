#include <stdio.h>
/*
Gabriel Gonçalves-20192003573
Lucas Gabriel-20192004820  
Vitor Hugo-201811130321 
Victor Wilson 
Gabrielle de Souza-20192020897
*/
int main(){
    int h=0,i=0, j=0,n;
    int tijolo[9][9];
    scanf("%d",&n);
    while(h<n){
        for(i=0;i<9;i+=2){
            for(j=0;j<=i;j+=2){
                scanf("%d",&tijolo[i][j]);
            }
        }
        for(i=2;i<=8;i+=2){
            for(j=0; j<i; j+=2){
                tijolo[i][j+1]=(tijolo[i-2][j]-(tijolo[i][j]+tijolo[i][j+2]))/2;
                tijolo[i-1][j]=tijolo[i][j]+tijolo[i][j+1];
                tijolo[i-1][j+1]=tijolo[i][j+1]+tijolo[i][j+2];
            }
        }
        for(i=0;i<9;i++){
            for(j=0;j<i;j++){
                printf("%d ",tijolo[i][j]);
            }
            printf("%d\n",tijolo[i][i]);
        }
        h++;
    }
    return 0;
}
