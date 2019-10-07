#include <stdio.h>
#include<string.h>
int main(){
    char led[61];
    long long unsigned int alterna;
    int teste, len,i;
    scanf("%d",&teste);
    while(teste--){
        scanf("%s %llu", led, &alterna);
        len = strlen(led);
        for (i=0;i<=len-1;i++){
            switch(led[i]) {
                case 'X':
                    if(alterna%2==1){
                        led[i]='O';
                    }else {
                        led[i]='X';
                        }
                    alterna=alterna/2;
                    break;
                case 'O':
                    if(alterna%2==1){
                        led[i]='X';
                        alterna++;
                    }else{ 
                        led[i]='O';
                        }
                    alterna = alterna/2;
            }
        }
        printf("%s\n", led);
    }
    return 0;
}