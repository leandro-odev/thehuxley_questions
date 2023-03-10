#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l,p;
    scanf("%d", &l);
    if(l>=1 && l<=20){
        p = 20 + l*l*l;
        printf("Potencia de : %d W",p);
    }
    else if(l>=21 && l<=40){
        p = 8000 + (l-10)*(l-10);
        printf("Potencia de : %d W",p);
    }
    else if(l>=41 && l<=60){
        p = 9000 + 5*l;
        printf("Potencia de : %d W",p);
    }
    else if(l>=61 && l<=80){
        p = 9300 + 2*l;
        printf("Potencia de : %d W",p);
    }
    else if(l>=81 && l<=100){
        p = 9500 + l;
        printf("Potencia de : %d W",p);
    }
    
    
	return 0;
}