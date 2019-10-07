#include<stdio.h>
/*VITOR HUGO
201811130321
INF 1A 2019
*/
int main(){
    float tempo,velocidade;
    float litros;
    
    scanf("%f %f",&tempo,&velocidade);
    litros=(tempo*velocidade)/12;
    printf("%.3f\n",litros);
    return 0;

}