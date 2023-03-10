#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ContaDigitosPares(int x, int y){
    x = x/10;
    
    if(x==0){
        return y;
    } else if(x%2 == 0){
        y= y+1;
        return ContaDigitosPares(x, y);
    } else{
        return ContaDigitosPares(x, y);
    }
    
}

int main() {
    
    int num, cont;
    scanf("%d", &num);
    
    cont = 0;
    num = num * 10;
    
    printf("%d", ContaDigitosPares(num, cont));
    
	return 0;
}