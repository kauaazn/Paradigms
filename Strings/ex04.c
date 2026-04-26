#include <stdio.h>
#include <string.h>

/*
 * Ex 4: Contar quantas palavras existem em uma frase.
 * Uma nova palavra começa quando aparece um caractere diferente de espaco
 * logo apos um espaco (ou no inicio da frase).
 * A variavel "dentroWord" controla se estamos dentro de uma palavra ou nao.
 */

int main() {
    char frase[200];
    int i, palavras = 0, dentroWord = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ') {
            /* Caractere normal: se nao estavamos em uma palavra, comecou uma nova */
            if (dentroWord == 0) {
                palavras++;
                dentroWord = 1;
            }
        } else {
            /* Espaco: saimos da palavra */
            dentroWord = 0;
        }
    }

    printf("Quantidade de palavras: %d\n", palavras);

    return 0;
}
