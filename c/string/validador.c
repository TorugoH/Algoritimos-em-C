#include <stdio.h>
#include <string.h>
/**vitor hugo silva ribeiro
 * 201811130321
 * INF 1A 2019
*/
int main(){
	char senha[1000];
	int tam=0,i=0,maiuscolo = 0, minuscolo = 0, numero = 0, acento = 0;
 	 while(scanf("%[^\n]s",senha)!=EOF){
   	 getchar();		
        tam=strlen(senha);
   		 for(i=0;i<tam;i++){
			if(senha[i]>64&&senha[i]<91){
				maiuscolo++;
			  }
			if(senha[i]>47&&senha[i]<58){
				minuscolo++;
			  }
			if(senha[i]>96&&senha[i]<123){
				numero++;
			 }
			if(senha[i]>57&&senha[i]<65||senha[i]>90&&senha[i]<97||senha[i]>122||senha[i]<47){
				acento++;
			 }
		  }
		if(maiuscolo != 0 && minuscolo != 0 && numero != 0 && acento == 0 && tam >= 6 && tam<= 32){
			printf("Senha valida.\n");
		  }
		else{
			printf("Senha invalida.\n");
		   }
		maiuscolo = 0;minuscolo = 0;numero = 0;acento = 0;
      }
	return 0;
}