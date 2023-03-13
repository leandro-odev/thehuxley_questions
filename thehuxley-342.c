#include <stdio.h>

int divisor(int num, int val, int cont)
{
    if(val==0)
    {
        return cont;
    }
    else if(num%val == 0 && val%3==0)
    {
        cont++;
    }
    divisor(num, val-1, cont);
}

int main()
{
    int x, y, z=0;
    scanf("%d", &x);
    y = x;

    if(divisor(x, y, z)==0)
    {
        printf("O numero nao possui divisores multiplos de 3!");
    }
    else
    {
        printf("%d", divisor(x, y, z));
    }
    
    return 0;
}