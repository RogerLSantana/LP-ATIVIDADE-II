#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.
    float temperatura = 0;

    // Pedindo dados ao usu�rio.
    printf("Digite a temperatura externa:");
    scanf("%f", &temperatura);

    system("cls || clear");
    
    // Mostrando informa��es para o usu�rio.
    if (temperatura > 25)
    {
        printf("O clima est� ensolarado.");
    }
    else if (temperatura <= 25 && temperatura >= 15)
    {
        printf("O clima est� nublado.");
    }

    if (temperatura < 15)
    {
        printf("O clima est� chuvoso.");
    }

    getchar();
    return 0;
}