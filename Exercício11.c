#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis.
    int codigoAcessoCorreto = 1234;
    int codigoAcesso = 0;

    do
    {
        printf("Digite o código de acesso:");
        scanf("%d", &codigoAcesso);
    } while (codigoAcesso != codigoAcessoCorreto);

    system("cls || clear");

    printf("Código correto,Acesso permitido!");

    getchar();
    return 0;
}