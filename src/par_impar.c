#include <stdio.h>

int main(){
    int n;
    printf("DIgite um numero e pressione enter:\n");
    scanf("%d",&n);

    if(n % 2 == 0 ){
        printf("O numero %d é PAR\n");
    }
    else{
        printf("O numero %d é impar\n");
    }
    return 0;
}