#include <stdio.h>
#include <string.h>

/*
 * Ex 7: Remover espacos excedentes do inicio, fim e entre palavras.
 * Copia a frase para uma nova string, pulando espacos duplicados
 * e espacos no inicio e no fim.
 */

int main() {
    char frase[200], resultado[200];
    int i = 0, j = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    /* Pula os espacos do inicio */
    while (frase[i] == ' ') {
        i++;
    }

    while (frase[i] != '\0') {
        resultado[j] = frase[i];
        j++;
        i++;

        /* Se o caractere copiado foi um espaco, pula todos os espacos seguintes */
        if (resultado[j - 1] == ' ') {
            while (frase[i] == ' ') {
                i++;
            }
        }
    }

    /* Remove espaco que pode ter sobrado no final */
    if (j > 0 && resultado[j - 1] == ' ') {
        j--;
    }

    resultado[j] = '\0';

    printf("Resultado: \"%s\"\n", resultado);

    return 0;
}
