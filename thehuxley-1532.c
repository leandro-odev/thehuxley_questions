#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char type;
    float liters, value;
    scanf("%f %c", &liters, &type);
    
    if(type == 'A'){
        value = liters * 1.9;
        if(liters <= 20){
            value = value * 0.97;
            printf("R$ %.2f", value);
        }
        else{
            value = value * 0.95;
            printf("R$ %.2f", value);
        }
    }
    
    
    else if(type == 'D'){
        value = liters * 1.66;
        if (liters <= 25){
            printf("R$ %.2f", value);
        }
        else{
            value = value * 0.96;
            printf("R$ %.2f", value);
        }
    }
    
    
    
    else if(type == 'G'){
        value = liters * 2.5;
        if(liters <= 20){
            value = value * 0.96;
            printf("R$ %.2f", value);
        }
        else{
            value = value * 0.94;
            printf("R$ %.2f", value);
        }
    }
    
    
	return 0;
}