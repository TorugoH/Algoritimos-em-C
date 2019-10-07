#include<stdio.h>
#include<string.h>
int main(){
	char  nome;
	float salario,bonus,n;
	scanf("%s",&nome);
	scanf("%f",&salario);
	scanf("%f",&bonus);
		n=salario+(bonus*0.15);
	printf("TOTAL = R$ %.2f",n);


}
