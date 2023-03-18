#include <stdio.h>

void loop(int num, char let, int cont, int cap)
{

    if(cont!=7)
    {
        scanf("%d %c", &num, &let);
        
        if(let == 'P' || let == 'p')
        {
            cap = cap + (10*num);
        }
        else if(let == 'G' || let == 'g')
        {
            cap = cap + (16*num);
        }

        loop(num, let, cont+1, cap);
    }

    else
    {
        printf("%d\n", cap);
        printf("%d\n", (cap*2)/7);
    }

}

int main()
{
    int num, cont=0, cap=0;
    char let;
    loop(num, let, cont, cap);
}