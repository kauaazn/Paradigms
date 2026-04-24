#include <stdio.h>
int main(){
    int a[20];
    int s = 0;
    float diferenca;
    for (int i = 0; i < 20; i++){
        printf("Digite o número %d: ", i+1);
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < 10; i++){
        diferenca = (a[i] - a[19 - i]);
        s += diferenca * diferenca;
    }
    return 0;
}