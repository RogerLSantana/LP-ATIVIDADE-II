#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis.
    int idade = 0;

    // Comandos para o usuário.
    printf("Digite sua idade:");
    scanf("%d", &idade);

    system("cls || clear");

    // Informações para o usuário.
    if (idade >= 18)
    {
        printf("Acesso Permitido.");
    }
    else
    {
        printf("Acesso Negado.");
    }

    getchar();
    return 0;
}