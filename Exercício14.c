#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis.
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
        printf("Digite o %d° número:", i + 1);
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

    // Mostrando dados para o usuário.
    printf("Quantidade de Pares: %d \n", quantidadePares);
    printf("Quantidade de Ímpares:%d \n", quantidadeImpares);
    printf("Média de Pares : %.2f \n", mediaPar);
    printf("Média de Ímpares: %.2f \n", mediaImpar);

    getchar();
    return 0;
}