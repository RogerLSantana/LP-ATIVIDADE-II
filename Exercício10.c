#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;
    char operacao;

    // Dando comandos para o usu�rio.
    printf("Digite o 1� n�mero:");
    scanf("%d", &numero1);

    printf("Digite o 2�n�mero:");
    scanf("%d", &numero2);

    fflush(stdin);

    printf("Digite a opera��o matem�tica desejada:\n");
    scanf("%c", &operacao);

    system("cls || clear");
    // Mostrando informa��es para o usu�rio.
    switch (operacao)
    {
    case '+':
        resultado = numero1 + numero2;
        printf("Resultado da opera��o escolhida: %d \n", resultado);
        break;
    case '-':
        resultado = numero1 - numero2;
        printf("Resultado da opera��o escolhida: %d", resultado);

        break;

    default:
        printf(" opera��o invalida.");
        break;
    }

    // Outro modo de fazer as op��es de opera��o.

    /*   if (operacao == '+')
       {
           resultado = numero1 + numero2;
           printf("Resultado da opera��o escolhida: %d \n", resultado);
       }
       else if
       {
           resultado = numero1 - numero2;
           printf("Resultado da opera��o escolhida: %d", resultado);
       }
   */

    getchar();
    return 0;
}