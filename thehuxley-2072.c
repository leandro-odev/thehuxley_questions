#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void loop(int num, int x, int y, int cont, int moe, int lado)
{
    if(num == cont)
    {
        printf("%d\n", moe);
        return;
    }

    else
    {
        if(y > x) lado = 1;
        else if(x > y) lado = 2;

        char dir;
        scanf(" %c", &dir);

        if(x == y)
        {
            if(lado == 1)
            {
                if(dir == 'D') moe++;
            }
            else if(lado == 2)
            {
                if(dir == 'C') moe++;
            }
        }
            
        if (dir == 'D') x++;
		else if(dir == 'C') y++;

        loop(num, x, y, cont+1, moe, lado);
        }
        
    }

int main()
{
    int num, x = 0, y = 0, cont = 0, moe, lado;

    scanf("%d", &num);

    loop(num, x, y, cont, moe, lado);
    
    return 0;

}