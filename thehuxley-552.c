#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int euclides(int a, int b){
    if(b==0)
    {
        return a;
    }
    else
    {
        return euclides(b, a%b);
    }
}

void loop(int a, int b, int vasco)
{
    scanf("%d %d", &a, &b);
    vasco = vasco - 1;
    
    if(vasco==0)
    {
        printf("MDC(%d,%d) = %d\n", a, b, euclides(a,b));
        return;
    }
    else
    {
        printf("MDC(%d,%d) = %d\n", a, b, euclides(a,b));
        return loop(a, b, vasco);
    }
}


int main() {
    
    int a, b, vasco;
    scanf("%d", &vasco);
    loop(a,b,vasco);
    
	return 0;
}