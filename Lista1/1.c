#include <stdio.h>
int main()
{
    float area,h,b;
    printf("Qual o valor de b: ");
    scanf("%f",&b);
    printf("Qual o valor de h: ");
    scanf("%f",&h);
    area = (b*h)/2.0;
    printf("Área = %f",area);
    return 0;
 }