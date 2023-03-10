#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int x, y;
    scanf("%d %d", &x ,&y);
    int mec = y/x;
    if(mec<=8){
        printf("A");
    }
    else if(mec>=9 && mec<=12){
    printf("B");
    }
    else if(mec>=13 && mec<=18){
        printf("C");
    }
    else if(mec>18){
        printf("D");
    }
    
	return 0;
}