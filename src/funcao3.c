#include <stdio.h>
#include "../lib/calculos.h"

int main(){
    int valores[] = {5,23,5,7,10,4,12,30};
    printf("O resoltado da some é %d\n", somaarray(valores,8));
    printf("Oresultado da media é %d\n", mediaarray(valores, 8));
    printf("O maior valor é %d\n", maiorvalor(valores,8));
    return 0;
}