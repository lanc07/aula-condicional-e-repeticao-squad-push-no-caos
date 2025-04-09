#include <stdio.h>

int main() {
    int numero;
    while (1) { 
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &numero);
        if (numero >= 1 && numero <= 10) {
            break; 
        }
        printf("Número inválido! Tente novamente.\n");
        continue;
    }
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}