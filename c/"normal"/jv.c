#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char tabuleiro[4][4], coorden[2];
    int i,j,k,linha,coluna,cont=0,linhaPC,colunaPC, rodada=0;
    
 
   for(j=0;j<4;j++){
        for(k=0;k<4;k++){
            tabuleiro[j][k]='-';
        }
    }
    
    tabuleiro[0][0]=' ';
    tabuleiro[0][1]='1';
    tabuleiro[0][2]='2';
 
   tabuleiro[0][3]='3';
    tabuleiro[1][0]='A';
    tabuleiro[2][0]='B';
    tabuleiro[3][0]='C';
    
    while(rodada<4){
        rodada++;
        scanf("%s",coorden);
    
    
        if(coorden[0]=='A'){
            linha=1;    
        }
        else if(coorden[0]=='B'){
            linha=2;
        }
        else if(coorden[0]=='C'){
        
    linha=3;
        }
        
        if(coorden[1]=='1'){
            coluna=1;
        }
        else if(coorden[1]=='2'){
            coluna=2;
        }
        else if
(coorden[1]=='3'){
            coluna=3;
        }
        
        tabuleiro[linha][coluna]='x';

        cont=0;
        while(cont==0){
            srand(time(0));
		
    linhaPC = 1+(rand() % 3);
		    colunaPC = 1+(rand() % 3);
		    
		    if(tabuleiro[linhaPC][colunaPC]!='x' && tabuleiro[linhaPC]
[colunaPC]!='o'){
		        cont++;
		        tabuleiro[linhaPC][colunaPC]='o';
		    }
        }    

        for(j=0;j<4;j++){
            
for(k=0;k<4;k++){
                printf("%c ",tabuleiro[j][k]);
            }
            printf("\n");
        }
        
        if(rodada==4){
            //vertical
      
      if(tabuleiro[1][1]=='x' && tabuleiro[1][2]=='x' && tabuleiro[1][3]=='x'){
                printf("Você venceu!\n");
            }
            else if(tabuleiro[2][1]=='x' && tabuleiro[2][2]=='x' && tabuleiro[2][3]=='x'){
                printf("Você venceu!\n");
            }
            else if(tabuleiro[3][3]=='x' && tabuleiro[3][2]=='x' && tabuleiro[3][3]=='x'){
                printf("Você venceu!\n");
            }
            else if(tabuleiro[1][1]=='o' && tabuleiro[1][2]=='o' && tabuleiro[1][3]=='o'){
                printf("Você perdeu!\n");
            }
            else if(tabuleiro[2][1]=='o' && tabuleiro[2][2]=='o' && tabuleiro[2][3]=='o'){
  
              printf("Você perdeu!\n");
            }
            else if(tabuleiro[3][3]=='o' && tabuleiro[3][2]=='o' && tabuleiro[3][3]=='o'){
                printf("Você perdeu!\n");
            }
            else if(tabuleiro[1][1]=='x' && tabuleiro[2][1]=='x' && tabuleiro[3][1]=='x'){
                printf("Você venceu!\n");
     
       }
            else if(tabuleiro[1][2]=='x' && tabuleiro[2][2]=='x' && tabuleiro[3][2]=='x'){
                printf("Você venceu!\n");
            }
            
else if(tabuleiro[1][3]=='x' && tabuleiro[2][3]=='x' && tabuleiro[3][3]=='x'){
                printf("Você venceu!\n");
            }   
            else if(tabuleiro
[1][1]=='o' && tabuleiro[2][1]=='o' && tabuleiro[3][1]=='o'){
                printf("Você perdeu!\n");
            }
            else if(tabuleiro[1][2]=='o' && 
tabuleiro[2][2]=='o' && tabuleiro[3][2]=='o'){
                printf("Você perdeu!\n");
            }
            else if(tabuleiro[1][3]=='o' && tabuleiro[2][3]=='o' && 
tabuleiro[3][3]=='o'){
                printf("Você perdeu!\n");
            }
            else if(tabuleiro[1][1]=='x' && tabuleiro[2][2]=='x' && tabuleiro[3][3]=='x'){
  
      	    printf("Você venceu!\n");
    	    }
            else if(tabuleiro[3][1]=='x' && tabuleiro[2][2]=='x' && tabuleiro[1][3]=='x'){		
    		
    printf("Você venceu!\n");
    	    }
    	    else if(tabuleiro[1][1]=='o' && tabuleiro[2][2]=='o' && tabuleiro[3][3]=='o'){
        	    printf("Você venceu!\n");
    	    }
            else if(tabuleiro[3][1]=='o' && tabuleiro[2][2]=='o' && tabuleiro[1][3]=='o'){		
    		    printf("Você venceu!\n");
    	    }
            else{
                printf("Velha!\n");
            }
        }
    }

    return 0;
}