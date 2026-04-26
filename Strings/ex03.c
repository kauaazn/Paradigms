#include <stdio.h>
#include <string.h>

/*
 * Ex 3: Contar quantas vogais existem em uma frase.
 * Verifica cada letra manualmente comparando com A, E, I, O, U
 * tanto maiusculo quanto minusculo.
 */

int main() {
    char frase[200];
    int i, vogais = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase); /* %[^\n] le a linha inteira ate o Enter */

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' ||
            frase[i] == 'O' || frase[i] == 'U' ||
            frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' ||
            frase[i] == 'o' || frase[i] == 'u') {
            vogais++;
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}
