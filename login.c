/*Crie um programa que:
Solicite ao usuário uma senha numérica de 4 dígitos.
Use do-while para repetir a solicitação até que o valor correto seja digitado (senha padrão: 4321).
Exiba mensagem de sucesso ao final.*/


#include <stdio.h>

int main() {
    int senha;
    int senha_correta = 4321;

    do {
        printf("Digite a senha numerica de 4 dígitos: ");
        scanf("%d", &senha);

        if (senha != senha_correta) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (senha != senha_correta);

    printf("Senha correta! Seja Bem Vindo!.\n");

    return 0;
}