#include <stdio.h>

int main() {
    int vetorOriginal[5];
    int vetorInvertido[5];

    // Leitura dos 5 números no vetorOriginal
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetorOriginal[i]);
    }

    // Inversão: o primeiro elemento de vetorOriginal vai para a última posição
    // de vetorInvertido, o segundo vai para a penúltima, etc.
    // Fórmula: vetorInvertido[i] = vetorOriginal[4 - i]
    //   i=0 -> pega vetorOriginal[4] (último)
    //   i=1 -> pega vetorOriginal[3]
    //   i=2 -> pega vetorOriginal[2] (meio)
    //   i=3 -> pega vetorOriginal[1]
    //   i=4 -> pega vetorOriginal[0] (primeiro)
    for (int i = 0; i < 5; i++) {
        vetorInvertido[i] = vetorOriginal[4 - i];
    }

    // Impressão do vetor original
    printf("\nvetorOriginal:  ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetorOriginal[i]);
    }

    // Impressão do vetor invertido
    printf("\nvetorInvertido: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetorInvertido[i]);
    }
    printf("\n");

    return 0;
}
