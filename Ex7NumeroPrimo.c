#include <stdio.h>

int n, i, divisao = 0, decisao = 0;

int verificaPrimo()
{
    printf("Insira um número natural para saber se ele é um número primo:\n");
    scanf("%d", &n);
    divisao = n / 2;
    for (i = 2; i <= divisao; i++)
    {
        if (n % i == 0)
        {
            printf("O número %d não é primo!!!", n);
            return 0;
        }
    }
    if (decisao == 0)
    {
        printf("O número %d é primo", n);
    }
    return 0;
}

int main()
{
    verificaPrimo();
    return 0;
}