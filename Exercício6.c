#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.

    int codigo = 0;

    // Mostrando tabela de produtos para o usu�rio.
    printf("1                   Camiseta\n");
    printf("2                   Cal�a\n");
    printf("3                   Sapato\n");

    // Pedindo dados para o usu�rio.
    printf("Digite o c�digo do produto desejado:");
    scanf("%d", &codigo);

    system("cls || clear");

    // Mostrando informa��es para o usu�rio.
    switch (codigo)
    {
    case 1:
        printf("O produto escolhido foi camiseta. \n");
        printf("Valor: R$70,00 \n");
        break;
    case 2:
        printf("O produto escolhido foi cal�a. \n");
        printf("Valor: R$90,00 \n");
        break;
    case 3:
        printf("O produto escolhido foi sapato. \n");
        printf("Valor: R$200,00 \n");
        break;

    default:
        printf("C�digo inv�lido.");
        break;
    }

    getchar();
    return 0;
}