#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2;
    float distancia;
    printf("Qual o valor de x1: ");
    scanf("%d",&x1);
    printf("Qual o valor de y1: ");
    scanf("%d",&y1);
    printf("Qual o valor de x2: ");
    scanf("%d",&x2);
    printf("Qual o valor de y2: ");
    scanf("%d",&y2);
    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distância = %f",distancia);
    return 0;
 }