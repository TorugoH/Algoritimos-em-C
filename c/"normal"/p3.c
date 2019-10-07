#include<stdio.h>
/*vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/
int main(){
    double numero;
    int i,vetor[100];
    scanf("%lf",&numero);
        for(i=0;i<100;i++){
            printf("N[%d] = %.4lf\n",i,numero);
            numero/=2;
        }
        return 0;
}