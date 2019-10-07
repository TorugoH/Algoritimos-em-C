#include<stdio.h>
#include<string.h>
/*vitor hugo silva ribeiro
	201811130321
	inf 1a 2019*/
int main(){
    char especie[22],classe[22],tipo[22];
    scanf("%s",especie);
    if(strcmp(especie,"vertebrado")){
        scanf("%s",classe);
    
        if(strcmp(classe,"ave")){
           scanf("%s",tipo);
        }   
           if(strcmp(tipo,"carnivoro")){
               printf("aguia\n");
           }  
           else if(strcmp(tipo,"onivoro")){
               printf("pomba\n");
           }
        
        else if(strcmp(classe,"mamifero")){
            scanf("%s",tipo);
        }
            if(strcmp(tipo,"onivoro")){
                printf("homem\n");
            }
            else if(strcmp(tipo,"herbivoro")){
                printf("vaca\n");
            }
    }


    
    
    else if(strcmp(especie,"invertebrado")){
            scanf("%s",classe);
            }
            if(strcmp(classe,"inseto")){
                scanf("%s",tipo);
            }
                if(strcmp(tipo,"hematofago")){
                    printf("pulga\n");
                }
                else if(strcmp(tipo,"herbivoro")){
                        printf("lagarta\n");
                }
            
         else if(strcmp(classe,"anelideo")){
              scanf("%s",tipo);
            }
                if(strcmp(tipo,"hamatofago")){
                    printf("sanguessuga\n");
                }
                else if(strcmp(tipo,"onivoro")){
                    printf("minhoca\n");
                }
               
    
    return 0;
}