#include <stdio.h>

int main(){

    double sal, val, x;
    scanf("%lf %lf", &sal, &val);

    x = (sal*0.3) - val;
    if(x>0){
        printf("%.2lf", x);
    } else {
        printf("0.00");
    }
    return 0;
}