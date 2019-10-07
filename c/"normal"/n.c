//bruna carvalho peixoto sanches
//201811130054
//inf1a
#include <stdio.h>
int main(){

int charrete1, charrete2, dis1, dis2;

double vel1,vel2,conv1=0.0,conv2=0.0, div1=0.0, div2=0.0;
scanf("%d %d %lf",&charrete1,&dis1, &vel1);
scanf("%d %d %lf",&charrete2,&dis2, &vel2);

if(charrete1 != charrete2){
conv1=vel1/3.6; // convertendo o km/h para m/s
conv2=vel2/3.6;



div1= dis1/conv1; // dividindo para ver quem fez menos tempo
div2= dis2/conv2; // divide distancia sobre velocidade



if(div1>div2){
    printf("%d\n", charrete2);

}
else if(div1<div2){
    printf("%d\n", charrete1);
}
}
 return 0;
}
