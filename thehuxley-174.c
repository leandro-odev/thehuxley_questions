#include <stdio.h>

int main(){
    int ca, x, y;
    scanf("%d", &ca);

    if(ca<=10){
        printf("7");

    } else{
        if(ca<=30){
            x = ca-10;
            y= 7 + x;
            printf("%d", y);

        } else if(ca<=100){
            x = (ca-30)*2;
            y = 7 + 20 + x;
            printf("%d", y);

        } else{
            x = (ca-100)*5;
            y = 7 + 20 + 140 + x;
            printf("%d", y);
            
        }

    }

    return 0;
}