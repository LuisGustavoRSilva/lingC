#include <stdio.h>

int main(){
    int n1;
    int n2;
    int rs;
    printf("Digite um numero \n");
    // alocar um numero digitado pelo usuario no endereço de memoriada variavel n1
    scanf("%d",&n1);
    printf("digite outro numero: \n");
    scanf("%d",&n2);
    // realizar a soma entre o n1 e o n2
    rs = n1+n2;
    // exibir resultado da soma
    printf("O resultado é %d\n",rs);
    return 0;
}