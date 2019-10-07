#include<stdio.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
#define cachorro 4.00;
#define xsalada 4.50;
#define xbacon 5.00;
#define torrada 2.00;
#define refri 1.50;

int main(){
float quantidade,total=0.0;
int opc;
scanf("%d %f",&opc,&quantidade);
switch (opc){
    case 1:
        total=quantidade*cachorro;
        printf("Total: R$ %.2f\n",total);
        break;
    case 2:
        total=quantidade*xsalada;
        printf("Total: R$ %.2f\n",total);
        break;
    case 3:
        total=quantidade*xbacon;
        printf("Total: R$ %.2f\n",total);
        break;
    case 4:
        total=quantidade*torrada;
        printf("Total: R$ %.2f\n",total);
        break;
    case 5:
        total=quantidade*refri;
        printf("Total: R$ %.2f\n",total);
        break;
    }
}