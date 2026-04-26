#include <stdio.h>
#include <string.h>

/*
 * Ex 10: Duplicar cada caractere da frase.
 * Exemplo: "BOM" -> "BBOOMM"
 * Para cada caractere, imprime ele duas vezes.
 */

int main() {
    char frase[200];
    int i;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    printf("Resultado: ");
    for (i = 0; i < strlen(frase); i++) {
        printf("%c%c", frase[i], frase[i]); /* imprime o mesmo caractere 2x */
    }
    printf("\n");

    return 0;
}
