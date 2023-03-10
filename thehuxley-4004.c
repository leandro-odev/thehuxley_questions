#include <stdio.h>

int main(){

    int ep, es;
    double fm;
    scanf("%d %d %lf", &ep, &es, &fm);

    if(ep==1 && es==1 || ep==3 && es==1){
        printf("Aumenta mais!\n");
    } else if(ep==1 && es==2 || ep==3 && es==2){
        printf("Legal\n");
    } else if(ep==2 && es==1){
        printf("Essa eh punk\n");
    } else if(ep==2 && es==2){
        printf("Hoje eu choro\n");
    }

    if(fm>=1 && fm<=4){
        printf(":'(");
    } else if(fm<=7){
        printf("^_^");
    } else{
        printf("=D");
    }

    return 0;
}