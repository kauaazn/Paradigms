#include <stdio.h>
#include <string.h>

/*
 * Ex 8: Contar palavras apos limpar espacos (inicio, fim e duplicados).
 * Usa a mesma logica de limpeza do ex07, depois conta como no ex04.
 */

int main() {
    char frase[200], limpa[200];
    int i = 0, j = 0, palavras = 0, dentroWord = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    /* --- Limpeza --- */
    while (frase[i] == ' ') i++; /* pula espacos iniciais */

    while (frase[i] != '\0') {
        limpa[j] = frase[i];
        j++;
        i++;
        if (limpa[j - 1] == ' ') {
            while (frase[i] == ' ') i++; /* pula espacos duplicados */
        }
    }
    if (j > 0 && limpa[j - 1] == ' ') j--; /* remove espaco final */
    limpa[j] = '\0';

    /* --- Contagem --- */
    for (i = 0; i < strlen(limpa); i++) {
        if (limpa[i] != ' ') {
            if (dentroWord == 0) {
                palavras++;
                dentroWord = 1;
            }
        } else {
            dentroWord = 0;
        }
    }

    printf("Frase limpa: \"%s\"\n", limpa);
    printf("Quantidade de palavras: %d\n", palavras);

    return 0;
}
