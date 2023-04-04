#include <stdio.h>

int rec(int a, int b, int c){

    if(b==c)
    {
        return a;
    }
    else if(c%2==0)
    {
        return rec(a+3, b, c+1);
    }
    else
    {
        return rec(a+a%5, b, c+1);
    }
}

int main(){

    int t, n, cont = 0;
    scanf ("%d %d", &n, &t);

    printf("%d", rec(n, t, cont));

    return 0;
}