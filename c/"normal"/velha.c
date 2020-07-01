#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
/*desenvolverdor : VITOR HUGO
    matricula: 201811130321
    INF1A 2019
*/
void pontinhos(){
    int i=0;
    for(i=0;i<20;i++){
         putchar('*');
        }
    }
int verificar(char velha[4][4]){
        if(velha[1][1]=='x' && velha[1][2]=='x'&& velha[1][3]=='x'){
                    printf("Voce ganhou :)\n");
                    return 9;
            }
            else if(velha[2][1]=='x' && velha[2][2]=='x'&& velha[2][3]=='x'){
                    printf("Voce ganhou:)\n");
                     return 9;
            }
             else  if(velha[3][1]=='x' && velha[3][2]=='x'&& velha[3][3]=='x'){
                    printf("Voce ganhou:)\n");
                     return 9;
            }
            /*coluna*/
            else  if(velha[1][1]=='x' && velha[2][1]=='x'&& velha[3][1]=='x'){
                    printf("Voce ganhou:)\n");
                     return 9;
            }
            else  if(velha[1][2]=='x' && velha[2][2]=='x'&& velha[3][2]=='x'){
                    printf("Voce ganhou:)\n");
                     return 9;
            }
            else  if(velha[1][3]=='x' && velha[2][3]=='x'&& velha[3][3]=='x'){
                    printf("Voce ganhou:)\n");
                     return 9;
            }
            /*diagonal*/
            else  if(velha[1][1]=='x' && velha[2][2]=='x'&& velha[3][3]=='x'){
                    printf("Voce ganhou:)\n");
                     return 9;
            }
            else  if(velha[1][3]=='x' && velha[2][2]=='x'&& velha[3][1]=='x'){
                    printf("Voce ganhou:)\n");
                     return 9;
            }
            /*LINHA O*/
            else if(velha[1][1]=='O' && velha[1][2]=='O'&& velha[1][3]=='O'){
                    printf("Voce perdeu :(\n");
                     return 9;
            }
            else if(velha[2][1]=='O' && velha[2][2]=='O'&& velha[2][3]=='O'){
                    printf("Voce perdeu :(\n");
                     return 9;
            }
             else  if(velha[3][1]=='O' && velha[3][2]=='O'&& velha[3][3]=='O'){
                    printf("Voce perdeu :(\n");
                     return 9;
            }
            /*coluna*/
            else  if(velha[1][1]=='O' && velha[2][1]=='O'&& velha[3][1]=='O'){
                    printf("Voce perdeu :(\n");
                     return 8;
            }
            else  if(velha[1][2]=='O' && velha[2][2]=='O'&& velha[3][2]=='O'){
                    printf("Voce perdeu :(\n");
                     return 8;
            }
            else  if(velha[1][3]=='O' && velha[2][3]=='O'&& velha[3][3]=='O'){
                    printf("Voce perdeu :(\n");
                     return 8;
            }
            /*diagonal*/
            else  if(velha[1][1]=='O' && velha[2][2]=='O'&& velha[3][3]=='O'){
                    printf("Voce perdeu:(\n");
                     return 8;
            }
            else  if(velha[1][3]=='O' && velha[2][2]=='O'&& velha[3][1]=='O'){
                    printf("Voce perdeu:(\n");
                     return 8;
                    system("ls");
            }
            else{
                    return 9;
            }
}
int main(){
 char linha=0,velha[4][4];
 int i=0,j=0,posicao=0,l,controle=0,a=0,lp=0,cp=0,verificador=0,contador=0;
    pontinhos();
    printf("\n");
    printf("JOGO DA VELHA\n");
    pontinhos();
    printf("\n");
    printf("Seja bem vindo !!!\n");
    pontinhos();
    printf("\n");
    printf("Bom jogo !\n");
    pontinhos();
    printf("\n");
  for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            velha[i][j]=0;
        }
    }
  for(i=0;i<4;i++){
        for(j=0;j<4;j++){
           /*coluna*/
           velha[0][0]=0;
           velha[1][0]='A';
           velha[2][0]='B';
           velha[3][0]='C';
            /*linha*/
            velha[0][1]='1';
            velha[0][2]='2';
            velha[0][3]='3';
        }
    }
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            velha[i][j]='-';
        }
        
    }
    //imprine a velha
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%c ",velha[i][j]);
        }
        printf(" \n");
    }
    /*inico do looping*/
    while(a<7){
        /*colocar o X*/
        printf("digite as cooredenadas\n");
        scanf("%c",&linha);
        scanf("%d",&posicao);
        printf("\n");
        if(linha=='A' || linha=='a'){
                l=1;
            }
        if(linha=='B' || linha=='b'){
                l=2;
            }
        if(linha=='C' || linha=='c'){
                l=3;
            }
        for(i=l;i<=l;i++){
            for(j=posicao;j<=posicao;j++){
                velha[i][j]='x';
             //    verificar(velha);
            }
        }
                printf("\n");
        /*para colocar a bolinha*/
        srand(time(0));
        while(verificador==0){
                lp=rand()%4;
                cp=rand()%4;
            for(i=lp;i<=lp;i++){
                for(j=cp;j<=cp;j++){
                    if(velha[i][j]=='x' || velha[i][j]==velha[1][0] || velha[i][j]==velha[2][0] || velha[i][j]==velha[3][0] || velha[i][j]==velha[0][1] ||velha[i][j]==velha[0][2] || velha[i][j]==velha[0][3] || velha[i][j]==velha[0][0]){
                        verificar(velha);
                        controle=verificar(velha);
                         verificador=0;
                         if(controle==9){a=9;}
                }
                    else{
                         velha[i][j]='O';
                         verificar(velha);
                         verificador=1;
                         if(controle==9){a=9;}
                        }
                    }   
                }
            }
                verificador=0;
          
           for(i=0;i<4;i++){
             for(j=0;j<4;j++){
                printf("%c ",velha[i][j]);
              }
               printf(" \n");
           }
           a++;
    }
    /*if(contador!=0){
            printf("DEU")
    }*/
}

