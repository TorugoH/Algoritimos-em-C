#include<stdio.h>
#include<string.h>
#define tam 12
/*vitor hugo silva riberio
    201811130321
    INF 1A 2019
*/
int main(){
    char opc[2];
    int i=0,j=0,coluna;
    double m[tam][tam],soma;
    scanf("%d",&coluna);
    scanf("%s",&opc);
        for(i=0;i<tam;i++){
            for(j=0;j<tam;j++){
                scanf("%lf",&m[i][j]);
                if(j==coluna){
                        soma+=m[i][j];
                    }
                }
            }
            if(opc[0]=='S'){
                printf("%.1lf\n",soma);
                }
            else if(opc[0]=='M'){
                        soma/=12.0;
                        printf("%.1lf\n",soma);
                        
        }
        return 0;
}