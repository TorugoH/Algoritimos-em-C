#include<stdio.h>
/*vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/
int main(){
    int v[10],numero=0,i=0;
    scanf("%d",&v[0]);
    printf("N[0] = %d\n",v[0]);
    for(i=1;i<10;i++){
       v[i]=v[i-1]*2;
            printf("N[%d] = %d\n",i,v[i]);
    }
    return 0;
}