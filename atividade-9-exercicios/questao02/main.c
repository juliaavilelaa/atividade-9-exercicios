#include <stdio.h>
#include <stdlib.h>

float consumo(float a, float b) {
    return a/b;
}

int main() {
    float km, l;

    printf("Insira a distancia em quilometros percorrida pelo seu carro e a quantidade de litros consumidos nesse percurso:\n");
    scanf("%f %f", &km, &l);

    float resposta = consumo(km, l);

    if (resposta < 8) {
        printf("Seu carro roda %.2f quilometros por litro de gasolina. Venda o carro!\n", resposta);
    } else if (resposta >= 8 && resposta <= 14) {
        printf("Seu carro roda %.2f quilometros por litro de gasolina. Economico!\n", resposta);
    } else {
        printf("Seu carro roda %.2f quilometros por litro de gasolina. Super economico!\n", resposta);
    }

    return 0;
}
