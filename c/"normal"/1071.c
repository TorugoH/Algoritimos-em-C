#include<stdio.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
    int i,a,b,aux=0,cont=0;
    scanf("%d %d",&a,&b);
    if(a>b){
        aux=a;
        a=b;
        b=aux;
    }
    if(a%2!=0){
        for(i=a+1;i<b;i++){
            if(i%2!=0){
                cont+=i;
            }
        }
    }
    else{
        for(i=a+1;i<b;i++){
            if(i%2!=0){
                cont+=i;
            }
        }
    }
    printf("%d\n",cont);
    return 0;
}