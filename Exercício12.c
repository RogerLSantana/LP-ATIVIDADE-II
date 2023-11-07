#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    // Declarando variáveis.
    int i;
    int quantidadeRepeticao = 0;
    float numeros = 0;
    float media = 0;
    float soma = 0;
    
    // interação com o usuário.
    printf("Quantos números voçê deseja informar?:");
    scanf("%d", &quantidadeRepeticao);

    for (i = 1; i <= quantidadeRepeticao; i++)
    {
        printf("Digite o %d° número:", i);
        scanf("%f", &numeros);
        soma += numeros;
    }
    media = soma / (float)quantidadeRepeticao;

    system("cls || clear");
   
    printf("A média dos números é:%.2f", media);

    getchar();
    return 0;
}