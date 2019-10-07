#include<stdio.h>

int main(){
    float number;
    scanf("%f",&number);
    if(number>=0 && number<=25){
        printf("[0,25]\n");
    }
    else if(number>25 && number<=50){
             printf("(25,50]\n");
    }
    else if(number>50 && number<=75){
                printf("(50,75]\n");
    }
    else if(number>75&&number<=100){
        printf("(75,100\n");
    }
    else if(number<0){
        printf("Fora de intervalo\n");
    }
    

}