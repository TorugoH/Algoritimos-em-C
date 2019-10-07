#include<stdio.h>
/*VITOR HUGO SILVA RIBEIRO
201811130321
INF 1A 2019

*/
int main(){
float a,b,c,aux=0;
scanf("%f %f %f",&a,&b,&c);
if(a<b){
	aux= a;
	a= b;
	b= aux;		
	}
if(a<c){
	aux=a;
	a=c;
	c=aux;
	}
if(b<c){
	aux=b;
	b=c;
	c=aux;
	}
if(a>=b+c){
	printf("NAO FORMA TRIANGULO\n");
		}
else{
	if(a*a==b*b+c*c){
		    printf("TRIANGULO RETANGULO\n");
			}
	if( a*a > b*b + c*c){
				printf("TRIANGULO ObTUSANGULO\n");
			}
	if( a*a < b*b + c*c){
				printf("TRIANGULO AcUTANGULO\n");
			}
	if(a==b && a==c && b==c){
				printf("TRIANGULO EQUILATERO\n");
			}
	else if(a==b || b==c || c==a){
				printf("TRIANGULO ISOScELES\n");
			}
		}
        return 0;
}
