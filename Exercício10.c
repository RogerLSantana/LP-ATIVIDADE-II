#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis.
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;
    char operacao;

    // Dando comandos para o usuário.
    printf("Digite o 1° número:");
    scanf("%d", &numero1);

    printf("Digite o 2°número:");
    scanf("%d", &numero2);

    fflush(stdin);

    printf("Digite a operação matemática desejada:\n");
    scanf("%c", &operacao);

    system("cls || clear");
    // Mostrando informações para o usuário.
    switch (operacao)
    {
    case '+':
        resultado = numero1 + numero2;
        printf("Resultado da operação escolhida: %d \n", resultado);
        break;
    case '-':
        resultado = numero1 - numero2;
        printf("Resultado da operação escolhida: %d", resultado);

        break;

    default:
        printf(" operação invalida.");
        break;
    }

    // Outro modo de fazer as opções de operação.

    /*   if (operacao == '+')
       {
           resultado = numero1 + numero2;
           printf("Resultado da operação escolhida: %d \n", resultado);
       }
       else if
       {
           resultado = numero1 - numero2;
           printf("Resultado da operação escolhida: %d", resultado);
       }
   */

    getchar();
    return 0;
}