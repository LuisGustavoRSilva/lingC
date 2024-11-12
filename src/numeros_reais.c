#include <stdio.h>

int main(){
    // o tipo float é para trabalhar com casas decimais.
    float n1,n2,soma,divisao;
    printf("Digite um numero e tecle Enter:\n");
    scanf("%f",&n1);
    printf("Digite outro numero e aperte Enter\n");
    scanf("%f",&n2);

    soma = n1 + n2;
    divisao = n1 / n2;

    printf("O resultado da some é %.2f\n",soma);
    printf("O resultado d adivisão é %.2f\n",divisao);
    return 0;
}