#include<stdio.h>
/*vitor hugo
201811130321
INF 1A 2019
*/
int main(){
    char nome;
    double salario,comicao,newsalario;
    scanf("%s",&nome);
    scanf("%lf %lf",&salario,&comicao);
    newsalario=salario+(comicao*0.15);
    printf("TOTAL = R$ %.2lf\n",newsalario);
return 0;

}