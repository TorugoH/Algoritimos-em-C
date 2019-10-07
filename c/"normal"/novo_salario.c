#include<stdio.h>

int main(){
    float salario,newsalario,reajuste;
    scanf("%f",&salario);
    if(salario<=400.00){
        reajuste=salario*0.15;
        newsalario=salario+reajuste;
        printf("Novo salario: %.2f\n",newsalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else if(salario<=800.00){
        reajuste=salario*0.12;
        newsalario=salario+reajuste;
        printf("Novo salario: %.2f\n",newsalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 12 %%\n");
    }
    else if(salario<=1200.00){
        reajuste=salario*0.10;
        newsalario=salario+reajuste;
        printf("Novo salario: %.2f\n",newsalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 10 %%\n");
    }
     else if(salario<=2000.00){
        reajuste=salario*0.07;
        newsalario=salario+reajuste;
        printf("Novo salario: %.2f\n",newsalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 7 %%\n");
    }
     else if(salario>=2000.01){
        reajuste=salario*0.04;
        newsalario=salario+reajuste;
        printf("Novo salario: %.2f\n",newsalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
    
}

