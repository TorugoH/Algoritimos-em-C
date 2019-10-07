#include<stdio.h>
/*vitor hugo
    201811130321
    INF 1A 2019
*/
int main(){
    double a,b,c,media;
    scanf("%lf %lf %lf",&a,&b,&c);
    media=((a*2)+(b*3)+(c*5))/10;
    printf("MEDIA = %.1lf\n",media);
    return 0;
}