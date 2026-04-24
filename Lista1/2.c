#include <stdio.h>
int main()
{
    float n1,n2,n3,media;
    char nome [50];
    printf("Qual o nome do aluno: ");
    scanf("%s",nome);
    printf("Qual o valor da primeira nota: ");
    scanf("%f",&n1);
    printf("Qual o valor da segunda nota: ");
    scanf("%f",&n2);
    printf("Qual o valor da terceira nota: ");
    scanf("%f",&n3);
    media = (n1+n2+n3)/3.0;
    printf("Média = %f",media);
    return 0;
 }