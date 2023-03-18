#include <stdio.h>

int primo(int n, int x)
{
    if(x==1)
    {
        return 1;
    }
    else {
        if(n%x == 0 || n == 1)
        {
            return 0;
        }
        else
        {
            return primo(n, x-1);
        }
    }
}

int loop(){
    int n;
    scanf("%d", &n);
    
    if(n==-1)
    {
        return 0;
    }
    else
    {
        if(n-1 == 0)
        {
            printf("0\n");
        }
        else{
        printf("%d\n", primo(n, n-1));
        }
        return loop();
    }
}

int main()
{
    loop();
    
    return 0;
}