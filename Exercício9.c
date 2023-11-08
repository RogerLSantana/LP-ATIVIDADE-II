#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    // Declarando variáveis.
    int numero = 0;

    printf("Digite um número:");
    scanf("%d", &numero);

    if (numero == 2)
    {
        printf("Número primo.");
    }
        else if (numero == 0 || numero == 1)
        {
            printf("Número não primo.");
        }
        else if (numero % 1 == 0 && numero % 2 == 0 || numero % 3 == 0 && numero % 1 == 0)
        {
            printf("Número não primo.");
        }
        else
        {
            printf("Número primo");
        } 

    getchar();
    return 0;
}