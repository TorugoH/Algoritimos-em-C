#include <stdio.h>
/*vitor hugo silva ribeiro
    201811130321   
    INF 1A 2019
*/
int main(){

    double a, b, c, tipo;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a<b){
        tipo = a;
        a = b;
        b = tipo;
        }
    if (b<c){
        tipo = b;
        b = c;
        c = tipo;
        }
    if (a<b){
        tipo = a;
        a = b;
        b = tipo;
        }
    if (a >= b + c){
        printf("n\n");
        }
    else if(a*a==b*b+c*c){
        printf("r\n");
        }
    else if(a*a>b*b+c*c){
        printf("o\n");
        }
    else if(a*a<b*b+c*c){
        printf("a\n");
        }
    
    return 0;
}