#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float val1, val2, aum;
    scanf("%f", &val1);
    printf("%.2f\n", val1);
    
    if(val1<=280){
        val2 = val1 * 1.2;
        aum = val2 - val1;
        printf("20\n");
        printf("%.2f\n", aum);
        printf("%.2f\n", val2);
    }
    else if(val1<=700){
        val2 = val1 * 1.15;
        aum = val2 - val1;
        printf("15\n");
        printf("%.2f\n", aum);
        printf("%.2f\n", val2);
    }
    else if(val1<1500){
        val2 = val1 * 1.1;
        aum = val2 - val1;
        printf("10\n");
        printf("%.2f\n", aum);
        printf("%.2f\n", val2);
    }
    else if(val1>=1500){
        val2 = val1 * 1.05;
        aum = val2 - val1;
        printf("5\n");
        printf("%.2f\n", aum);
        printf("%.2f\n", val2);
    }
    
	return 0;
}