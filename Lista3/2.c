#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("Nao e primo");
            return 0;
        }
    }

    printf("Numero primo");

    return 0;
}