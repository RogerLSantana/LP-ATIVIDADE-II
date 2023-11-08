#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero = 0;

    printf("Digite um número para contagem regressiva interativa:");
    scanf("%d", &numero);

    do
    {
        numero--;
        switch (numero)
        {
        case 350:
            printf("Número bastante grande,vou começar a contar a partir do 200\n");
            sleep(1);
            break;
        case 300:
            printf("Ainda não chegou em 200 \n");
            sleep(1);
            break;
        case 250:
            printf("Quase chegando... \n");
            sleep(1);
            break;
        case 200:
            printf("Chegou !!!\n");
            printf("%d \n", numero);
            sleep(1);
            break;
        case 199:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 198:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 197:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 196:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 195:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 194:
            printf("Cansei,vou adiantar um pouco :) \n");
            sleep(1);
            break;
        case 10:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 9:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 8:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 7:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 6:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 5:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 4:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 3:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 2:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 1:
            printf("%d \n", numero);
            sleep(1);
            break;
        case 0:
            printf("Término da contagem,ihuul");
            sleep(1);
            break;
        }
    } while (numero > 0);

    getchar();
    return 0;
}