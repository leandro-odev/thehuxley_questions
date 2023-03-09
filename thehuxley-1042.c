#include <stdio.h>

int main() {
    int years;
    scanf("%d", &years);
    int seconds = years * 365 * 24 * 60 * 60;
    printf("%d", seconds);
    
	return 0;
}