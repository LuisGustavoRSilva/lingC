#include <stdio.h>

int main(){
    int s = 0; //ficará no sentinela até voce digitar o número que ele deseja.
    while (s != 20){
        printf("Digite um número %d\n");
        scanf("%d", &s);
    }
    return 0;
}