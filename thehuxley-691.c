#include <stdio.h>

#define N 3

int main() {
    int x,y;
    int l[N];
    scanf("%d %d", &x,&y);
    l[0]=x;
    l[1]=y;
    l[2]=0;
    if(l[0]>l[1]){
        printf("%d %d", l[1], l[0]);
    }
    else if(l[0]<l[1]){
        printf("%d %d", l[0], l[1]);
    }
    else{
        printf("%d %d", l[0], l[1]);
    }
    
	return 0;
}