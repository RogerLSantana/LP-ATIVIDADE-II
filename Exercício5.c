#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis
    int idioma = 0;

    // tabela de idiomas para o usuário.

    printf("Código                   Idioma\n");
    printf("\n");
    printf("1                        Inglês\n");
    printf("2                        Espanhol\n");
    printf("3                        Francês\n");

    printf("Escolha um idioma de preferência:");
    scanf("%d", &idioma);

    system("cls || clear");

    switch (idioma)
    {
    case 1:
        printf("Welcome!");
        break;
    case 2:
        printf("Bienvenido!");
        break;
    case 3:
        printf("Accueillir!");
        break;
    default:
        printf("Idioma  invlido.");
        break;
    }

    getchar();
    return 0;
}