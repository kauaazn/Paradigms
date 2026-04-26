#include <stdio.h>
#include <string.h>

/*
 * Ex 12: Verificar se um caractere esta na frase e quantas vezes aparece.
 */

int main() {
    char frase[200];
    char alvo;
    int i, ocorrencias = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    printf("Digite o caractere a buscar: ");
    scanf(" %c", &alvo); /* espaco antes de %c descarta o Enter que ficou no buffer */

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == alvo) {
            ocorrencias++;
        }
    }

    if (ocorrencias == 0) {
        printf("O caractere '%c' NAO foi encontrado.\n", alvo);
    } else {
        printf("O caractere '%c' aparece %d vez(es).\n", alvo, ocorrencias);
    }

    return 0;
}
