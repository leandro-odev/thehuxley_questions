#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ordernar2(float alturas[], int i, int n)
{
    if(i < n-1)
    {
        if(alturas[i] > alturas[i+1])
        {
            float auxiliar = alturas[i];
            alturas[i] = alturas[i+1];
            alturas[i+1] = auxiliar;
        }
        ordernar2(alturas, i+1, n);
    }

}

void ordernar1(float alturas[], int i, int n)
{
    if(i==n)
    {
        return;
    }

    ordernar2(alturas, i, n);
    ordernar1(alturas, i, n-1);
}

int main()
{
    float alturas[4];

    scanf("%f %f %f %f", &alturas[0], &alturas[1], &alturas[2], &alturas[3]);

    ordernar1(alturas, 0, 4);
    
    printf("%.2f\n%.2f\n%.2f\n%.2f", alturas[0], alturas[2], alturas[3], alturas[1]);

    return 0;
}