#include <stdio.h>

int main()
{
    int idade;
    float altura;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    if (idade >= 6 && idade <= 10 && altura >= 1.00) {
        printf("Categoria: Infantil\n");
    }
    else if (idade >= 11 && idade <= 17 && altura >= 1.40) {
        printf("Categoria: Junior\n");
    }
    else if (idade >= 18 && idade <= 35 && altura >= 1.70) {
        printf("Categoria: Profissional\n");
    }
    else if (idade > 35 && altura >= 1.60) {
        printf("Categoria: Senior\n");
    }
    else {
        printf("Entrevista\n");
    }

    return 0;
}