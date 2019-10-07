#include<stdio.h>

int main(){
    int number;
    float horas,salario,salariototal;
    scanf("%d %f %f",&number,&horas,&salario);
    salariototal=horas*salario;
    printf("NUMBER = %d\n",number);
    printf("SALARY = %f\n",salariototal);
    

}