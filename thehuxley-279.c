#include <stdio.h>

int main() {
    
    int num, hour;
    float val;
    scanf("%d %d %f", &num, &hour, &val);
    
    val = hour * val;
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = R$ %.2f\n", val);
    
	return 0;
}