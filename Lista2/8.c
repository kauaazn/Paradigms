#include <stdio.h>

int main()
{
    float x, y, z;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &x, &y, &z);

    // Verifica se é um triângulo válido
    if (x < y + z && y < x + z && z < x + y) {
        
        // Classificação
        if (x == y && y == z) {
            printf("Triangulo equilatero\n");
        }
        else if (x == y || x == z || y == z) {
            printf("Triangulo isosceles\n");
        }
        else {
            printf("Triangulo escaleno\n");
        }

    } else {
        printf("Nao forma um triangulo valido\n");
    }

    return 0;
}