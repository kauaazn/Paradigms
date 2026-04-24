#include <stdio.h>

int main() {
    int idades[40];

    // Leitura das idades dos 40 alunos
    printf("Digite a idade dos 40 alunos:\n");
    for (int i = 0; i < 40; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    // Variáveis para os cálculos
    int totalAte16 = 0;    // alunos com idade <= 16
    int totalMais16 = 0;   // alunos com idade > 16
    int soma = 0;          // soma das idades para calcular a média
    int maisNovo = idades[0];  // começa com o primeiro como referência
    int maisVelho = idades[0]; // começa com o primeiro como referência

    // Percorre o vetor calculando tudo de uma vez (mais eficiente)
    for (int i = 0; i < 40; i++) {
        // Contagem por faixa de idade
        if (idades[i] <= 16) {
            totalAte16++;
        } else {
            totalMais16++;
        }

        // Acumula a soma para a média
        soma += idades[i];

        // Atualiza o mais novo se encontrar uma idade menor
        if (idades[i] < maisNovo) {
            maisNovo = idades[i];
        }

        // Atualiza o mais velho se encontrar uma idade maior
        if (idades[i] > maisVelho) {
            maisVelho = idades[i];
        }
    }

    // Média: soma dividida pela quantidade de alunos
    // Usamos float para não perder a parte decimal
    float media = (float)soma / 40;

    // Exibição dos resultados
    printf("\n=== Resultados ===\n");
    printf("Alunos com idade <= 16 anos: %d\n", totalAte16);
    printf("Alunos com idade > 16 anos:  %d\n", totalMais16);
    printf("Idade media da turma:        %.2f anos\n", media);
    printf("Idade do aluno mais novo:    %d anos\n", maisNovo);
    printf("Idade do aluno mais velho:   %d anos\n", maisVelho);

    return 0;
}
