#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma;
    printf("Digite um numero\n");
    scanf("%d", & num1);
    printf("Digite outro numero\n");
    scanf("%d", &num2);
     soma = num1 + num2;
    printf("A soma e %d\n", soma );
    return 0;
}
