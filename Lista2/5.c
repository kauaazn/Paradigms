#include <math.h>
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1:\n");
    scanf("%f", &nota1);
    printf("Digite a nota 2:\n");
    scanf("%f", &nota2);
    printf("Digite a nota 3:\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    if (media < 4) {
        printf("Reprovado!!");
    } else if (media >= 4 && media < 7) {
        printf("Recuperação!!");
    } else {
        printf("Aprovado!!");
    }

    return 0;
}