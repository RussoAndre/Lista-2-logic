#include <stdio.h>

int x, y, z;

int identificaTriangulo(x, y, z)
{
    if (x == y && y == z)
    {
        printf("Você tem um triângulo equilatero");
    }
    else if ((x == z) || (x == y) || (y == z))
    {
        printf("Você tem um triângulo isóceles");
    }
    else if (x != y && y != z && x != z)
    {
        printf("Você tem um triângulo escaleno");
    }
    else
    {
        printf("Você não informou corretamente os lados dos triângulos");
    }
}

int main(void)
{
    printf("Informe o primeiro lado do triângulo\n");
    scanf("%d", &x);
    printf("Informe o segundo lado do triângulo\n");
    scanf("%d", &y);
    printf("Informe o terceiro lado do triângulo\n");
    scanf("%d", &z);

    identificaTriangulo(x, y, z);
}