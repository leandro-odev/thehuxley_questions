#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    
    if(x == 0 && y == 1){
        printf("1");
    }
    else{
        printf("0");
    }
    
	return 0;
}