#include<stdio.h>
#include<string.h>
int main(){
char bacteria[101],tipo[101];
int i,r=0,n=0;
	while(scanf("%s%s",bacteria,tipo)!=EOF){
		for( i=0; i < strlen(bacteria); i++){
			if(strstr(bacteria,tipo)){
				r=1;	
			} 	
	    }
        if(r==1){
            printf("Resistente\n");
        }
        else if(r!=1){
             printf("Nao resistente\n");
        }
        r=0;
        
    }
  return 0;
	}
