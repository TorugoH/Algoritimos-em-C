#include<stdio.h>

int main(){
	int fatorial=1,numero;
	scanf("%d",&numero);
	while(numero>1){//quando o numero for maior q 1 ele comeca a calcular o fatorial
	fatorial*=numero;//aquei ele vai multiplicando igual  formula , mas ele pega ate o valor digitato
	numero-=1;//ele vai olhando os numero abaixo dele para ver se algum e igual a 0 ou 1, pq ai acabao while
	}
	printf("%d e fatorial",fatorial);
}
