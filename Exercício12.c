#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    // Declarando vari�veis.
    int i;
    int quantidadeRepeticao = 0;
    float numeros = 0;
    float media = 0;
    float soma = 0;
    
    // intera��o com o usu�rio.
    printf("Quantos n�meros vo�� deseja informar?:");
    scanf("%d", &quantidadeRepeticao);

    for (i = 1; i <= quantidadeRepeticao; i++)
    {
        printf("Digite o %d� n�mero:", i);
        scanf("%f", &numeros);
        soma += numeros;
    }
    media = soma / (float)quantidadeRepeticao;

    system("cls || clear");
   
    printf("A m�dia dos n�meros �:%.2f", media);

    getchar();
    return 0;
}