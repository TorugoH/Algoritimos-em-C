#include<stdio.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
    int n,i;
    scanf("%d",&n);
    i=0;
    while(i<6){
        if(n%2!=0){
            printf("%d\n",n);
            i++;
            }
        n++;
        }
    return 0;
}