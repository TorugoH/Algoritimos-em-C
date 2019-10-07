#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*
Vitor Hugo Silva Ribeiro
201811130321
INF 1A 2019
*/
int main(){
    int a,b,c,maior;
    scanf("%d %d %d",&a,&b,&c);
    maior=(a+b+abs(a-b))/2;
    if(c>maior){
    printf("%d eh o maior\n",c);
    }
    else{
        printf("%d eh o maior\n",maior);
    }
    return 0;
}