#include <stdio.h>
#include <string.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
  int n=0,i=0,tam=0;
  char numero[6];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s", numero);
    tam=strlen(numero);
    if(tam==3&&(numero[0]=='o'&&numero[2]=='e')||(numero[0]=='o'&&numero[1]=='n')||(numero[1]=='n'&&numero[2]=='e')){
        printf("1\n");
    }
    else if(tam==3&&(numero[0]=='t'&&numero[1]=='w')||(numero[1]=='w'&&numero[2]=='o')||(numero[0]=='t'&&numero[2]=='o')){
      printf("2\n");
    }
    else if(tam==5){
      printf("3\n");
    }
   
  }
  return 0;
}