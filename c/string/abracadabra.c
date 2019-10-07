#include <stdio.h>
#include <string.h>
int main() {
 char entrada[101];
 int x,i=0,c,j=0;
 while(scanf("%s",entrada)!=EOF){
 c=strlen(entrada);
  for(i=0;i<=c-1;i++){
   for(j=0;j<i;j++){
     printf(" ");
    }
   for(x=0;x<c;x++){
    printf("%c",entrada[x]);
    if(x<c-1)
    printf(" ");
   }
   c--;
   printf("\n");
  }
  printf("\n");
 }
    return 0;
}
