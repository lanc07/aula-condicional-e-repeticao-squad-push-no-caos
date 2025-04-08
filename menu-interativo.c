#include <stdio.h>

int main()
{
    int opcoes;

    while (1)
    {
        printf("\nMENU INTERATIVO\n");
        printf("Escolha uma das opções de 1 a 3:\n");
        printf(" 1 > Calcular se um número é ímpar ou par\n");
        printf(" 2 > Imprimir os números de 1 a 10\n");
        printf(" 3 > Sair.");
        scanf("d%", &opcoes);
        switch (opcoes)
        {
        case 1:
            verificacaoImparOuPar();
            break;
        case 2:
            imprimirNumeros();
            break;
        case 3:
            print("Saindo do programa...");
            return 0;
        default:
            printf("Opção inválida. Tente novamente utilizando as opções válidas de 1 a 3.\n");
        }
    }
    return 0;
}