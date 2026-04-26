#include <stdio.h>
#include <string.h>

/*
 * Ex 9: Verificar se a primeira string e permutacao da segunda.
 * Permutacao = mesmos caracteres nas mesmas quantidades, em ordem diferente.
 *
 * Estrategia: contar quantas vezes cada letra aparece em cada string
 * usando um vetor de 26 posicoes (uma para cada letra a-z).
 * Se os dois vetores forem iguais, e permutacao.
 */

int main() {
    char s1[100], s2[100];
    int freq1[26], freq2[26]; /* frequencia de cada letra (a=0, b=1, ..., z=25) */
    int i, ehPermutacao = 1;

    printf("Primeira cadeia: ");
    scanf("%s", s1);

    printf("Segunda cadeia: ");
    scanf("%s", s2);

    /* Tamanhos diferentes ja eliminam a possibilidade */
    if (strlen(s1) != strlen(s2)) {
        printf("NAO e permutacao (tamanhos diferentes).\n");
        return 0;
    }

    /* Zera os vetores de frequencia */
    for (i = 0; i < 26; i++) {
        freq1[i] = 0;
        freq2[i] = 0;
    }

    /* Conta as letras de cada string (so letras minusculas) */
    for (i = 0; s1[i] != '\0'; i++) {
        freq1[s1[i] - 'a']++; /* 'a'-'a'=0, 'b'-'a'=1, etc. */
    }
    for (i = 0; s2[i] != '\0'; i++) {
        freq2[s2[i] - 'a']++;
    }

    /* Compara os dois vetores */
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            ehPermutacao = 0;
        }
    }

    if (ehPermutacao) {
        printf("E permutacao!\n");
    } else {
        printf("NAO e permutacao.\n");
    }

    return 0;
}
