#include <stdio.h>

int main() {
    
    float a, b, c, x1, x2, del;
    scanf("%f %f %f", &a, &b, &c);
    del = b*b -4*a*c;
    
    if(a==0){
        printf("NEESG");
    }
    else{
        if(del<0){
            printf("NRR");
        }
        else if(del==0){
            x1 = -b/(2*a);
            //printf("NEESG\n");
            printf("%.2f\n", x1);
            printf("%.2f\n", x1);
        }
        else{
            x1 = (-b-sqrt(del))/(2*a);
            x2 = (-b+sqrt(del))/(2*a);
            printf("%.2f\n", x2);
            printf("%.2f\n", x1);
        }
    }
    
	return 0;
}