#include <stdio.h>

int fatorial(int x)
{

    if(x<=1)
    {
        return 1;
    }
    else
    {
        return x *fatorial(x-1);
    }
}

void loop(int x){

    scanf("%d", &x);

    if(x==-1)
    {

        return;
    }
    else
    {

        printf("%d\n", fatorial(x));
        return loop(x);
    }

}

int main() {


    int vasco;
    vasco = 0;
    loop(vasco);

	return 0;
}