#include <stdio.h>

int main() {
    float v1[10], v2[10];
    // Intercalação de dois vetores de 10 gera um vetor de 20 elementos
    float resultado[20];

    // Leitura do primeiro vetor
    printf("=== Vetor 1 (10 elementos) ===\n");
    for (int i = 0; i < 10; i++) {
        printf("v1[%d]: ", i + 1);
        scanf("%f", &v1[i]);
    }

    // Leitura do segundo vetor
    printf("\n=== Vetor 2 (10 elementos) ===\n");
    for (int i = 0; i < 10; i++) {
        printf("v2[%d]: ", i + 1);
        scanf("%f", &v2[i]);
    }

    // Intercalação: alterna entre os dois vetores
    // Posições pares do resultado recebem elementos de v1
    // Posições ímpares do resultado recebem elementos de v2
    // Exemplo com v1=[3,5,4,2,2] e v2=[7,15,20,0,18]:
    //   resultado[0]=v1[0]=3, resultado[1]=v2[0]=7
    //   resultado[2]=v1[1]=5, resultado[3]=v2[1]=15 ...
    for (int i = 0; i < 10; i++) {
        resultado[i * 2]     = v1[i]; // posição par: elemento de v1
        resultado[i * 2 + 1] = v2[i]; // posição ímpar: elemento de v2
    }

    // Impressão dos vetores
    printf("\nVetor 1:    ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", v1[i]);
    }

    printf("\nVetor 2:    ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", v2[i]);
    }

    printf("\nIntercalado: ");
    for (int i = 0; i < 20; i++) {
        printf("%.1f ", resultado[i]);
    }
    printf("\n");

    return 0;
}
