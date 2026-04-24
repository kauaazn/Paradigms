#include <stdio.h>

int main() {
    float A[10], B[15];
    // C deve ter tamanho 10 + 15 = 25 para guardar todos os elementos
    float C[25];

    // Leitura do vetor A (10 elementos)
    printf("=== Vetor A (10 elementos) ===\n");
    for (int i = 0; i < 10; i++) {
        printf("A[%d]: ", i + 1);
        scanf("%f", &A[i]);
    }

    // Leitura do vetor B (15 elementos)
    printf("\n=== Vetor B (15 elementos) ===\n");
    for (int i = 0; i < 15; i++) {
        printf("B[%d]: ", i + 1);
        scanf("%f", &B[i]);
    }

    // Concatenação: primeiro copiar todos os elementos de A para C
    for (int i = 0; i < 10; i++) {
        C[i] = A[i];
    }

    // Em seguida, copiar todos os elementos de B para C
    // Começamos a partir do índice 10 (logo após os elementos de A)
    for (int i = 0; i < 15; i++) {
        C[10 + i] = B[i];
    }

    // Impressão dos três vetores
    printf("\nVetor A: ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", A[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < 15; i++) {
        printf("%.1f ", B[i]);
    }

    printf("\nVetor C (A + B concatenados): ");
    for (int i = 0; i < 25; i++) {
        printf("%.1f ", C[i]);
    }
    printf("\n");

    return 0;
}
