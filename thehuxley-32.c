#include <stdio.h>

int main() {
    float far;
    scanf("%f", &far);
    printf("%.2f", (far-32)*5/9);
	return 0;
}