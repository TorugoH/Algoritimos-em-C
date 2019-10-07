#include<stdio.h>
/*vitor hugo
    201811130321
    INF 1A
*/

#define PI 3.14159;
int main(){
    double raio,area;
    scanf("%lf",&raio);
    area=(raio*raio)*PI;
    printf("A=%.4f\n",area);
    return 0;
}