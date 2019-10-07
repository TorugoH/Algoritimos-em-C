#include <stdio.h>
/*vitor hugo silva ribeiro
    201811130321
    INF 1A 2019
*/
int main(){
int charr, charr2, dis1, dis2;
double vel1,vel2,convercao_charr=0.0,convercao_charr2=0.0, resultado=0.0, resultado2=0.0;
scanf("%d %d %lf",&charr,&dis1, &vel1);
scanf("%d %d %lf",&charr2,&dis2, &vel2);
    convercao_charr=vel1/3.6;
    convercao_charr2=vel2/3.6;
    resultado= dis1/convercao_charr; 
    resultado2= dis2/convercao_charr2; 
  if(resultado>resultado2){
      printf("%d\n", charr2);
     }
 else if(resultado<resultado2){
      printf("%d\n", charr);
    }
 return 0;
}