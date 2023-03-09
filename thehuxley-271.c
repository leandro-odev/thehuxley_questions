#include <stdio.h>

int main() {
    double raio;
    scanf("%lf", &raio);
    printf("Area = %.4lf\n", 3.14159*(raio/100)*(raio/100));
	return 0;
}