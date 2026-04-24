#include <stdio.h>
int main(){
    float v1[15], v2[15];
    int v3[15];
    printf("1º vetor: ");
    for (int i = 0; i < 15; i++){
        printf("Posição: %d ", i+1);
        scanf("%f", &v1[i]);
    }
    printf("2º vetor: ");
    for (int i = 0; i < 15; i++){
        printf("Posição: %d ", i+1);
        scanf("%f", &v2[i]);
    }
    printf("3º vetor: ");
    for (int i = 0; i < 15; i++){
        if(v1[i] == v2[i]){
            v3[i] = 1;
        }
        else
            v3[i] = 0;
        
    }
    //fazer impressao dos 3 vetores
    printf("Vetor 1: ");
    for (int i = 0; i < 15; i++){
        printf("%f",v1[i]);
    }
    printf("Vetor 2: ");
    for (int i = 0; i < 15; i++){
        printf("%f",v2[i]);
    }
    printf("Vetor 3: ");
    for (int i = 0; i < 15; i++){
        printf("%f",v3[i]);
    }
    
    return 0;
}