#include <stdio.h>
#include <stdlib.h>

int pell(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n >1 ){
        return 2*pell(n-1)+pell(n-2);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro e positivo para calcular o numero de Pell: ");
    scanf("%d", &n);

    int resultado = pell(n);

    if (n < 0) {
        printf("O numero deve ser maior ou igual a 0.\n");
    } else {
        int resultado = pell(n);
        printf("p(%d) = %d\n", n, resultado);
    }

    return 0;
}
