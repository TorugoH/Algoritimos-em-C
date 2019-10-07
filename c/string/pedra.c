#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*vitor hugo silva ribeior
    201811130321
    INF 1A 2018
*/
int main(){
	int entrada=0, i=0;
	char jogadaum[8], jogadadois[8];
	scanf("%d", &entrada);
	for(i=1;i<=entrada;i++){
		scanf("%s %s", jogadaum, jogadadois);
		if(strcmp(jogadadois,jogadaum)==0){
			printf("empate\n");
        }
		else if(strcmp(jogadadois,"tesoura")==0){
				if(strcmp(jogadaum,"papel")==0 || strcmp(jogadaum,"lagarto")==0){
					printf("sheldon\n");
                }
				else{
					printf("rajesh\n");
                 }
           }
		else if(strcmp(jogadadois,"papel")==0){
				if(strcmp(jogadaum,"pedra")==0 || strcmp(jogadaum,"spock")==0){
					printf("sheldon\n");
                    }
				else{
					printf("rajesh\n");
                    }
               }
		else if(strcmp(jogadadois,"pedra")==0){
				if(strcmp(jogadaum,"lagarto")==0 || strcmp(jogadaum,"tesoura")==0){
				    printf("sheldon\n");
                    }
				else{
					printf("rajesh\n");
                    }
                }
		else if(strcmp(jogadadois,"lagarto")==0){
				if(strcmp(jogadaum,"spock")==0 || strcmp(jogadaum,"papel")==0){
					printf("sheldon\n");
                     }                    
				else{
					printf("rajesh\n");
                    }
                }
		else if(strcmp(jogadadois,"spock")==0){
				if(strcmp(jogadaum,"tesoura")==0 || strcmp(jogadaum,"pedra")==0){
					printf("sheldon\n");
                    }
				else{
					printf("rajesh\n");
                    }
            }
    }
	return 0;
}