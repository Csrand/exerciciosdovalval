#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura, area;
    printf("******************************\n");
    printf("**** CALCULADORA DE AREA *****\n");
    printf("******************************\n");
    printf("Digite o valo da base\n");
    scanf("%d", & base);
    printf("Digite valor da altura\n");
    scanf("%d", & altura);
     area = base * altura;
    printf("Area Do Retangulo: %d\n", area );
    return 0;}