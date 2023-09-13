#include <stdio.h>
#include <stdlib.h>

int sequencia(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return 2*sequencia(n-1)+3*sequencia(n-2);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int resultado = sequencia(n);

    printf("A sequencia formada por esse numero eh: %d\n", resultado);

    return 0;
}
