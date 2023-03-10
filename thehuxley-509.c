#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(a==b && a==c){
        printf("equilatero");
    } else if(a==b || a==c || b==c){
        printf("isosceles");
    } else{
        printf("escaleno");
    }
    
	return 0;
}