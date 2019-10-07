#include<stdio.h>
#include<math.h>
#include<stdlid.h>
/*vitor hugo silva ribeiro
201811130321
INF 1A 2019
OBS: para compilar o codigo com a biblioteca math.h , tem e colocar no final na linha do terminal o -lm
*/
int main(){
    float x,y,xx,yy,distancia,raizx,raizy;
    scanf("%f %f",&x,&y);
    scanf("%f %f",&xx,&yy);
    distancia=sqrt(pow((xx-x),2)+pow((yy-y),2));
    printf("%.4f\n",distancia);
    return 0;
}