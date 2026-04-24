#include <stdio.h>

int main()
{
    int n, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        fatorial = fatorial * i;
    }

    printf("Fatorial = %d", fatorial);

    return 0;
}