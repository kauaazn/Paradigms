#include <stdio.h>
#include <math.h>

int main()
{
    int op;
    float a, b;

    printf("1 - Somar dois numeros\n");
    printf("2 - Raiz quadrada de um numero\n");
    printf("Digite a opcao: ");
    scanf("%d", &op);

    if(op == 1)
    {
        printf("Digite dois numeros: ");
        scanf("%f %f", &a, &b);

        printf("Resultado = %.2f", a + b);
    }
    else if(op == 2)
    {
        printf("Digite um numero: ");
        scanf("%f", &a);

        printf("Resultado = %.2f", sqrt(a));
    }
    else
    {
        printf("Opcao invalida");
    }

    return 0;
}