#include <stdio.h>

int main(){
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    int media;
    printf("Digite a PRIMEIRA nota e pressione ENTER\n");
    scanf("%d",&nota1);
    printf("Digite a SEGUNDA nota e presisone ENTER\n");
    scanf("%d",&nota2);
    printf("Digite a TERCEIRA nota e pressione ENTER\n");
    scanf("%d",&nota3);
    printf("Digite a QUARTA nota e pressione ENTER\n");
    scanf("%d",&nota4);

    media = nota1 + nota2 + nota3 + nota4 / 4;

    printf("A media das notas é %d\n",nota1,nota2,nota3,nota4,media);

    return 0;
}