// este programa obtem um numero do usuario e diz se é par, exibindo uma mensagem em tela

#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero e pressione enter:\n");
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("O valor %d é par\n");
    }
    return 0;
}
