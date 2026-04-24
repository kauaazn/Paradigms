#include <stdio.h>

int main()
{
    int n;
    float S = 0.0, num, den;
    int sinal = 1; 

    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // Começamos do 0 para facilitar a conta do denominador
    {
        num = 1.0;
        den = (i * 2) + 1; // Para i=0 -> 1, i=1 -> 3, i=2 -> 5...
        
        S += sinal * (num / den);
        sinal = -sinal; // Inverte o sinal para a próxima iteração
    }

    // O resultado da série S é pi/4, então multiplicamos por 4 para obter pi
    printf("Valor aproximado de pi = %f\n", S * 4);

    return 0;
}