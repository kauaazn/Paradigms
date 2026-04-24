#include <stdio.h>

int main() {
    float minutos_total;
    int horas, minutos;
    float segundos;

    printf("Digite o valor em minutos: ");
    scanf("%f", &minutos_total);

    int minutos_inteiros = (int) minutos_total;
    float parte_decimal = minutos_total - minutos_inteiros;

    horas = minutos_inteiros / 60;
    minutos = minutos_inteiros % 60;

    segundos = parte_decimal * 60;

    printf("Resultado: %i h %i min %f seg\n", horas, minutos, segundos);

    return 0;
}