#include<stdio.h>
void quick(int vet[],int esq, int dir){
	int j=0,i=0;
	int pivo = esq,ch;         
    for(i=esq+1;i<=dir;i++){        
        j = i;                      
        if(vet[j] < vet[pivo]){     
            ch = vet[j];               
            while(j > pivo){           
                vet[j] = vet[j-1];      
                j--;                    
            }
            vet[j] = ch;               
            pivo++;                    
        }
    }
    if(pivo-1 >= esq){              
        quick(vet,esq,pivo-1);      
    }
    if(pivo+1 <= dir){              
        quick(vet,pivo+1,dir);      
    }
}
int main(){
	int tam=0,i=0;
	//printf("Informe o tamanho do seu vetor\n");
		//scanf("%d",&tam);
	int vetor[4];
	for(i=0;i<4;i++){
		scanf("%d",&vetor[i]);
	}
	quick(vetor,0,4);
	for(i=0;i<4;i++){
		printf("%d",vetor[i]);
	}
printf("\n");
}
