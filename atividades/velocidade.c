#include <stdio.h>

int main(){
    int kminicial;
    int kmfinal;
    int tempoinicial;
    int tempofinal;
    int velmedia;

    printf("Digite a quilômetragem (KM) inicial e pressione ENTER\n");
    scanf("%d",&kminicial);
    printf("Digite a quilômetragem (KM) final\n");
    scanf("%d",&kmfinal);
    printf("Digite o tempo INICIAL (em minutos) e pressione ENTER\n");
    scanf("%d",&tempoinicial);
    printf("Digite o tempo FINAL (em minutos) e pressione ENTER\n");
    scanf("%d",&tempofinal);

    velmedia = kmfinal - kminicial / tempofinal - tempoinicial;

    printf("A velocidade media escalar é %d\n",velmedia);
    return 0;
}