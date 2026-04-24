#include <stdio.h>
int main()
{
    float circunferencia,pi,raio;
    printf("Qual o valor do raio: ");
    scanf("%f",&raio);
    printf("Qual o valor de π");
    scanf("%f",&pi);
    circunferencia = pi*(raio*raio);
    printf("Circunferência = %f",circunferencia);
    return 0;
 }