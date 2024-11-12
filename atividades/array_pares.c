#include <stdio.h>

int main(){

    int n[]= {33,8,7,11,54,77,13,16};

    printf("Números pares do array:\n");
        for (int i = 0 ; i < 8 ; i++){
            if (n[i] % 2 == 0){
                printf("%d\n", n[i]);
            }
        }
        printf("\n");
        return 0;
}