#include <stdio.h>
// João Vitor Lima Gomes (20192018262), Letícia Araújo Ribeiro (20192019090).
// INF1A 2019 


/*  Como é feita a passagem de variáveis?

    Existem dois tipos de passagem de variáveis, a passagem por valor e a passagem por referência.

    A passagem por valor ocorre para que se possa utilizar o valor de uma variável declarada em uma 
    função, dentro de uma outra função. Este tipo de passagem permite que se possa utilizar o valor 
    da variável, mas não alterá-lo diretamente.

    Já a passagem por referência ocorre para que se possa utilizar o valor de uma variável e também 
    alterá-lo através de uma outra função. As variáveis, quando passadas desta forma, devem ser 
    precedidas de um * (asterisco) e, quando chamadas, devem ser precedidas de um & ("e" comercial).
    
    Como utilizamos as passagens no nosso código?
    
    A passagem por valor foi utilizada para variáveis como "tamanho", onde se é necessário utilizar
    o seu valor mas alterá-lo seria incorreto e/ou desnecessário.
    
    Já a passagem por referência foi utilizada para variáveis como "soma_DP" e "soma_DI", onde se é 
    necessário utilizar e alterar o valor da variável.
*/

void exibe_matriz(int matriz[1000][1000], int tamanho, int soma_Linha[], int soma_Coluna[], int soma_DP, int soma_DI) {
	int linha, coluna, cont;
	
	for(cont = 0; cont < tamanho; cont++) {
		printf("%d\n", soma_Linha[cont]);
	}

	for(cont = 0; cont < tamanho; cont++) {
	printf("%d\n", soma_Coluna[cont]);
	}

	printf("%d\n", soma_DP);

	printf("%d\n\n", soma_DI);

	for(linha=0; linha<tamanho; linha++){
		for(coluna=0; coluna<tamanho; coluna++){
			printf("%d ", matriz[linha][coluna]);
		}
		printf("\n");
	}
}

void calcula_valores(int matriz[1000][1000], int tamanho, int *soma_DP, int *soma_DI, int soma_Linha[], int soma_Coluna[]){
	int linha, coluna, i=0, j=tamanho-1;
	
	for(linha=0; linha<tamanho; linha++){
		soma_Linha[i]=0;
		soma_Coluna[i]=0;
		for(coluna=0; coluna<tamanho; coluna++){
			soma_Linha[i]+=matriz[linha][coluna];
			soma_Coluna[i]+=matriz[coluna][linha];		
		}

		*soma_DP+=matriz[i][i];
		*soma_DI+=matriz[i][j];
		i++;
		j--;
	}
}

void preenche_matriz(int matriz[1000][1000], int tamanho){
	int linha, coluna;
	
	for(linha=0; linha<tamanho; linha++){
		for(coluna=0; coluna<tamanho; coluna++){
			scanf("%d", &matriz[linha][coluna]);
		}
	}
}

int main() {
	int  matriz[1000][1000], tamanho, soma_DP=0, soma_DI=0, soma_Linha[1000], soma_Coluna[1000];
	scanf("%d", &tamanho);
	preenche_matriz(matriz, tamanho);
	calcula_valores(matriz, tamanho, &soma_DP, &soma_DI, soma_Linha, soma_Coluna);
	exibe_matriz(matriz, tamanho, soma_Linha, soma_Coluna, soma_DP, soma_DI);
}