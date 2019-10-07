#include<stdio.h>
/*
vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x%y==0 || y%x==0){
        printf("Sao Multiplos\n");

    }
    else{
        printf("Nao sao Multiplos\n");
 
    }
    return 0;
}