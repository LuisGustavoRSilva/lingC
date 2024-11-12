#include <stdio.h>

int main(){
    
    char nome[20];
    printf("Digite seu primeiro nome e pressione ENTER:\n");
    // FOi necessario utulizar o colchete para que o comando
    //scanf receba toda a cadeia de caracteres.
    // o elemento ^(circunflexo) foi usado para indicar onde começa
    // o primeiro caracter. e o \n, neste caso, esta sendo usado para ler
    // o espaço aplicado ao final é utilizado o caracter s(string)
    scanf("%[^\n]s", &nome);
    printf("Olá, %s. Seja Bem-Vindo\n",nome);

    return 0;
}