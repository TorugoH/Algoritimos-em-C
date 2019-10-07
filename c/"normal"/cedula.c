#include<stdio.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
    float dinheiro;
	int notas,moeda;
		scanf("%f",&dinheiro);
		printf("NOTAS:\n");
		//nota de 100
		notas = 0;
		notas = dinheiro / 100;
		dinheiro = dinheiro - notas * 100;
		printf("%d nota(s) de R$ 100.00\n",notas);
		//noata de 50
		notas = 0;
		notas = dinheiro / 50;
		dinheiro = dinheiro - notas * 50;
		printf("%d nota(s) de R$ 50.00\n",notas);
		//nota de 20
		notas = 0;
		notas = dinheiro/ 20;
		dinheiro = dinheiro- notas * 20;
		printf("%d nota(s) de R$ 20.00\n",notas);
		//nota de 10
		notas = 0;
		notas = dinheiro / 10;
		dinheiro= dinheiro- notas * 10;
		printf("%d nota(s) de R$ 10.00\n",notas);
		//nota de 5
		notas = 0;
		notas = dinheiro/ 5;
		dinheiro = dinheiro - notas * 5;
		printf("%d nota(s) de R$ 5.00\n",notas);
		//nota de 2
		notas = 0;
		notas = dinheiro / 2;
		dinheiro= dinheiro - notas * 2;
		printf("%d nota(s) de R$ 2.00\n",notas);
		printf("MOEDAS:\n");
		//moeda de 1
		moeda= 0;
		moeda = dinheiro /1;
		dinheiro = dinheiro- moeda*1;
		printf("%d moeda(s) de R$ 1.00\n",moeda);
		//moeda de 0,50
		moeda= 0;
		moeda = dinheiro /0.50;
		dinheiro = dinheiro- moeda*0.50;
		printf("%d moeda(s) de R$ 0.50\n",moeda);
		//moeda de 0.25
		moeda= 0;
		moeda = dinheiro /0.25;
		dinheiro = dinheiro- moeda *0.25;
		printf("%d moeda(s) de R$ 0.25\n",moeda);
		//moeda de 0,10
		moeda= 0;//moeda
		moeda = dinheiro /0.10;
		dinheiro = dinheiro- moeda *0.10;
		printf("%d moeda(s) de R$ 0.10\n",moeda);
		//moeda de 0.05
		moeda= 0;//moeda
		moeda = dinheiro /0.05;
		dinheiro = dinheiro- moeda *0.05;
		printf("%d moeda(s) de R$ 0.05\n",moeda);
		//moeda de 0,01
		moeda=0;
		moeda = dinheiro/0.009;
		//dinheiro = dinheiro-moeda*0.01;
		printf("%d moeda(s) de R$ 0.01\n",moeda);
		
		

}