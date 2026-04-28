#include <stdio.h>

// Exercício: lê uma matriz l x c e imprime sua TRANSPOSTA
// Transposta = trocar linhas por colunas — mat[i][j] vira mat[j][i]
int main(){
    int l, c;
    printf("Nº de linhas: ");
    scanf("%d", &l);   // BUG original: estava sem o & (comportamento indefinido)
    printf("Nº de coluna: ");
    scanf("%d", &c);   // BUG original: estava sem o &

    int mat[l][c];     // matriz de tamanho dinâmico (VLA - Variable Length Array)

    printf("Digite os valores da matriz: ");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){   // BUG original: incrementava i++ em vez de j++ (loop infinito)
            scanf("%d", &mat[i][j]);
        }
    }

    // Para imprimir a transposta: percorre colunas no loop externo e linhas no interno
    // Assim mat[j][i] inverte a posição de cada elemento
    for(int i = 0; i < c; i++){
        for(int j = 0; j < l; j++){
            printf("Transposta = %d ", mat[j][i]);
        }
        printf("\n");  // BUG original: estava "print" em vez de "printf"
    }

    return 0;
}
