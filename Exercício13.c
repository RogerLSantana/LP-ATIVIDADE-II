#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(){
setlocale(LC_ALL,"portuguese");
//Declarando variáveis.
int numero1=0;
int numero2=0;
int maiorNumero=0,menorNumero=999;

//Dando comandos para o usu�rio.
printf("Digite o 1� n�mero:");
scanf("%d",&numero1);
printf("Digite o 2� n�mero:");
scanf("%d",&numero2);

maiorNumero = numero1 > numero2 ? numero1:numero2;
menorNumero = numero1 < numero2 ? numero1:numero2; 

system("cls || clear");

//Mostrando informa��es para o usu�rio.
printf("Maior n�mero : %d \n",maiorNumero);
printf("Menor n�mero: %d \n",menorNumero);

getchar();
return 0;
}