#include<stdio.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
    int codigo,codigos,quantidades,quantidade;
    float preco,precos,total,totau;
    scanf("%d %d %f",&codigo,&quantidade,&preco);
    scanf("%d %d %f",&codigos,&quantidades,&precos);
    total=quantidade*preco;
    totau=quantidades*precos;
    printf("VALOR A PAGAR: R$ %.2f\n",total+totau);
    return 0;
}