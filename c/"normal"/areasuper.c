#include<stdio.h>
#define tamanho 12
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
    double matrix[tamanho][tamanho],soma=0.0;
    int i=0,j=0;
    char opc[2];
    scanf("%s",opc);
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            scanf("%lf",&matrix[i][j]);
        }
    }
    for(i=1;i<=10;i++){
        for(j=i-1;j<=i;j++){//ele tem q comesar na posição i+1 e ir ate 10-i
            soma+=matrix[i][j];
        }
    }
    if(opc[0]=='M'){
        soma/=30;
    }
    printf("%.1lf\n",soma);
    return 0;
}