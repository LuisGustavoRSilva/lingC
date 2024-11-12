#include <stdio.h>
#include "../lib/maior.h"

int maior(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int num1, num2;
    printf("Iremos comparar dois numeros que você digitar e mostrar o maior deles na sua tela!\n");
    printf("\n");
    printf("Digite o primeiro número:\n", num1);
    scanf("%d", &num1);
    printf("Digite o segundo número:\n", num2);
    scanf("%d", &num2);

    int resultado = maior(num1,num2);
    printf("O Maior numero é %d\n", resultado);

    return 0;
}