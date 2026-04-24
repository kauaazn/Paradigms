#include <stdio.h>

int main() {
    // Declaração dos três vetores de 10 posições
    float v1[10], v2[10], v3[10];

    // Leitura do primeiro vetor
    printf("=== Vetor 1 ===\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%f", &v1[i]);
    }

    // Leitura do segundo vetor
    printf("\n=== Vetor 2 ===\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%f", &v2[i]);
    }

    // Criação do terceiro vetor: cada posição é a soma das posições correspondentes
    // de v1 e v2 (mesma posição)
    for (int i = 0; i < 10; i++) {
        v3[i] = v1[i] + v2[i];
    }

    // Impressão dos três vetores
    printf("\nVetor 1: ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", v1[i]);
    }

    printf("\nVetor 2: ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", v2[i]);
    }

    printf("\nVetor 3 (soma): ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", v3[i]);
    }
    printf("\n");

    return 0;
}
