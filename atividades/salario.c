#include <stdio.h>

int main(){
    int salariobruto;
    int valetrans;
    int inss;
    int fgts;
    int totaldesc;
    int salarioliquido;

    printf("Digite seu salário BRUTO (numeros inteiros e sem simbulos EX: 1200) e pressione ENTER\n");
    scanf("%d",&salariobruto);
    
    valetrans = salariobruto * 0.06;
    inss = salariobruto * 0.07;
    fgts = salariobruto * 0.08;
    totaldesc = valetrans + inss + fgts;
    salarioliquido = salariobruto - totaldesc;

    printf("Total de desconto:R$%d\n",totaldesc);
    printf("Salario liquido: R$%d\n",salarioliquido);
    return 0;
}