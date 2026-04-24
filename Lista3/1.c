#include <stdio.h>

int main()
{
    int num;
    int cont = 0, pares = 0, impares = 0;

    printf("Digite numeros inteiros positivos: ");

    scanf("%d", &num);

    while (num > 0)
    {
        cont++;

        if (num % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }

        scanf("%d", &num);
    }

    printf("Total de numeros: %d\n", cont);
    printf("Total de pares: %d\n", pares);
    printf("Total de impares: %d\n", impares);

    return 0;
}