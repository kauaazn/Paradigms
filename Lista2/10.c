#include <stdio.h>

int main() {
    int codigo;
    float pesoTerra, pesoPlaneta, gravidade;

    printf("Digite o peso na Terra: ");
    scanf("%f", &pesoTerra);

    printf("Digite o codigo do planeta (1 a 6): ");
    scanf("%d", &codigo);

    switch(codigo) {
        case 1:
            gravidade = 0.37;
            printf("Planeta: Mercurio\n");
            break;
        case 2:
            gravidade = 0.88;
            printf("Planeta: Venus\n");
            break;
        case 3:
            gravidade = 0.38;
            printf("Planeta: Marte\n");
            break;
        case 4:
            gravidade = 2.64;
            printf("Planeta: Jupiter\n");
            break;
        case 5:
            gravidade = 1.15;
            printf("Planeta: Saturno\n");
            break;
        case 6:
            gravidade = 1.17;
            printf("Planeta: Urano\n");
            break;
        default:
            printf("Codigo invalido!\n");
            return 0;
    }

    // Cálculo do peso no planeta
    pesoPlaneta = (pesoTerra / 10) * gravidade;

    printf("Peso no planeta: %.2f\n", pesoPlaneta);

    return 0;
}