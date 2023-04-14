#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int loop(double a, double b, int cont, int looping)
{
    if(looping>5)
    {
        printf("%d", cont);
        return 0;
    }
    scanf("%lf %lf", &a, &b);

    if(b<=a*0.8)
    {
        return loop(a, b, cont+1, looping+1);
    }
    else
    {
        return loop(a, b, cont, looping+1);
    }
}

int main()
{
    
    loop(0, 0, 0, 1);

    return 0;
}