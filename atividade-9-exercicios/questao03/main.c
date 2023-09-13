#include <stdio.h>
#include <stdlib.h>

int soma(int *a, int *b) {
    *a = *a + *b;
}

int main() {
    int a, b;

    printf("Digite dois valores inteiros para A e B: ");
    scanf("%d %d", &a, &b);

    soma(&a, &b);

    printf("A = %d\nB = %d\n", a, b);

    return 0;
}
