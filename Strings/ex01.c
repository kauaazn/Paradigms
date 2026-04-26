#include <stdio.h>

/*
 * Ex 1: Ler primeiro nome, nome do meio e sobrenome separadamente
 * e mostrar o nome completo.
 */

int main() {
    char primeiro[50], meio[50], sobrenome[50];

    printf("Primeiro nome: ");
    scanf("%s", primeiro);

    printf("Nome do meio: ");
    scanf("%s", meio);

    printf("Sobrenome: ");
    scanf("%s", sobrenome);

    printf("Nome completo: %s %s %s\n", primeiro, meio, sobrenome);

    return 0;
}
