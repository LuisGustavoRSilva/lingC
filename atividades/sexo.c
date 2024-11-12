#include <stdio.h>
#include "../lib/sexo.h"

void verificar_sexo(char letra){
    if (letra == 'F' || letra == 'f'){
        printf("F - Feminino\n");
    }else if (letra == 'M' || letra == 'm'){
        printf("M - Masculino\n");
    }else{
        printf("Sexo inválido, Tente novamente\n");
    }
}
int main(){
    char letra;
    printf("Digite seu sexo (F ou M):");
    scanf("%c", &letra);
    verificar_sexo(letra);
    return 0;
}