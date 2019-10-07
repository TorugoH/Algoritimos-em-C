//201811130054
//inf1a
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int main(){

    char jogo[4][4], linha;
    int i=0,j=0, coluna,linhaReal, jogada=0, cont=0, coluna_pc, linha_pc;

  
//zerar a matriz
    for(i=1;i<=3;i++){
        for (j=1;j<=3;j++){
           jogo[i][j]=0;
      }
    }
     for(i=1;i<=3;i++){
        for (j=1;j<=3;j++){
          //linha
        jogo[0][0]==0;
        jogo[1][0]='A';
        jogo[2][0]='B';
        jogo[3][0]='C';
        // coluna
        jogo[0][1]='1';
        jogo[0][2]='2';
        jogo[0][3]='3';
      }
    }


// colocando o traçinho
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            jogo[i][j]='-';
        }
    }

    //Jogadas
    while(jogada<=5){
        scanf("%c",&linha);
        scanf("%d",&coluna);

      

    //trocando letra por numero 
        if(linha=='A'|| linha=='a'){
            linhaReal=1;

        }
        else if(linha=='B' || linha=='b'){
            linhaReal=2;
        }
        else if(linha=='C' || linha=='c'){
            linhaReal=3;

        }
        // PARTE DO X
        
        for(i=linhaReal;i<=linhaReal;i++){
            for(j=coluna;j<=coluna;j++){
        
                jogo[i][j]='x';
            }
    }
    

    //bolinha - COMPUTADOR
        srand(time(0));
        while(cont==0){
            linha_pc=rand()%4;
                coluna_pc=rand()%4;
            for(i=linha_pc;i<=linha_pc;i++){
                for(j=coluna_pc;j<=coluna_pc;j++){
                    if(jogo[i][j]=='x' || jogo[i][j]=='A' || jogo[i][j]=='B' || jogo[i][j]=='c' || jogo[i][j]=='1'||jogo[i][j]=='2' || jogo[i][j]=='3' || jogo[i][j]==jogo[0][0]){
                        cont=0;
                }
                    else{
                         jogo[i][j]='o';
                         cont=1;
                        }
                    }   
                }
            }
             //imprimindo
              for(i=0;i<=3;i++){
                for(j=0;j<=3;j++){
                    printf(" %c ",jogo[i][j]);
                }
                printf("\n");
            }
    jogada++;
    }
 return 0;
}