#include <stdio.h>

int main(void)
{
    int listaNumeros[10], i, c, temp;
    printf("Insira os números: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &listaNumeros[i]);
        printf("Insira o próximo número : \n");
    }
    for (i = 0; i < 10; i++)
    {
        for (c = i + 1; c < 10; c++)
        {
            if (listaNumeros[i] > listaNumeros[c])
            {
                temp = listaNumeros[i];
                listaNumeros[i] = listaNumeros[c];
                listaNumeros[c] = temp;
            }
        }
    }
    printf("elementos organizados : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", listaNumeros[i]);
    }
    return 0;
}