#include <stdio.h>

int calculaMdc(int n1, int n2)
{
    int resto;
    while (n2 != 0)
    {
        resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }
    return n1;
}

int main()
{
    int firstN, lastN;
    printf("Insira o primeiro número: \n");
    scanf("%d", &firstN);
    printf("Insira o segundo número: \n");
    scanf("%d", &lastN);

    printf("O MDC é: %d \n", calculaMdc(firstN, lastN));

    return 0;
}