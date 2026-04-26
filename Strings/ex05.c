#include <stdio.h>
#include <string.h>

/*
 * Ex 5: Criptografar: inverter a frase e trocar consoantes por '#'.
 * Exemplo: "EU ESTOU NA ESCOLA" -> "A#O##E A# UO##E UE"
 *
 * Passo 1: inverter a string trocando o primeiro com o ultimo,
 *          o segundo com o penultimo, e assim por diante.
 * Passo 2: percorrer a string invertida e substituir consoantes por '#'.
 *          Consoante = letra que NAO e vogal e NAO e espaco.
 */

int main() {
    char frase[200];
    int i, tam, inicio, fim;
    char temp;

    printf("Digite a frase: ");
    scanf("%[^\n]", frase);

    tam = strlen(frase);

    /* --- Passo 1: inverter --- */
    inicio = 0;
    fim = tam - 1;
    while (inicio < fim) {
        temp = frase[inicio];
        frase[inicio] = frase[fim];
        frase[fim] = temp;
        inicio++;
        fim--;
    }

    /* --- Passo 2: trocar consoantes por '#' --- */
    for (i = 0; i < tam; i++) {
        /* Verifica se e uma letra (maiuscula ou minuscula) */
        if ((frase[i] >= 'A' && frase[i] <= 'Z') ||
            (frase[i] >= 'a' && frase[i] <= 'z')) {

            /* Verifica se NAO e vogal -> e consoante */
            if (frase[i] != 'A' && frase[i] != 'E' && frase[i] != 'I' &&
                frase[i] != 'O' && frase[i] != 'U' &&
                frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' &&
                frase[i] != 'o' && frase[i] != 'u') {
                frase[i] = '#';
            }
        }
    }

    printf("Criptografado: %s\n", frase);

    return 0;
}
