#include <stdio.h>
#include <string.h>

/*
 * Ex 11: Contar quantas letras DIFERENTES a frase tem.
 * Usa um vetor de 26 posicoes para marcar quais letras ja apareceram.
 * visto[0] = letra 'a', visto[1] = letra 'b', ..., visto[25] = letra 'z'
 */

int main() {
    char frase[200];
    int visto[26]; /* 0 = nao apareceu ainda, 1 = ja apareceu */
    int i, diferentes = 0;
    char c;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    /* Zera o vetor */
    for (i = 0; i < 26; i++) {
        visto[i] = 0;
    }

    for (i = 0; i < strlen(frase); i++) {
        c = frase[i];

        /* Converte maiuscula para minuscula para comparar como se fosse a mesma letra */
        if (c >= 'A' && c <= 'Z') {
            c = c + 32; /* diferenca entre 'A' e 'a' no codigo ASCII e 32 */
        }

        /* So conta letras (a-z) */
        if (c >= 'a' && c <= 'z') {
            if (visto[c - 'a'] == 0) {
                visto[c - 'a'] = 1; /* marca como vista */
                diferentes++;
            }
        }
    }

    printf("Letras diferentes: %d\n", diferentes);

    return 0;
}
