#include <stdio.h>
int main(){

int postium,postidois,postitrs;
scanf("%d %d %d",&postium,&postidois,&postitrs);
    if(postium>postidois && postidois>postitrs){
             printf("%d\n", postidois);
         }
    else if(postidois>postium && postium>postitrs){
            printf("%d\n", postium);
        }
    else if(postium>c && c>postidois){
            printf("%d\n", postitrs);
        }
    else if(postitrs>postidois && postidois>postium){
            printf("%d\n", postidois);
        }
    else if(postidois>postitrs && postitrs>postium){
            printf("%d\n", postitrs);
        }
    else if(postitrs>postium && postium>postidois){
            printf("%d\n", postium);
        }
return 0;
}