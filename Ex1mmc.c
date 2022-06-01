#include <stdio.h>

int mmc(int num1, int num2) {

    int mmc, aux, i;

    for (i = 2; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            i = num2 + 1;
        }
    }
  printf("O MMC é: %d" ,mmc);  
  return mmc;
}

int main() {

  int n1, n2;
  
  printf("Informe o numero 1: \n");
  scanf("%d", &n1);

  printf("Informe o numero 2: \n");
  scanf("%d", &n2);
  
  mmc(n1, n2);
    return 0;
}