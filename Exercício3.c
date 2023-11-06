#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    // Declarando variáveis.
    float nota = 0;

    // Pedindo dados para o usuário.
    printf("Digite sua nota:");
    scanf("%f", &nota);

    system("cls || clear");

    if (nota >= 9)
    {
        printf("Excelente");
    }
    else if (nota >= 7 && nota < 8.9)
    {
        printf("Bom");
    }
    else if (nota >= 5 && nota < 6.9)
    {
        printf("Razo�vel");
    }
    else
    {
        printf("Insuficiente");
    }

    getchar();
    return 0;
}