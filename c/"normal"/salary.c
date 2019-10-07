#include<stdio.h>

int main(){
    int number,horas;
    float salario,salariototal;
    scanf("%d %d %f",&number,&horas,&salario);
    salariototal=horas*salario;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",salariototal);
    return 0;

}