#include<stdio.h>

int main(){
    int l , c,very,v;
    scanf("%d %d",&l,&c);
        v=l%2;
        very=c%2;
    if(v==0 && very==1 || v==1 && very==0 || v==1 && very==1){
        printf("0\n");
    }
    else if(v==0 && very==0 || v!=1 || very!=1){
        printf("1\n");
    }
}