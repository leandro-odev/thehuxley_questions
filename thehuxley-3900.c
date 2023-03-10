#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int conta(int num)
{
    num = num/10;
    
    if(num<1)
    {
        return printf("\n");
    }
    else
    {
        if(num%2 == 0)
        {
            printf(".");
        }
        else
        {
            printf("-");
        }
        return conta(num);
    }
}

int main() {
    
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    
    scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);
    
    num1 = num1 * 10;
    num2 = num2 * 10;
    num3 = num3 * 10;
    num4 = num4 * 10;
    num5 = num5 * 10;
    num6 = num6 * 10;
    num7 = num7 * 10;
    num8 = num8 * 10;
    num9 = num9 * 10;
    num10 = num10 * 10;
    
    conta(num1);
    conta(num2);
    conta(num3);
    conta(num4);
    conta(num5);
    conta(num6);
    conta(num7);
    conta(num8);
    conta(num9);
    conta(num10);
    
    
	return 0;
}