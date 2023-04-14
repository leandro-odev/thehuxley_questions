#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int loop(double total, int x)
{
    int n;
    scanf("%d", &n);
    if(n == 999)
    {
        printf("%.2lf\n", total);
        printf("%d", x);
        return 0;
    }
    
    if(n>2)
    {
        x++;
        total += 12.89 * (n-2);
    }
    return loop(total, x);
}

int main()
{

    loop(0, 0);

    return 0;
}