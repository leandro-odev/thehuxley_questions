#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float loop(float va, float total, int cont)
{
    float qe, pe;
    if(cont>=3)
    {
        float x=20;
        total+=va;
        printf("%.2f\n", total);
        printf("%.2f\n", total/21);
        return 0;
    }
    scanf("%f %f", &qe, &pe);

    total += qe*pe;

    return loop(va, total, cont+1);
}

int main()
{
    float va;
    scanf("%f", &va);

    loop(va, 0, 0);

    return 0;
}