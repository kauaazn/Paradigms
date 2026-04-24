#include <stdio.h>

int main() {
    int vetor[5];
    int menor, temp;

    // Leitura dos 5 números inteiros
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordenação por Selection Sort (seleção direta)
    // Ideia: a cada passagem, encontra o MENOR elemento do trecho não ordenado
    // e o coloca na posição correta (começo do trecho).
    // Na 1ª passagem: coloca o menor de todos na posição 0
    // Na 2ª passagem: coloca o 2º menor na posição 1, e assim por diante.
    for (int i = 0; i < 4; i++) {         // 4 passagens para 5 elementos
        menor = i;                         // assume que o menor do trecho está em i

        // Percorre o restante do vetor para encontrar o índice do menor valor
        for (int j = i + 1; j < 5; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j; // atualiza o índice do menor encontrado
            }
        }

        // Se o menor não está na posição i, troca usando variável auxiliar
        if (menor != i) {
            temp = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = temp;
        }
    }

    // Impressão do vetor ordenado de forma crescente
    printf("\nVetor ordenado (crescente): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
