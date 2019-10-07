#include<stdio.h>
#include<string.h>

int main(){
    char risada[51];
    scanf("%s",risada);
    if(strstr(risada,"riajkjdhhihhjak")!=0 || strstr(risada,"huehuehue")!=0){
        printf("N\n");
    }
    else{
        printf("S\n");
    }
}