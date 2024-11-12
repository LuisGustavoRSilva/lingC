#include <stdio.h>
#include "../lib/vogal.h"

void verificar_vogal(char letra){
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ){
        printf("Essa letra é uma vogal\n");
    }else{
        printf("Essa letra NÃO é uma consoante\n");
    }
}
int main(){
    char letra;
    printf("Digite uma letra e saiba se ela é vogal ou não:\n");
    scanf("%c", &letra);
    verificar_vogal(letra);
    return 0;
}