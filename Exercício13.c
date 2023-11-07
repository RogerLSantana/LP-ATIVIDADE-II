#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(){
setlocale(LC_ALL,"portuguese");
//Declarando variÃ¡veis.
int numero1=0;
int numero2=0;
int maiorNumero=0,menorNumero=999;

//Dando comandos para o usuário.
printf("Digite o 1° número:");
scanf("%d",&numero1);
printf("Digite o 2° número:");
scanf("%d",&numero2);

maiorNumero = numero1 > numero2 ? numero1:numero2;
menorNumero = numero1 < numero2 ? numero1:numero2; 

system("cls || clear");

//Mostrando informações para o usuário.
printf("Maior número : %d \n",maiorNumero);
printf("Menor número: %d \n",menorNumero);

getchar();
return 0;
}