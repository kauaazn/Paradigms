#include <stdio.h>

int main() {
    float horas, salario_minimo, horasExtras;
    float valor_hora, valor_extra;
    float salario_bruto, total_extra, salario_total;

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite as horas extras: ");
    scanf("%f", &horasExtras);

    valor_hora = salario_minimo / 8.0;
    valor_extra = salario_minimo / 4.0;

    salario_bruto = horas * valor_hora;
    total_extra = horasExtras * valor_extra;

    salario_total = salario_bruto + total_extra;

    printf("Salario bruto: %f", salario_bruto);
    printf("Valor horas extras: %f", total_extra);
    printf("Salario total: %f", salario_total);

    return 0;
}