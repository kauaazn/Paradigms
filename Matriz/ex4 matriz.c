#include <stdio.h>

// Exercício: lê uma matriz 3x3 e imprime os elementos da DIAGONAL PRINCIPAL
// Diagonal principal = elementos onde linha == coluna: mat[0][0], mat[1][1], mat[2][2]
int main(){
    int mat[3][3];   // BUG original: declarava mat[2][2] mas acessava índice até 2 (out of bounds)

    printf("Digite os valores da matriz: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){   // BUG original: incrementava i++ em vez de j++ (loop infinito)
            scanf("%d", &mat[i][j]);
        }
    }

    // Percorre apenas os índices onde i == j → diagonal principal
    for(int i = 0; i < 3; i++){
        printf("Elemento = %d ", mat[i][i]);
    }
    printf("\n");  // BUG original: estava "print" em vez de "printf", fora do for

    return 0;
}
