#include <stdio.h>

int contador, bissexto;
int calculaBissexto(nI, nF)
{
    printf("Insira um ano inicial d.C: \n");
    scanf("%d", &nI);

    printf("Insira um ano final d.C: \n");
    scanf("%d", &nF);
    printf("-------------------------\n");
    printf("Lista dos anos bissextos: \n");

    for (contador = nI; contador <= nF; contador++)
    {
        if (((contador % 4 == 0) && (contador % 100 != 0)) || (contador % 400 == 0))
        {
            printf("%d\n", contador);
            bissexto++;
        }
        else
        {
            bissexto = bissexto;
        }
    }
    printf("-------------------------\n");
    printf("Nesse perido de tempo houveram %d anos bissextos!!", bissexto);
    return 0;
}

int main(void)
{
    calculaBissexto();

    return 0;
}
