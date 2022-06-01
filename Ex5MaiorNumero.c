#include <stdio.h>

int main(void)
{
    int listaNumeros[10], i;
    int maiorNumero = listaNumeros[0];
    printf("Insira os números : \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &listaNumeros[i]);
        if (i < 9)
        {
            printf("Insira o próximo número: \n");
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (maiorNumero <= listaNumeros[i])
        {
            maiorNumero = listaNumeros[i];
        }
    }
    printf("Dentre os números informados o maior número é : %d", maiorNumero);
    return 0;
}