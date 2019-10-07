#include<stdio.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
    float a,b,c,perimetro=0,area=0;
    scanf("%f %f %f",&a,&b,&c);
    if(a<b+c && b<c+a && c<a+b){
        perimetro=a+b+c;
        printf("Perimetro = %.1f\n",perimetro);
    }
    else{
        area=((a+b)*c)/2;
        printf("Area = %.1f\n",area);
    }
    return 0;
}