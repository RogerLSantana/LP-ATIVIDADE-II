#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.
    int idade = 0;

    // Comandos para o usu�rio.
    printf("Digite sua idade:");
    scanf("%d", &idade);

    system("cls || clear");

    // Informa��es para o usu�rio.
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