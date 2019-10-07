#include <stdio.h>

#include<string.h>
/*vontagem seria o tamanho da corrente quando ela ta passando 0 seria quando n ha movimento em determinada regio,tem q colocar
 a frequencia de carga;
 40 seria a temperatura da regiao do corpo onde ele ta enconstando;
 os printf seria como se fosse a mensagem para o sistema nervoso;

*/
//função para dizer com esta a temperatura
 void temperatura(){
                int temperatura;
                printf("ativo vamos ver a temperatura\n");
                    scanf("%d",&temperatura);
                    //neuro.temperatura=tempera;
            
        if(temperatura>=38){
            printf("Ta encostano no quente tira a mao\n");
        }
        else if(temperatura>=27 && temperatura<=37){
            printf("temperarura ta normal\n");
        }
    }
int main(){
/* struct so para ficar bonito */
 struct neuro {
        int votagem;
        int temperatura;
        char emocao[10];
    }neuro;
    int i=0,tempera;
    printf("Sensor me informe o estado do organismo\n");

    scanf("%d",&neuro.votagem);
    if(neuro.votagem==0){
        printf("Esta dormindo\n");
            }
        if(neuro.votagem!=0){
             temperatura();
            }         
  
         
}

