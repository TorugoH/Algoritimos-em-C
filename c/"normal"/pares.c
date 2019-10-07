#include<stdio.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
    int i=0,num;
    scanf("%d",&num);
    for(i=2;i<=num;i+=2){
        if(num%2==0){
    printf("%d^2 = %d\n",i,i*i);
        }
    }
}