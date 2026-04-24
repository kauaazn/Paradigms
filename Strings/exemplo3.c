#include <stdio.h>
int main(){
    char nome[30];
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome),stdin);
    fputs(nome, stdout);




    return 0;
}
