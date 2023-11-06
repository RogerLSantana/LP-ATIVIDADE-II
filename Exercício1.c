#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis.
    float temperatura = 0;

    // Pedindo dados ao usuário.
    printf("Digite a temperatura externa:");
    scanf("%f", &temperatura);

    system("cls || clear");
    
    // Mostrando informações para o usuário.
    if (temperatura > 25)
    {
        printf("O clima está ensolarado.");
    }
    else if (temperatura <= 25 && temperatura >= 15)
    {
        printf("O clima está nublado.");
    }

    if (temperatura < 15)
    {
        printf("O clima está chuvoso.");
    }

    getchar();
    return 0;
}