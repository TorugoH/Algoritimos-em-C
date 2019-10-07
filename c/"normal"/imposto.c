#include<stdio.h>
/*vitor hugo silva ribeiro
201811130321
INF 1A 2019
*/
int main(){
   float renda,imposto=0;
   scanf("%f",&renda);
    if(renda<=2000.00){
    	printf("Isento\n");
	  }
    else if(renda<=3000.00){	
      imposto=(renda-2000.00)*0.08;
      printf("R$ %.2f\n",imposto);	
  	}
    else if(renda<=4500.00){
      imposto=(renda-3000.00)*0.18+(1000*0.08);
      printf("R$ %.2f\n",imposto);
    }
    else if(renda>=4500.01){
      imposto=(renda-4500.00)*0.28+(1500*0.18)+(1000*0.08);
      printf("R$ %.2f\n",imposto);
    }
    return 0;
}
