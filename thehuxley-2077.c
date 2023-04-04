#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int tri(int n, int i)
{
    if(i * (i+1) * (i+2) == n)
    {
        printf("%d * %d * %d = %d\n", i, i+1, i+2, n);
        return 1;
    }
    else if(i==n || n<=0)
    {
        return 0;
    }
    else
    {
    tri(n, i+1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    if(tri(n, 1))
    {
        printf("Verdadeiro");
    }
    else
    {
        printf("Falso");
    }
}