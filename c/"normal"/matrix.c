#include <stdio.h>
int main(){

int dist=0, com=0, perc=0, valor=0, total=0, aux=0;

scanf("%d %d %d %d", &com, &dist, &perc, &valor);

if(dist>=1 && dist<= 1000 && com>=1 && com<=1000 && perc>=1 && perc<=1000 && valor>=1 && valor<=1000){
    aux= com/dist;
    total= (aux*valor)+(perc* com);
    printf("%d\n", total);
    }
  return 0;
}
