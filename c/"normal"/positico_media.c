 #include<stdio.h>
/*
vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/
int main(){
    int i=0,aux=0;
    float numero,numeros=0,media=0;
    for(i=0;i<6;i++){
        scanf("%f",&numero);
            if(numero>0){
                 aux++;
                 numeros+=numero;
                 }
        }      
        media=numeros/aux;
        printf("%d valores positivos\n",aux);
        printf("%.1f\n",media);
        return 0;
}