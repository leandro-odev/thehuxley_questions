#include <stdio.h>

int main() {
    
    float vasco, num1, num2, num3;
    scanf("%f %f %f", &num1, &num2, &num3);
    
    vasco = (num1 + num2 + num3)/3;
    
    if(vasco>=70 && vasco<=100){
        printf("A media do aluno foi %.2f e ele foi APROVADO", vasco);
    }
    else if(vasco>0 && vasco<40){
        printf("A media do aluno foi %.2f e ele foi REPROVADO", vasco);
    }
    else if(vasco>=40 && vasco<70){
        printf("A media do aluno foi %.2f e ele foi FINAL", vasco);
    }
    else{
        printf("Media invalida");
    }
    
	return 0;
}