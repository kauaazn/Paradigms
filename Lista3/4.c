#include <stdio.h>

int main()
{
    int n;
    float S = 0, num,den;

    printf("Digite o numero de termos: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++)
    {
        num = (i*2)-1;
        den = i;
        S += num/den;
    }

    printf("Valor de S = %f\n", S);

    return 0;
}