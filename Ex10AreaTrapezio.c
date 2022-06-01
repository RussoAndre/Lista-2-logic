#include <stdio.h>

int x, y, h;

int calculaArea(x, y, h)
{
    int j = (x + y) * h;
    int resultado;
    resultado = j / 2;
    printf("A área do trapézio é : %d", resultado);
    return resultado;
}

int main(void)
{
    printf("Informe a base menor do trapézio triângulo\n");
    scanf("%d", &x);
    printf("Informe a base maior do trapézio triângulo\n");
    scanf("%d", &y);
    printf("Informe a altura do trapézio triângulo\n");
    scanf("%d", &h);

    calculaArea(x, y, h);
}