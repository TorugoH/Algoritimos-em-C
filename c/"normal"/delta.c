#include<stdio.h>
#include<math.h>
/*
    vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
    double a,b,c,r1,r2,delta;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta=(b*b)-4*a*c;
    if(delta<0){
        printf("Impossivel calcular\n");
    }
    if(a==0){
        printf("Impossivel calcular\n"); 
    }
    
    else if(delta>=0){
        r1=((b*-1)+sqrt(delta))/(2*a);
        r2=((-1*b)-sqrt(delta))/(2*a);
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
      }
    return 0;
}