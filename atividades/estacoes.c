#include <stdio.h>

int main(){
    int verao;
    int outono;
    int inverno;
    int primavera;
    int mes;

    printf("Digite um número correspondente a algum mês do ano e pressione ENTER:");
    scanf("%d", &mes);

    if(mes == 12 || mes == 1 || mes == 2){
    printf("Este mês está no verão!!\n");
    }
    else if (mes == 3 || mes == 4 || mes ==5){
    printf("Este mês está no outono\n");
    }
    else if (mes == 6 || mes == 7 || mes == 8){
    printf("Este mês está no inverno!!\n");
    }
    else if (mes == 9 || mes == 10 || mes == 11){
    printf("Este mês está na primaveira!!\n");
    }
    else {
        printf("Mês INVALIDO por favor tente novamente digitando um número de 1 á 12.\n");
    }
    return 0;
}