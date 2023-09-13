#include <stdio.h>
#include <stdlib.h>

float volume(float a, float b) {
    float pi = 3.141592;
    float resposta = pi*(b*b)*a;
    return resposta;
}

int main() {
    float altura, raio;

    printf("Vamos calcular o volume de um cilindro circular. Insira os valores de altura e de raio, respectivamente:\n");
    scanf("%f %f", &altura, &raio);

    float resposta = volume(altura, raio);

    printf("O volume desse cilindro eh %.2f.\n", resposta);

    return 0;
}
