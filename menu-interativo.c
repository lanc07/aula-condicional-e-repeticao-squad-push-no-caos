#include <stdio.h>

void verificacaoImparOuPar()
{
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("Esse número é par\n");
    }
    else
    {
        printf("Esse número é impar\n");
    }
}

void imprimirNumeros()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    int opcoes;

    while (1)
    {
        printf("\nMENU INTERATIVO\n");
        printf("Escolha uma das opções de 1 a 3:\n");
        printf(" 1 > Calcular se um número é ímpar ou par\n");
        printf(" 2 > Imprimir os números de 1 a 10\n");
        printf(" 3 > Sair.\n");
        printf("Faça sua escolha: ");
        scanf("%d", &opcoes);
        switch (opcoes)
        {
        case 1:
            verificacaoImparOuPar();
            break;
        case 2:
            imprimirNumeros();
            break;
        case 3:
            printf("Saindo do programa...\n");
            return 0;
        default:
            printf("Opção inválida. Tente novamente utilizando as opções válidas de 1 a 3.\n");
        }
    }
    return 0;
}
