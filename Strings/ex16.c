#include <stdio.h>

/*
 * Ex 16: Receber data no formato DD/MM/AAAA e mostrar com o mes por extenso.
 * Exemplo: "15/04/2025" -> "15/Abril/2025"
 *
 * A data e lida como string e os valores sao extraidos manualmente
 * usando a posicao dos caracteres:
 *   frase[0] e frase[1] = dia
 *   frase[3] e frase[4] = mes
 *   frase[6] a frase[9] = ano
 * Converte char para int subtraindo '0' (ex: '4'-'0' = 4).
 */

int main() {
    char data[11];
    char *meses[] = {
        "", "Janeiro", "Fevereiro", "Marco", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    int dia, mes, ano;

    printf("Digite a data (DD/MM/AAAA): ");
    scanf("%s", data);

    /* Converte cada par de digitos para inteiro usando a posicao fixa na string */
    dia = (data[0] - '0') * 10 + (data[1] - '0');
    mes = (data[3] - '0') * 10 + (data[4] - '0');
    ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100
        + (data[8] - '0') * 10  + (data[9] - '0');

    if (mes < 1 || mes > 12) {
        printf("Mes invalido.\n");
        return 0;
    }

    printf("Data: %02d/%s/%04d\n", dia, meses[mes], ano);

    return 0;
}
