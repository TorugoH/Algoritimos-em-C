#include<stdio.h>
#define PI 3.14159
/*
vitor hugo silva ribeiro
20811130321
INF 1A 2019
*/
int main(){
    double raio,volume;
    scanf("%lf",&raio);
    volume=(4/3.0)*raio*raio*raio*PI;
    printf("VOLUME = %.3lf\n",volume);
return 0;
}
