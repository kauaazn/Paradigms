#include <stdio.h>
#include <string.h>

/*
 * Ex 13: Encontrar a PRIMEIRA posicao onde um caractere aparece.
 * Percorre do inicio e para ao encontrar o primeiro.
 * Posicao e mostrada a partir de 1 (nao de 0).
 */

int main() {
    char frase[200];
    char alvo;
    int i;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    printf("Digite o caractere a buscar: ");
    scanf(" %c", &alvo);

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == alvo) {
            printf("Primeira ocorrencia de '%c' na posicao %d.\n", alvo, i + 1);
            return 0; /* para o programa assim que acha */
        }
    }

    printf("O caractere '%c' NAO foi encontrado.\n", alvo);

    return 0;
}
