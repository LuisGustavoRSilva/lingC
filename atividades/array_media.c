#include <stdio.h>

int main(){

    int valores[]= {13,8,23,95,47,14,10,45,165};
    int soma = 0;
    int div;

        for (int i = 0 ; i < 9 ; i++){
            soma += valores[i];
            div = soma / 9;
        }
        printf("A soma dos elementos no array é %d\n", div);
        return 0;
}