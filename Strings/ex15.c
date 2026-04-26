#include <stdio.h>
#include <string.h>

/*
 * Ex 15: Mostrar quantas vezes cada palavra aparece na frase.
 *
 * Estrategia:
 * 1. Separar as palavras da frase em um vetor de strings.
 * 2. Para cada palavra ainda nao contada, percorrer o vetor
 *    comparando com strcmp e contar as iguais.
 * 3. Marcar as palavras ja contadas para nao repetir.
 */

#define MAX 100

int main() {
    char frase[500];
    char palavras[MAX][50]; /* vetor de ate 100 palavras de ate 50 caracteres */
    int contado[MAX];       /* 1 se essa palavra ja foi exibida */
    int total = 0;          /* total de palavras encontradas */
    int i, j, k, ocorrencias;
    char temp[50];

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    /* --- Separar palavras: percorre a frase copiando letra a letra --- */
    k = 0; /* indice dentro da palavra atual */
    for (i = 0; i <= strlen(frase); i++) {
        if (frase[i] == ' ' || frase[i] == '\0') {
            if (k > 0) { /* havia uma palavra sendo formada */
                temp[k] = '\0';
                strcpy(palavras[total], temp);
                contado[total] = 0;
                total++;
                k = 0;
            }
        } else {
            temp[k] = frase[i];
            k++;
        }
    }

    /* --- Contar e exibir --- */
    for (i = 0; i < total; i++) {
        if (contado[i] == 1) continue; /* ja foi exibida, pula */

        ocorrencias = 0;
        for (j = i; j < total; j++) {
            if (strcmp(palavras[i], palavras[j]) == 0) {
                ocorrencias++;
                contado[j] = 1; /* marca todas as iguais */
            }
        }

        printf("\"%s\": %d vez(es)\n", palavras[i], ocorrencias);
    }

    return 0;
}
