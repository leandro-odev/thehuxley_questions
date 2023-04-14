#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int loop(int maior, int a[], int ind)
{
    int n;
    scanf("%d", &n);

    if(n==0)
    {
        printf("%d", maior);
        return 0;
    }

    a[ind] = n;

    if(a[ind] > maior)
    {
        maior = a[ind];
    }

    return loop(maior, a, ind+1);

}

int main()
{
    int a[100];
    loop(0, a, 0);

    return 0;
}