#include <stdio.h>

int main() {
    int v[10];

    // Leitura dos 10 números inteiros
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("v[%d]: ", i + 1);
        scanf("%d", &v[i]);
    }

    // Busca do maior elemento e sua posição
    // Começa assumindo que o maior é o primeiro elemento
    int maior = v[0];
    int posicao = 0; // guarda o índice do maior

    for (int i = 1; i < 10; i++) {
        // Usa >= para atualizar a posição mesmo quando encontra um valor IGUAL
        // Isso garante que, em caso de empate, ficamos com o ÚLTIMO encontrado
        if (v[i] >= maior) {
            maior = v[i];
            posicao = i;
        }
    }

    printf("\nMaior elemento: %d\n", maior);
    // Soma +1 para exibir posição de 1 a 10 (mais natural para o usuário)
    printf("Posicao no vetor: %d\n", posicao + 1);

    return 0;
}
