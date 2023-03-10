#include <stdio.h>

int main() {
    int yo;
    scanf("%d", &yo);
    if(yo<16){
        printf("nao eleitor");
    }
    else if(yo>=16 && yo<18 || yo>65){
        printf("eleitor facultativo");
    }
    else if(yo>=18){
        printf("eleitor obrigatorio");
    }
    
    
	return 0;
}