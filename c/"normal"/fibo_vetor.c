#include<stdio.h>
/*vitor hugo silva ribeiro
2018111130321
INF 1A 2019
*/
int main(){
    int i,tamanho,n;
    unsigned long long int fib[61];
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<61;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    scanf("%d",&tamanho);
    for (i=1;i<=tamanho;i++){
        scanf("%d",&n);
        printf("Fib(%d) = %llu\n",n,fib[n]);
    }
    return 0;

}