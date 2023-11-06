#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis.

    int codigo = 0;

    // Mostrando tabela de produtos para o usuário.
    printf("1                   Camiseta\n");
    printf("2                   Calça\n");
    printf("3                   Sapato\n");

    // Pedindo dados para o usuário.
    printf("Digite o código do produto desejado:");
    scanf("%d", &codigo);

    system("cls || clear");

    // Mostrando informações para o usuário.
    switch (codigo)
    {
    case 1:
        printf("O produto escolhido foi camiseta. \n");
        printf("Valor: R$70,00 \n");
        break;
    case 2:
        printf("O produto escolhido foi calça. \n");
        printf("Valor: R$90,00 \n");
        break;
    case 3:
        printf("O produto escolhido foi sapato. \n");
        printf("Valor: R$200,00 \n");
        break;

    default:
        printf("Código inválido.");
        break;
    }

    getchar();
    return 0;
}