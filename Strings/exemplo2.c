#include <stdio.h>
int main(){
    char nome[30];
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome),stdin);
    printf("%s",nome);




    return 0;
}

//Ultimo caractere vai ser /0, deve-se colocar um tamanho a mais do vetor
//%s le toda a string, %c apenas caracter