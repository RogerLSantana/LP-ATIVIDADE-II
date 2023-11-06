#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.
    int dia = 0;
    float desconto = 0;
    float valorCompra = 0;
    float valorFinal = 0;

    // Tabela para o us�ario.
    printf("1                                         Domingo\n");
    printf("2                                         Segunda\n");
    printf("3                                         Ter�a\n");
    printf("4                                         Quarta\n");
    printf("5                                         Quinta\n");
    printf("6                                         Sexta\n");
    printf("7                                         Sab�do\n");

    // Comandos para o usu�rio.

    printf("Digite o dia da semana:");
    scanf("%d", &dia);
    printf("Digite o valor da compra:");
    scanf("%f", &valorCompra);

    system("cls || clear");

    // Mostrando informa��es para o usu�rio.
    switch (dia)
    {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Valor da compra: %.2f \n", valorCompra);

        if (valorCompra > 100)
        {
            desconto = valorCompra * 0.1;
            valorFinal = valorCompra - desconto;
            printf("Valor com desconto: %.2f \n", valorFinal);
        }
        break;
    case 1:
    case 7:
        printf("Valor da compra: %.2f \n", valorCompra);

        if (valorCompra > 100)
        {
            desconto = valorCompra * 0.15;
            valorFinal = valorCompra - desconto;
            printf("Valor com desconto: %.2f \n", valorFinal);
        }

        break;

    default:
        printf("Dia inv�lido.");
        break;
    }

    getchar();
    return 0;
}