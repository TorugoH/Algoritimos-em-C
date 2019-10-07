#include<stdio.h>
/*
vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/
int main(){
    float a,b,c,d,media=0,novoexame=0,novanota;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    media=((a*2)+(b*3)+(c*4)+(d*1))/10;
    if(media>=7.0){
        printf("Media: %.1f\n",media);
        printf("Aluno aprovado.\n");
    }
    else if(media<5.0){
        printf("Media: %.1f\n",media);
        printf("Aluno reprovado.\n");
    }
    else if(media>=5.0){
        printf("Media: %.1f\n",media);
        printf("Aluno em exame.\n");
        scanf("%f",&novanota);
        printf("Nota do exame: %.1f\n",novanota);
        novoexame=(novanota+media)/2;
        if(novoexame>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",novoexame);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",novoexame);   
        }
        
    }
    return 0;
}