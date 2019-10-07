#include<stdio.h>
#include <stdlib.h>

int main(){
    FILE *dado;
    int i=0;
struct aluno_st{
    char nome[50];
    int matricula;
    char email[50];
    float nota_final;
};
struct aluno_st aluno;
scanf("%s",aluno.nome);
scanf("%d",&aluno.matricula);
scanf("%s",aluno.email);
scanf("%f",&aluno.nota_final);
dado=fopen("arquivo.txt","a");
if(dado==NULL){
    printf("ERRO AO ABRIR O ARQUIVO\n");
}
else{
    fprintf(dado," Nome: %s\n Matricula: %d\n Email: %s\n Media: %.2f\n **********\n\n",aluno.nome,aluno.matricula,aluno.email,aluno.nota_final);//coloca os negocio dentro do arquivo
    printf("salvo\n");
}
fclose(dado);
FILE *notasBaixas;
notasBaixas=fopen("arquivo.txt","r");
while((fscanf(dado,"%s %f",aluno.nome,&aluno.nota_final)!=EOF)){
        if(aluno.nota_final>60){
            printf("%s\n",aluno.nome);
            
        }
        i++;
    }
    fclose(notasBaixas);
}