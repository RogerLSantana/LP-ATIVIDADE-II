#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    // Declarando vari�veis.
    int numero = 0;

    printf("Digite um n�mero:");
    scanf("%d", &numero);

    if (numero == 2)
    {
        printf("N�mero primo.");
    }
        else if (numero == 0 || numero == 1)
        {
            printf("N�mero n�o primo.");
        }
        else if (numero % 1 == 0 && numero % 2 == 0 || numero % 3 == 0 && numero % 1 == 0)
        {
            printf("N�mero n�o primo.");
        }
        else
        {
            printf("N�mero primo");
        } 

    getchar();
    return 0;
}