#include <stdio.h>
#include <string.h>

/*
 * Ex 6: Mostrar cada palavra da frase em uma linha separada.
 * Percorre a frase e imprime caractere por caractere.
 * Quando encontra um espaco, pula uma linha.
 */

int main() {
    char frase[200];
    int i;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    printf("\n");
    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            printf("\n"); /* espaco vira quebra de linha */
        } else {
            printf("%c", frase[i]);
        }
    }
    printf("\n");

    return 0;
}
