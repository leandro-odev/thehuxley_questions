#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(){

    double p, r;
    double pr, ap, v1, v2, v3, v4, v5;
    scanf("%lf %lf", &p, &r);

    pr = (r * 100)/p;
    printf("%.2lf%%", pr);
    
    if(pr<20){
        printf(" 4.40%%");
        printf(" Pessimo");
    } else if(pr<40){
        printf(" 31.65%%");
        printf(" Ruim");
    } else if(pr<60){
        printf(" 56.82%%");
        printf(" Bom");
    } else if(pr<80){
        printf(" 80.00%%");
        printf(" Muito Bom");
    } else if(pr<=100){
        printf(" 94.00%%");
        printf(" Excelente");
    }

    return 0;
}