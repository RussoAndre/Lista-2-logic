#include <stdio.h>

int x, y;

int calculaTriangulo(x, y)
{
    int multiplica = x * y;
    int resultado = multiplica / 2;
    printf("O resultado é %d", resultado);
    return resultado;
}

int main(void)
{
    printf("Informe a base do triângulo\n");
    scanf("%d", &x);
    printf("Informe a altura triângulo\n");
    scanf("%d", &y);

    calculaTriangulo(x, y);
}