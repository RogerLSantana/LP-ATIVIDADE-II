#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.

    int codigo = 0;
    char nickname[200];
    char personagem[200];

    // Mostrando tabela de op��es para o usu�rio.
    printf("1            Novo jogo \n");
    printf("2            Carregar jogo \n");
    printf("3            Configura��es \n");

    printf("\nEscolha uma opo��es:");
    scanf("%d", &codigo);

    fflush(stdin);
    
    system("cls || clear");

    switch (codigo)
    {
    case 1:
        printf("Digite seu nickname: \n");
        gets(nickname);
        fflush(stdin);
        printf("Digite o personagem que deseja: \n");
        gets(personagem);
        fflush(stdin);
        break;
    case 2:
        printf("Carregando o jogo...\n");
        break;
    case 3:
        printf("Volume           + \n");
        printf("Volume           - \n");
        printf("Gama             + \n");
        printf("Gama             - \n");
        break;
    default:
        printf("C�digo inv�lido. \n");
        break;
    }

    getchar();
    return 0;
}