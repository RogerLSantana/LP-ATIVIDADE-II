#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.
    int i = 0;
    int numero = 0;
    int soma = 0;
    int quantidadePares = 0;
    int quantidadeImpares = 0;
    int somaPar = 0;
    int somaImpar = 0;
    float mediaPar = 0;
    float mediaImpar = 0;

    do
    {
        printf("Digite o %d� n�mero:", i + 1);
        scanf("%d", &numero);

        if (numero >= 0)
        {

            if (numero % 2 == 0)
            {
                somaPar += numero;
                quantidadePares++;
            }
            else
            {
                somaImpar += numero;
                quantidadeImpares++;
            }

            mediaPar = (float)somaPar / (float)quantidadePares;
            mediaImpar = (float)somaImpar / (float)quantidadeImpares;
        }
    } while (numero >= 0);

    system("cls || clear");

    // Mostrando dados para o usu�rio.
    printf("Quantidade de Pares: %d \n", quantidadePares);
    printf("Quantidade de �mpares:%d \n", quantidadeImpares);
    printf("M�dia de Pares : %.2f \n", mediaPar);
    printf("M�dia de �mpares: %.2f \n", mediaImpar);

    getchar();
    return 0;
}