#include<stdio.h>
/*
    vitor hugo silva ribeiro
    201811130321
    INF1A 2019 
*/
int main(){
    int par[5],impar[5],p=0,im=0,i=0,n=0,cont=0;
    for(i=0;i<15;i++){
        scanf("%d",&n);
        if(n%2==0){
            par[p]=n;
            p++;
            if(p==5){
                for(cont=0;cont<5;cont++){
                    printf("par[%d] = %d\n",cont,par[cont]);
                    p=0;
                }
            }
        }else{
            par[im]=n;
            im++;
            if(p==5){
                for(cont=0;cont<5;cont++){
                       printf("impar[%d] = %d\n",cont,impar[cont]);
                    im=0;
                }
            }
        }
    }
          for(cont=0;cont<im;cont++){
                    printf("impar[%d] = %d\n",cont,impar[cont]);
          }
            for(cont=0;cont<p;cont++){
                    printf("par[%d] = %d\n",cont,par[cont]);
            }
    return 0; 
}