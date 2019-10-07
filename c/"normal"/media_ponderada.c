#include<stdio.h>
/*
vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/

int main(){
    int caso,i=0;
    float a,b,c,media;
    scanf("%d",&caso);
    for(i=0;i<caso;i++){
            scanf("%f %f %f",&a,&b,&c);
            media=((a*2)+(b*3)+(c*5))/10;
            printf("%.1f\n",media);
    }
    return 0;
}