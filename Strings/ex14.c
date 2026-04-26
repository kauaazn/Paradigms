#include <stdio.h>
#include <string.h>

/*
 * Ex 14: Encontrar a ULTIMA posicao onde um caractere aparece.
 * Percorre a frase inteira atualizando a posicao toda vez que encontra o caractere.
 * Ao final, a variavel guarda a ultima posicao encontrada.
 */

int main() {
    char frase[200];
    char alvo;
    int i, ultima = -1; /* -1 significa "ainda nao encontrou" */

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    printf("Digite o caractere a buscar: ");
    scanf(" %c", &alvo);

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == alvo) {
            ultima = i; /* atualiza sempre que acha, ficando com a ultima */
        }
    }

    if (ultima == -1) {
        printf("O caractere '%c' NAO foi encontrado.\n", alvo);
    } else {
        printf("Ultima ocorrencia de '%c' na posicao %d.\n", alvo, ultima + 1);
    }

    return 0;
}
