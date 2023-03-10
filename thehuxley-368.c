#include <stdio.h>

int main() {
    
    float val;
    scanf("%f", &val);
    
    if(val>500){
        val = val * 1.1;
        printf("%.2f", val);
    }
    else if(val>300){
        val = val * 1.07;
        printf("%.2f", val);
    }
    else{
        val = val * 1.05;
        printf("%.2f", val);
    }
    
	return 0;
}