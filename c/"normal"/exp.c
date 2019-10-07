#include <stdio.h>
#include<stdlib.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
 char t;
 int n, c, r,  s, soma, e;
 c=0;
 r=0;
 s=0;
 soma=0;
        scanf("%d", &n);
    while(n--){
        scanf("%d %c", &e, &t);
            soma += e;
        if (t == 'C'){
                c+=e;
            } 
        else if (t == 'R'){
            r+=e;
        } 
        else if (t == 'S'){
            s+= e;
            }
    }
 printf("Total: %d cobaias\n", soma);
 printf("Total de coelhos: %d\n", c);
 printf("Total de ratos: %d\n", r);
 printf("Total de sapos: %d\n", s);
 printf("Percentual de coelhos: %.2f %\n", (float)c * 100.0 / soma);
 printf("Percentual de ratos: %.2f %\n", (float)r * 100.0 / soma);
 printf("Percentual de sapos: %.2f %\n", (float)s * 100.0 / soma);
}