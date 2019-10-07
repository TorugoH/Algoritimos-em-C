#include <stdio.h>
#define tamanho 12
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
    
    double soma, M[tamanho][tamanho];
    char operacao[2];
    int i,j,p=0,r=4;
    scanf("%s", operacao);
    for(i=0;i<tamanho;i++){
        for(j=0; j<tamanho; j++){
            scanf("%lf", &M[i][j]);
            }
          }
    for(i=1;i<=10;i++){
        if(i<=5){
            for(j=0;j<=0;j++){
                soma+=M[i][j];
                p++;
                     }
            }
        else if(i>=6){
            for(j=0;j<=4;j++){
                soma+=M[i][j];
                    r--;
                        }
                    }
            }
        if(operacao[0]=='S'){
            printf("%.1lf\n",soma);
            }
        else if(operacao[0]=='M'){
            soma/=30.0;
            printf("%.1lf\n",soma);
            }
    return 0;
}