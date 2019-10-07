#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main() {
  int entrada=0, input=0,output=0,i=0,imprime,j=0,tam=0;
 int cont=0,aux=0,k;
 char s[100000],inverte[100000],vazia[100000];
 scanf("%d",&entrada);
 	for(k=0;k<entrada;k++){
  		strcpy(inverte,vazia);
  		scanf("%d",&input);
  		scanf("%d",&output);
  	 for (i=input;i<=output;i++){
   			imprime=i;
    		printf("%d",imprime);
   			sprintf(s,"%d",imprime);
   			strcat(inverte,s);
   			
  		}
  	tam=strlen(inverte);
  	tam--;
  	for(j=tam;j>=0;j--){ 
   		printf("%c",inverte[j]);
     }
	 printf("\n");
	}
	 return 0;
}
