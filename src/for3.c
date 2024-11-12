#include <stdio.h>

int main(){
    int contador = 0;

    for (int ano = 1930 ; ano <= 2024; ano++) {
        if (ano % 4 == 0){
            printf("%d\n", ano);
            contador++;
        }
    }
    printf("\nQuantidade de anos bissextos %d\n", contador);

    return 0;
}