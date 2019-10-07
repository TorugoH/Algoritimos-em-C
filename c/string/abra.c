#include <stdio.h>
#include <string.h>
/*vitor hugo silva ribeiro
    INF 1A 
    201811130321
*/
int main() {
 char entrada[101];
 int x=0,i=0,tam=0,j=0;
 while(scanf("%s",entrada)!=EOF){
    tam=strlen(entrada);
    for(i=0;i<=strlen(entrada)-1;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
   for(x=0;x<tam;x++){
     printf("%c",entrada[x]);
        if(x<tam-1)
        printf(" ");
    }   
        tam--;
    printf("\n");
  }
  printf("\n");
 }
    return 0;
}