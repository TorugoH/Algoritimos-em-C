#include <stdio.h>
/*vitor hugo silva ribeiro
201811130321
INF 1A 2018
*/
int main(){
   int hora, horas, minutos, segundos;
   scanf("%d",&hora);
   horas=(hora/3600);
   minutos=(hora-(3600*horas))/60;
   segundos=(hora-(3600*horas)-(minutos * 60));
   printf("%d:%d:%d\n",horas,minutos,segundos);
   return 0;
}  