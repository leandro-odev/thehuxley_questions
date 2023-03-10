#include <stdio.h>

int main() {
    
    int a,b,c;
    scanf("%d %d %d", &a, &b,&c);
    
    if(a==b && a==c){
        printf("1");
    }
    else if(a!=b && a!=c && b!=c){
        printf("2");
    }
    else if(a==b && a!=c || b==c && b!=a || c==a && c!=b){
        printf("3");
    }
    
	return 0;
}