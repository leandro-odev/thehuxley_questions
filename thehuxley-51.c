#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int code, amount;
    float price;
    scanf("%d %d", &code, &amount);

    if(code==1){
        price = amount * 5.3;
    }
    else if(code==2){
        price = amount * 6;
    }
    else if(code==3){
        price = amount * 3.2;
    }
    else if(code==4){
        price = amount * 2.5;
    }
    
    if(amount>=15){
        price = price * 0.85;
    }
    else if(price>=40){
        price = price * 0.85;
    }
    
    printf("R$ %.2f", price);
    
	return 0;
}