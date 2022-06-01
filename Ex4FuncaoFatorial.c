#include <stdio.h>

int i;

int calculaFatorial(int numero)
{
    int fatorial = 1;
    for (i = 1; i <= numero; i++)
    {
        fatorial = fatorial * i;
    }
    printf("Seu fatorial é %d", fatorial);
}

int main(void)
{
    int numero;
    printf("Informe o numero para calcularmos seu fatorial\n");
    scanf("%d", &numero);

    calculaFatorial(numero);

    return 0;
}