#include<stdio.h>
/*
vitor hugo
201811130321
INF 1A
*/
int main(){
 int distancia;
double litros,consumomedio;
scanf("%d %lf",&distancia,&litros);
consumomedio=distancia/litros;
printf("%.3lf km/l\n",consumomedio);
return 0;
}